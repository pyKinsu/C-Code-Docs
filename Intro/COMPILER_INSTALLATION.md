# Compiler Installation Guide

This guide walks you through installing the GCC and G++ compilers on your system. Pick your operating system and follow the steps — it should take less than 10 minutes.

**Jump to your OS:**

[ Windows](#windows) · [ Ubuntu / Linux](#ubuntu--linux) · [ macOS](#macos) · [ Android](#android)

> Looking for a full IDE or editor instead? Check out the [Compiler Apps Guide](./COMPILER_APPS.md).

---

## Windows

We'll be installing **MinGW** — a Windows port of GCC that lets you compile C and C++ programs right from your machine.

> Make sure you're connected to the internet before starting.

### Step 1 — Download the installer

Go to the MinGW download page and grab the installer:

👉 http://sourceforge.net/projects/mingw/files/Installer/

Look for `mingw-get-setup.exe` and download it.

### Step 2 — Run the installer

Double-click the downloaded file to launch the Installation Wizard, then:

1. Click **Install**
2. Click **Continue** — twice
3. Once the package manager opens, find **`mingw32-gcc-g++`** and select **Mark for Installation**
4. Also find **`mingw32-gcc-objc`** and mark it for installation too
5. Go to **Installation** (top left) → **Apply Changes** → **Apply**
6. Wait for it to finish, then click **Close**

### Step 3 — Add MinGW to your PATH

The compiler is installed but Windows doesn't know where to find it yet. Here's how to fix that:

1. Search for **This PC** in the Windows search bar → right-click → **Properties**
2. Click **Advanced System Settings** → **Environment Variables**
3. Under **System Variables**, find and double-click **Path**
4. Add a new entry with the path to your MinGW `bin` folder — usually:
   ```
   C:\MinGW\bin
   ```
5. Click **OK** on all windows to save

### Step 4 — Verify the installation

Open Command Prompt and run:

```bash
gcc -v
```

If you see a version number printed — you're all set. ✅

---

## Ubuntu / Linux

This is the easiest setup of all. One command and you're done.

> Make sure you're connected to the internet before starting.

Open your terminal with `Ctrl + Alt + T` and run:

```bash
sudo apt-get install gcc g++
```

Enter your password when prompted, then type `Y` to confirm. The installation will take a minute or two.

Once it's done, verify with:

```bash
gcc -v
g++ -v
```

If you see version info — you're good to go. ✅

**On other distros:**

```bash
sudo dnf install gcc gcc-c++     # Fedora
sudo pacman -S gcc               # Arch
```

---

## macOS

macOS makes this simple. Just run one command in your terminal and the system handles the rest.

Open **Terminal** and run:

```bash
xcode-select --install
```

A dialog box will pop up asking you to install the Command Line Tools — click **Install** and wait for it to finish.

Once done, verify with:

```bash
gcc --version
```

If a version number shows up — you're ready. ✅

> Note: macOS installs **Clang** under the `gcc` command, which works the same way for C and C++ programs. You don't need anything else.

---

## Android

Android doesn't support installing GCC directly, but there are great apps that give you a full C/C++ compiler on your phone.

👉 [Browse C/C++ compiler apps on Google Play](https://play.google.com/store/search?q=C%20compiler&c=apps)

For our top picks with setup instructions, see the [Compiler Apps Guide](./COMPILER_APPS.md).

---

## Something not working?

A few common issues:

- **`gcc` not recognized on Windows** — your PATH wasn't set correctly, go back to Step 3
- **Permission denied on Linux** — make sure you're using `sudo`
- **Nothing happens on macOS** — wait a few minutes, the download runs in the background

If you're still stuck, open an [Issue](../../issues) and we'll help you out.

---

➡️ **Next:** [Your First C Program](./YOUR_FIRST_PROGRAM.md)
❓ **FAQs:** [FAQ](./FAQ.md)
