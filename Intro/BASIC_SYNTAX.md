
## 🧱 Structure of a C Program

```c
#include <stdio.h>   // Header file ( Preprocessor Statement with header file section )

int x;               // Global variable

int main() {
    int y;           // Local variable

    
    printf("Hello, World!");     // Entry point

    return 0;        
}
````

> [!NOTE]
> Every C program must follow a proper structure to compile and run correctly.

---

## 🔑 Key Components

### 1. Header Files (`#include`)

```c
#include <stdio.h>
```

> [!NOTE]
> `stdio.h` is used for input/output functions like `printf()` and `scanf()`.

---

### 2. Main Function (`main()`)

```c
int main() {
    // code
}
```

> [!WARNING]
> Without `main()`, your program will not execute.

---

### 3. Statements

```c
printf("Hello");
```

> [!TIP]
> Always end statements with a semicolon `;`

---

### 4. Keywords

Examples:

```
int, return, if, else, while
```

> [!NOTE]
> Keywords are reserved and cannot be used as variable names.

---

### 5. Variables

```c
int a = 10;
```

> [!TIP]
> Always declare variables before using them.

---

### 6. Data Types

| Data Type | Description            |
| --------- | ---------------------- |
| int       | Integer                |
| float     | Decimal                |
| char      | Character              |
| double    | High precision decimal |

---

### 7. Operators

| Type       | Example    |
| ---------- | ---------- |
| Arithmetic | +, -, *, / |
| Relational | ==, !=, >  |
| Logical    | &&, ||     |

---

### 8. Comments

```c
// Single-line comment

/* Multi-line
   comment */
```

> [!TIP]
> Use comments to make your code more readable.

---

### 9. Semicolon (`;`)

> [!WARNING]
> Missing `;` will cause a compilation error.

---

### 10. Braces `{ }`

```c
{
    // block of code
}
```

> [!NOTE]
> Braces define the scope of functions and control structures.

---

### 11. Case Sensitivity

```c
int a;
int A;
```

> [!WARNING]
> `a` and `A` are treated as different variables.

---

## ⚡ Example Program

```c
#include <stdio.h>

int main() {
    int num = 5;

    printf("Number = %d", num);

    return 0;
}
```
