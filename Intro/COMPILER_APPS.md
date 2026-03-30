# Setting Up Your C Compiler

> [!NOTE]
> Before you write any code, you need a compiler — a tool that takes your `.c` file and turns it into a program your computer can actually run.
> For Installing/ Setting Up Compiler [Check Here](./COMPILER_INSTALLATION.md)


This guide covers every major platform so you can get started regardless of what device you're on.

**Jump to your platform:**

[ Windows](#windows) · [ Linux](#linux) · [macOS](#macos) · [Android](#android) 

---

## Windows

### Recommended — Code::Blocks

The easiest way to get started on Windows. Code::Blocks comes with a built-in compiler (MinGW) so there's nothing extra to install — download, install, and you're writing C.

- Beginner-friendly interface
- Built-in MinGW compiler, no extra setup
- Good for learning, not too overwhelming

**Download:** https://www.codeblocks.org/

---

### Alternative — Visual Studio Code

If you want something more powerful and don't mind a bit of setup, VS Code is the industry standard. You'll need to install GCC/MinGW separately and configure it, but it's worth it once you're past the basics.

- Lightweight but extremely powerful
- Requires manual GCC/MinGW setup
- Better for intermediate/advanced use

**Download:** https://code.visualstudio.com/

> **Quick setup for VS Code on Windows:**
> 1. Install [MinGW](https://www.mingw-w64.org/)
> 2. Add it to your system PATH
> 3. Install the **C/C++ extension** in VS Code
> 4. You're good to go

---

## Linux

### Recommended — GCC via Terminal

Linux comes with everything you need. Just open a terminal and run:

```bash
sudo apt install gcc        # Ubuntu / Debian
sudo dnf install gcc        # Fedora
sudo pacman -S gcc          # Arch
```

Verify the installation:

```bash
gcc --version
```

That's it. GCC is the most widely used C compiler in the world and is what most professional developers use day to day.

---

### Alternative — VS Code + GCC

If you prefer a GUI editor over writing everything in the terminal:

```bash
sudo snap install code --classic
```

Then pair it with GCC and the C/C++ extension — same as the Windows setup above.

---

## macOS

### Recommended — Xcode Command Line Tools

The quickest way to get GCC (actually Clang, which works the same way) on macOS:

```bash
xcode-select --install
```

A popup will appear — click install and wait for it to finish. Once done, verify with:

```bash
gcc --version
```

No Xcode download needed, just the command line tools.

---

### Alternative — VS Code + Homebrew GCC

If you want true GCC instead of Clang:

```bash
brew install gcc
```

Then use VS Code as your editor with the C/C++ extension.

---

## Android

### Recommended — Cxxdroid

The best C/C++ compiler app on Android. Works fully offline, feels like a real IDE, and supports libraries like SQLite and Boost which most mobile compilers don't.

- Works completely offline
- Supports external libraries
- Fast, stable, and beginner-friendly

**Download:** [Cxxdroid on Google Play](https://play.google.com/store/apps/details?id=ru.iiec.cxxdroid)

---

### Alternative — C/C++ N-IDE

A lightweight option with a built-in editor and file manager. Good if you want something simpler.

**Download:** [C/C++ N-IDE on Google Play](https://play.google.com/store/apps/details?id=com.abdo21.cdroid)

---

## What's Next?

Once your compiler is ready, let's write your first C program.

➡️ [Your First C Program](./first-program.md)
