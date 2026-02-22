# ft_printf

A C implementation of the standard `printf` function, compiled as a static library (`libftprintf.a`).

This project is part of the 42 school curriculum and covers variadic functions, base conversion, and format string parsing.

## Supported Conversions

| Specifier | Description |
|---|---|
| `%c` | Single character |
| `%s` | String (prints `(null)` for NULL) |
| `%p` | Pointer address in hexadecimal (`0x...`, `(nil)` for NULL) |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Unsigned hexadecimal (lowercase) |
| `%X` | Unsigned hexadecimal (uppercase) |
| `%%` | Literal `%` character |

## Return Value

Returns the total number of characters written, matching the behavior of the standard `printf`.

## Usage

Include the library in your project:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Number: %d, Hex: %x\n", "world", 42, 255);
}
```

Compile linking against the library:

```bash
cc main.c libftprintf.a -o program
```

## Build

```bash
make        # build libftprintf.a
make clean  # remove object files
make fclean # remove object files and library
make re     # full rebuild
```

## File Structure

| File | Description |
|---|---|
| `ft_printf.h` | Header: prototypes and base string constants |
| `ft_printf.c` | Format string parser and variadic dispatcher |
| `ft_print_c.c` | `%c` handler |
| `ft_print_s.c` | `%s` handler |
| `ft_print_p.c` | `%p` handler |
| `ft_putnbr.c` | `%d` / `%i` handler |
| `ft_print_u.c` | `%u` handler |
| `ft_print_x.c` | `%x` handler (lowercase hex) |
| `ft_printX.c` | `%X` handler (uppercase hex) |
| `ft_putnbr_base.c` | Generic base-N number printer used by `%x`, `%X`, `%p` |

## Author

dancuenc — 42 Madrid
