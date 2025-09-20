# 42 Piscine – Exercises & Rushes  

![Python](https://img.shields.io/badge/python-3.13-blue.svg)  
![CLion](https://img.shields.io/badge/IDE-CLion_252.23892.426-green.svg)  
![Norminette](https://img.shields.io/badge/norminette-passing-brightgreen.svg)  

This repository contains my work for the **42 Piscine**.  
It includes the exercises (`C00`–`C08`) and Rush projects (`Rush00`, `Rush01`), along with the official PDFs for reference.  

⚠️ **Note**: The repository is intended for exploration, learning, and reference. Please respect the 42 honor code — try solving the problems yourself first before peeking.  
⚠️ **Note**: This is still WIP so expect a lot of changes to structure and code that hasn't been submitted

---

## 📑 Table of Contents
1. [Project Status](#project-status)  
2. [Notes on Code Quality](#notes-on-code-quality)  
3. [Requirements](#requirements)  
4. [Setup Instructions](#setup-instructions)  
   - [CLion Project Setup](#clion-project-setup)  
   - [Norminette Setup](#norminette-setup)  
5. [CLion Configuration](#clion-configuration)  
   - [Plugins](#plugins)  
   - [External Tools](#external-tools)  
6. [Usage](#usage)  
7. [Compatibility Notes](#compatibility-notes)  
8. [Contributing / Disclaimer](#contributing--disclaimer)  

---

## ✅ Project Status
- **Completed & Submitted:** `C00` → `C08`, `Rush00`, `Rush01`  
- **Norminette:** All submitted projects pass `norminette`.  
- **Untested / Not Submitted:** Other projects exist in repo but not tested for submission.  

---

## ⚡ Notes on Code Quality
Most of this was done under piscine time pressure 😅.  
There are almost certainly more optimal ways to solve some exercises.  
Think of this as “working solutions” rather than “perfect reference code.”  

---

## 🛠 Requirements
- **CLion**: Currently tested with **CL-252.23892.426**  
- **Python**: 3.13  
- **Norminette**: Installed via Python  
  - [Norminette GitHub Repo](https://github.com/42School/norminette)  

---

## ⚙️ Setup Instructions

### CLion Project Setup
- All projects are configured for **CLion on Windows**.  
- The provided `CMakeLists.txt` works out of the box for that environment.  
- On **Linux/macOS**, CMake may need tweaking (paths, toolchains, or compilation flags).  
- ⚠️ If you add new files or don’t see build targets, use **File → Reload CMake Project**.  

### Norminette Setup
Install norminette globally via pip:  
```bash
pip install norminette
