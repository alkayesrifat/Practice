import requests
from getpass import getpass
import re
import os

def login_vjudge(username, password):
    session = requests.Session()
    login_url = "https://vjudge.net/user/login"

    payload = {
        "username": username,
        "password": password
    }

    headers = {
        "User-Agent": "Mozilla/5.0"
    }

    response = session.post(login_url, data=payload, headers=headers)
    if response.ok and "Login failed" not in response.text:
        print("[+] Login successful.")
        return session
    else:
        print("[-] Login failed. Check credentials.")
        return None


def sanitize_filename(name):
    return re.sub(r'[\\/*?:"<>|]', "_", name).strip()


def get_contest_title(session, cid):
    url = f"https://vjudge.net/contest/{cid}"
    response = session.get(url)
    if response.ok:
        match = re.search(r"<title>(.*?)</title>", response.text, re.IGNORECASE | re.DOTALL)
        if match:
            return sanitize_filename(match.group(1))
    return f"contest_{cid}"


def download_contest_pdf(session, cid):
    base_url = f"https://vjudge.net/contest/{cid}/problemPdfAll"
    os.makedirs("downloads", exist_ok=True)

    print(f"[*] Fetching title for contest {cid}...")
    title = get_contest_title(session, cid)

    response = session.get(base_url)
    if response.ok and response.headers.get("Content-Type") == "application/pdf":
        filename = os.path.join("downloads", f"{title}.pdf")
        with open(filename, "wb") as f:
            f.write(response.content)
        print(f"[+] Saved: {filename}")
        return True
    else:
        print(f"[-] Failed to download contest {cid}")
        return False


if __name__ == "__main__":
    username = "alkayesrifat"
    password = "bVvJh7FSJtNvv#9"

    session = login_vjudge(username, password)
    if session:
        ids_input = input("Enter contest IDs (space separated, end with -1):\n> ")
        contest_ids = ids_input.strip().split()

        success, fail = 0, 0
        for cid in contest_ids:
            if cid == "-1":
                break
            if cid.isdigit():
                if download_contest_pdf(session, cid):
                    success += 1
                else:
                    fail += 1
            else:
                print(f"[-] Invalid input: {cid}")
                fail += 1

        print(f"\n[*] Download complete: {success} success, {fail} failed.")
