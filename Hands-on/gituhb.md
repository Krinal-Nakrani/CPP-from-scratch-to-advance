Here's a step-by-step guide to push your local `C++` folder to that GitHub repository:

## Step 1: Install Git (if not already installed)
Check if Git is installed by opening a terminal/command prompt and running:
```bash
git --version
```
If not installed, download it from [git-scm.com](https://git-scm.com/downloads) and install it.

## Step 2: Configure Git (first-time setup only)
```bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
```

## Step 3: Navigate to Your Project Folder
Open terminal/command prompt and go into your `C++` folder (the root folder shown in your screenshot):
```bash
cd path/to/your/C++
```

## Step 4: Initialize Git in the Folder
```bash
git init
```

## Step 5: Add a `.gitignore` (Recommended)
If your folder has compiled `.exe` files mixed with source `.cpp` files, it's cleaner to exclude executables from being uploaded. Create a file named `.gitignore` in the root folder with this content:
```
*.exe
*.out
*.o
```
This keeps your repo clean with just source code, docs, and PDFs — not compiled binaries (which are large, platform-specific, and regenerable from the `.cpp` files).

## Step 6: Connect to Your GitHub Repository
```bash
git remote add origin your_repository_link
```

## Step 7: Stage All Files
```bash
git add .
```

## Step 8: Commit the Files
```bash
git commit -m "Initial commit: C++ 3-day lab manual, and hands-on practicals"
```

## Step 9: Set the Branch Name (if needed)
GitHub defaults to `main` branch:
```bash
git branch -M main
```

## Step 10: Push to GitHub
```bash
git push -u origin main
```

You may be prompted to log in to GitHub (via browser popup or a Personal Access Token if using HTTPS — GitHub no longer accepts plain passwords for pushing).

---

