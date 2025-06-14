import os
import argparse
import datetime
import pyperclip

def save_problem(title, topic, lang_ext="cpp"):
    folder = topic.lower()
    os.makedirs(folder, exist_ok=True)

    # Format filename
    filename = f"{title.replace(' ', '_')}_GFG.{lang_ext}"
    filepath = os.path.join(folder, filename)

    # Get problem content from clipboard
    content = pyperclip.paste()

    # Format header and template
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write("/*\n")
        f.write(f"Title: {title} (GFG)\n")
        f.write(f"Date: {datetime.date.today().strftime('%d %B %Y')}\n\n")
        f.write("Problem:\n")
        f.write(content.strip())
        f.write("\n*/\n\n")

        if lang_ext == "cpp":
            f.write("class Solution {\npublic:\n    \n};\n")
        elif lang_ext == "py":
            f.write("class Solution:\n    def solve(self):\n        pass\n")
        else:
            f.write("// Start coding here\n")

    print(f"✅ Problem saved to {filepath}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('--title', required=True, help="Problem title (e.g. Missing Number)")
    parser.add_argument('--topic', required=True, help="Topic folder (e.g. arrays, graphs)")
    parser.add_argument('--lang', default="cpp", help="File extension (cpp, py, java, etc.)")
    args = parser.parse_args()

    save_problem(args.title, args.topic, args.lang)
