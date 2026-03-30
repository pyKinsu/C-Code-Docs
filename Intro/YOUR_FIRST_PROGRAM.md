# Your First C Program

Let's write your very first C program — the classic **Hello, World!**

Don't worry about understanding every line just yet. This is just to get you comfortable writing and running code. We'll break down exactly what each part means in the next section.

---

## The Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Type this out yourself rather than copy-pasting — it helps you get used to the syntax faster.

---

## Running It

Already set up your compiler? Pick your platform below and run it.

> [!NOTE]
> If you haven't set up a compiler yet, head over to the [Compiler Installation Guide](./compiler-installation.md) first, then come back here.

### Windows — Code::Blocks

1. Open **Code::Blocks**
2. Click **File → New → Empty File**
3. Type the program above
4. Save the file as `hello.c`
5. Press **F9** or click **Build and Run**

### Windows / Linux / macOS — Terminal

```bash
gcc hello.c -o hello
./hello
```

On Windows with Command Prompt:

```bash
gcc hello.c -o hello
hello.exe
```

### Android — Cxxdroid

1. Open **Cxxdroid** and create a new file
2. Type the program above
3. Tap the **Run ▶** button

### Online — No setup needed

Paste the code at [onlinegdb.com](https://www.onlinegdb.com/) and hit **Run**.

---

## Output

If everything went right, you should see:

```
Hello, World!
```

That's it — you just ran your first C program. ✅

---

## What Does Each Line Do?

You don't need to memorize this now — we'll go deep on each concept in the next sections. But here's a quick overview so nothing feels completely mysterious:

| Line | What it does |
|---|---|
| `#include <stdio.h>` | Tells the compiler to include the standard input/output library — needed for `printf` to work |
| `int main()` | Every C program starts here. This is the entry point — execution begins from line one of `main()` |
| `printf("Hello, World!\n")` | Prints text to the screen. The `\n` moves the cursor to a new line after printing |
| `return 0` | Tells the operating system the program finished successfully. `0` means no errors |

---

## Common Mistakes

Watch out for these — they trip up almost every beginner at some point:

> [!CAUTION]
> Missing a semicolon `;` at the end of a statement is the most common error. Every statement in C must end with one.

> [!WARNING]
> Forgetting `#include <stdio.h>` will cause a compile error because the compiler won't know what `printf` is.

> [!TIP]
> C is case-sensitive. `printf` and `Printf` are completely different things — always use lowercase.

Other things to double check:
- Writing `print` instead of `printf`
- Missing the closing `"` on your string
- Not wrapping your code inside `main()` curly braces `{ }`

---

➡️ **Next:** [Basic Syntax](./BASIC_SYNTAX.md)
❓ **FAQs:** [FAQ](./FAQ.md)
