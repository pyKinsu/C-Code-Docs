# How to Run C Programs

You've installed your compiler — now let's write some code and actually run it. This guide walks you through the full process on every platform.

**Jump to your platform:**

[ Windows](#windows) · [ Linux](#linux) · [ macOS](#macos) · [ Android](#android) · [ Online](#online-compilers)

---

## Windows

### Using Code::Blocks

1. Open **Code::Blocks**
2. Click **File → New → Empty File**
3. Write your C code — here's a simple one to start with:
   ```c
   #include <stdio.h>

   int main() {
       printf("Hello, World!\n");
       return 0;
   }
   ```
4. Save the file with a `.c` extension — for example `program.c`
5. Click **Build and Run** or press `F9`
6. A console window will open showing your output

> [!TIP]
> Always save your file before running. Code::Blocks won't compile unsaved changes.

### Using the Command Prompt (MinGW)

If you installed MinGW and prefer the terminal:

1. Open **Command Prompt**
2. Navigate to the folder where your `.c` file is saved:
   ```bash
   cd C:\Users\YourName\Documents
   ```
3. Compile your program:
   ```bash
   gcc program.c -o program
   ```
4. Run it:
   ```bash
   program.exe
   ```

> [!NOTE]
> The `-o program` part tells the compiler what to name the output file. You can name it anything you like.

---

## Linux

### Using the Terminal

1. Open your terminal with `Ctrl + Alt + T`
2. Create a new file:
   ```bash
   nano program.c
   ```
3. Write your code:
   ```c
   #include <stdio.h>

   int main() {
       printf("Hello, World!\n");
       return 0;
   }
   ```
4. Save and exit — press `Ctrl + X`, then `Y`, then `Enter`
5. Compile:
   ```bash
   gcc program.c -o program
   ```
6. Run:
   ```bash
   ./program
   ```

You should see `Hello, World!` printed in the terminal. ✅

> [!TIP]
> You can also write your code in any text editor (VS Code, Gedit, Vim) and then compile from the terminal. You don't have to use `nano`.

### Using VS Code

1. Open your `.c` file in VS Code
2. Open the integrated terminal with `` Ctrl + ` ``
3. Compile and run:
   ```bash
   gcc program.c -o program && ./program
   ```

> [!NOTE]
> The `&&` runs both commands in one go — compile first, then run immediately if there are no errors.

---

## macOS

### Using the Terminal

1. Open **Terminal** (search it in Spotlight with `Cmd + Space`)
2. Navigate to where your file is saved:
   ```bash
   cd ~/Documents
   ```
3. Create your file:
   ```bash
   nano program.c
   ```
4. Write your code:
   ```c
   #include <stdio.h>

   int main() {
       printf("Hello, World!\n");
       return 0;
   }
   ```
5. Save and exit — press `Ctrl + X`, then `Y`, then `Enter`
6. Compile:
   ```bash
   gcc program.c -o program
   ```
7. Run:
   ```bash
   ./program
   ```

You should see `Hello, World!` in your terminal. ✅

### Using VS Code

1. Open your `.c` file in VS Code
2. Open the integrated terminal with `` Ctrl + ` ``
3. Compile and run:
   ```bash
   gcc program.c -o program && ./program
   ```

> [!TIP]
> Install the **Code Runner** extension in VS Code — it lets you run your C file with a single click or `Ctrl + Alt + N`.

---

## Android

### Using Cxxdroid

1. Open **Cxxdroid**
2. Tap the **+** button to create a new file
3. Write your C code in the editor
4. Tap the **Run** button (▶) at the top
5. Your output will appear in the console at the bottom of the screen

> [!NOTE]
> Cxxdroid automatically compiles and runs in one step — you don't need to type any commands.

### Using C/C++ N-IDE

1. Open the app and tap **New Project**
2. Select **C Program** as the project type
3. Write your code in the built-in editor
4. Tap **Build & Run**
5. Output appears in the built-in terminal below

> [!TIP]
> Save your file before running. Both apps support multiple files so you can organize your code as your programs grow.

---

## Online Compilers

No installation needed — open a browser and start coding immediately.

### OnlineGDB (Recommended)

1. Go to [https://www.onlinegdb.com/](https://www.onlinegdb.com/)
2. Make sure the language is set to **C** in the top right dropdown
3. Write your code in the editor
4. Click the green **Run** button
5. Output appears in the console below

> [!TIP]
> OnlineGDB also has a built-in debugger — you can step through your code line by line, which is really useful when something isn't working.

### Replit

1. Go to [https://replit.com/](https://replit.com/) and sign in
2. Click **+ Create Repl** and choose **C**
3. Write your code in `main.c`
4. Click **Run**
5. Output appears in the console on the right

> [!NOTE]
> Replit saves your code automatically and lets you access it from any device. Great if you switch between phone and computer.

---

## Something went wrong?

Here are the most common errors beginners run into:

| Error | What it means | Fix |
|---|---|---|
| `gcc: command not found` | Compiler isn't installed or not in PATH | Go back to the [installation guide](./compiler-installation.md) |
| `undefined reference to main` | Your `main()` function is missing or misspelled | Check your code for `int main()` |
| `expected ';' before '}'` | Missing semicolon somewhere | Check every line ends with `;` |
| Program runs but shows nothing | `printf` might be missing or wrong | Make sure you have `#include <stdio.h>` at the top |

> [!CAUTION]
> If you get a long list of errors, don't panic. Fix them one at a time starting from the top — later errors are often caused by the first one.

---

➡️ **Next:** [Understanding Your First Program](./YOUR_FIRST_PROGRAM.md)
❓ **FAQs:** [FAQ](./FAQ.md)
