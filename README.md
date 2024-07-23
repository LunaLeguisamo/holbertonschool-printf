# `_printf`

`_printf` is a simplified implementation of the C standard library function `printf`. It supports format specifiers such as `%c`, `%s`, `%d`, `%i`, and `%%`.

## Function Prototypes

```c
int _printf(const char *format, ...);
```

## Parameters

- `format`: A pointer to a null-terminated string that contains the format control string.
- `...`: Additional arguments that correspond to the format specifiers in the string.

## Return Value

* Returns the number of characters printed (excluding the null byte).
* Returns -1 on error.

### Format Specifiers

- `%c`: Character
- `%s`: String
- `%d` or `%i`: Integer
- `%%`: Literal '%' character

## Usage Example

```c
#include <stdio.h>
#include "main.h"

int main() {
    int num = 987;
    char ch = 'A';
    char *str = "Hello, World!";

    _printf("Character: %c\n", ch);         // Output: Character: A
    _printf("String: %s\n", str);           // Output: String: Hello, World!
    _printf("Integer: %d\n", num);          // Output: Integer: 987
    _printf("Percent sign: %%\n");          // Output: Percent sign: %

    return 0;
}
```
## Flowchart
![Diagrama de flujo](https://github.com/user-attachments/assets/b63618be-4739-421d-83b9-331859f0e210)

## Function _printint
Was create to print integers after be converts in characters.
This function is implemented in the code of `_printf` to print integers.

### Function Prototypes

```c
int _printint(long n);
```
