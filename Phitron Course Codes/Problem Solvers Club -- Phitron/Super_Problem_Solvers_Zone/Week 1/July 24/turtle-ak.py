import argparse
import re
import tkinter as tk
from tkinter import scrolledtext



OPS = [
    '+', '-', '*', '/', '%', '++', '--',
    '+=', '-=', '*=', '/=', '%=', '=', '==', '!=',
    '&&', '||', '!', '&', '|', '^', '<<', '>>',
    '<', '>', '<=', '>=', '<<=', '>>=', '&=', '|=', '^=', ',',
    '(', ')', '{', '}', ';', 'else', ':', '::', '?'
]
SPACED_OPS = ['else']
UNARY_OPS= ["+", "-", "&", "!", "*"]
PREPROCESSOR_TOKEN = '#'

def remove_everything_between(subs1, subs2, line):
    regex = re.compile(subs1 + r'.*' + subs2)
    return regex.sub('', line)

def remove_everything_before(subs, line):
    regex = re.compile(r'.*' + subs)
    return regex.sub('', line)

def remove_everything_past(subs, line):
    regex = re.compile(subs + r'.*')
    return regex.sub('', line)

def remove_multiline_comments(lines):
    start, end = '/*', '*/'
    escaped_start, escaped_end = '/\*', '\*/'
    in_comment = False
    newlines = []
    for line in lines:
        if not in_comment:
            start_pos = line.find(start)
            if start_pos != -1:
                in_comment = True
                end_pos = line.find(end)
                if start_pos < end_pos:
                    line = remove_everything_between(escaped_start, escaped_end, line)
                    in_comment = False
                else:
                    line = remove_everything_past(escaped_start, line)
        else:
            end_pos = line.find(end)
            if end_pos != -1:
                line = remove_everything_before(escaped_end, line)
                in_comment = False
                start_pos = line.find(start)
                if start_pos != -1:
                    line = remove_everything_past(escaped_start, line)
                    in_comment = True
            else:
                line = ''
        newlines.append(line)
    return newlines

def remove_inline_comments(lines):
    return list(map(lambda x: remove_everything_past('//', x), lines))

def minify_operator(op):
    regex = re.compile(" *{} *".format(re.escape(op)))
    repl = op + " " if op in SPACED_OPS else op
    return lambda string: regex.sub(repl, string)

def fix_spaced_ops(minified_txt):
    for op in SPACED_OPS:
        minified_txt = re.sub(f"{op} {{", f"{op}{{", minified_txt)
    return minified_txt

def fix_unary_operators(lines):
    regex_unary_ops = re.escape('[{}]'.format(''.join(UNARY_OPS)))
    pattern = "^(#[a-z]+ +[\w\d]+)([" + regex_unary_ops + "][\w\d]+)$"
    repl = r'\1 \2'
    for (idx, line) in enumerate(lines):
        if is_preprocessor_directive(line):
            lines[idx] = re.sub(pattern, repl, line)
    return lines

def clear_whitespace_first_pass(lines):
    lines = map(lambda x: x.replace('\t', ' '), lines)
    lines = map(lambda x: x.strip(' '), lines)
    return list(lines)

def reinsert_preprocessor_newlines(lines):
    for idx, line in enumerate(lines):
        if is_preprocessor_directive(line) or (
         idx != len(lines)-1 and is_preprocessor_directive(lines[idx+1])):
            lines[idx] = lines[idx] + '\n'
    return lines

def fix_duplicate_newlines(file):
    return re.sub('[\n]{2,}', '\n', file)

def is_preprocessor_directive(line):
    return line.startswith(PREPROCESSOR_TOKEN)

def minify_source(orig_source, args=None):
    if args is None:
        args = argparse.Namespace(
            keep_newlines=False,
            keep_multiline=False,
            keep_inline=False,
            newline="\n"
        )

    lines = orig_source.split('\n')
    lines = clear_whitespace_first_pass(lines)
    if not args.keep_newlines:
        lines = reinsert_preprocessor_newlines(lines)

    for op in OPS:
        lines = map(minify_operator(op), lines)
    if not args.keep_inline:
        lines = remove_inline_comments(lines)
    if not args.keep_multiline:
        lines = remove_multiline_comments(lines)

    multi_spaces = re.compile(r'[ ]+ *')
    lines = list(map(lambda string: multi_spaces.sub(' ', string), lines))

    lines = fix_unary_operators(lines)

    minified = ""
    if args.keep_newlines:
        minified = args.newline.join(lines)
    else:
        minified = fix_duplicate_newlines(''.join(lines))

    minified = fix_spaced_ops(minified)

    return minified



def run_minifier():
    source_code = input_box.get("1.0", tk.END)
    args = argparse.Namespace(
        keep_newlines=False,
        keep_multiline=False,
        keep_inline=False,
        stats=False,
        names=False,
        newline="\n"
    )
    minified = minify_source(source_code, args)
    output_box.delete("1.0", tk.END)
    output_box.insert(tk.END, minified)


root = tk.Tk()
root.title("C Code Minifier")
root.geometry("1000x700")


tk.Label(root, text="Paste your C code:", font=("Helvetica", 12)).pack()
input_box = scrolledtext.ScrolledText(root, height=15, width=120, bg="#f9f9f9", font=("Consolas", 11))
input_box.pack(padx=10, pady=5)


tk.Button(root, text="Minify", command=run_minifier, bg="#4CAF50", fg="white", font=("Helvetica", 12)).pack(pady=10)


tk.Label(root, text="Minified code:", font=("Helvetica", 12)).pack()
output_box = scrolledtext.ScrolledText(root, height=15, width=120, bg="#e0f7fa", font=("Consolas", 11))
output_box.pack(padx=10, pady=5)


root.mainloop()