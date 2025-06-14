# 🧠 GFG Problem Solving Archive

[![GitHub stars](https://img.shields.io/github/stars/PrasanKumar1101/gfg-solutions?style=social)](https://github.com/PrasanKumar1101/gfg-solutions/stargazers)
[![Last Commit](https://img.shields.io/github/last-commit/PrasanKumar1101/gfg-solutions)](https://github.com/PrasanKumar1101/gfg-solutions/commits/main)
[![Languages](https://img.shields.io/github/languages/top/PrasanKumar1101/gfg-solutions)](https://github.com/PrasanKumar1101/gfg-solutions)
[![License](https://img.shields.io/github/license/PrasanKumar1101/gfg-solutions)](https://github.com/PrasanKumar1101/gfg-solutions/blob/main/LICENSE)
![GFG Problems Solved](https://img.shields.io/badge/GFG_Problems_Solved-97-brightgreen)

This repository contains my GeeksforGeeks (GFG) solutions categorized by topic. Each problem includes:
- ✅ Full problem statement as a comment
- 🧩 Structured C++ solution
- 🗂️ Organized folders by topic (e.g., Arrays, Trees, Graphs)
- 📅 Timestamp of when it was solved

> ⚙️ Powered by a custom Python script that auto-generates solution files from clipboard content.

---
## 📁 Folder Structure
```bash
gfg-solutions/
├── arrays/
│   ├── missing_number.cpp
│   └── ...
├── trees/
│   ├── diameter_of_binary_tree.cpp
│   └── ...
├── graphs/
│   ├── number_of_islands.cpp
│   └── ...
└── ...
```


---

## 🧰 Tech Stack

- **Language:** C++
- **Automation Tool:** Python 3.11
- **Clipboard Handling:** `pyperclip`
- **Version Control:** Git & GitHub

---

## 🚀 Usage Instructions

### 🔹 Step-by-step to Add New Problem:

1. Open a GFG problem (e.g., [Missing Number](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1)).
2. Copy the **full problem description** (Ctrl + A → Ctrl + C).
3. Run the Python script:

```bash
py -3.11 save_gfg.py --title "Missing Number" --topic arrays
arrays/missing_number.cpp
