import pyautogui as pu

n  = int(input())

for i in range(1,n+2):
    for j in range(1,i):
        pu.typewrite('*')
    pu.press('enter')

