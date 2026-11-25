# École 42 Lyon: my first C projects

My first C projects at École 42 Lyon (2023-2024): a rewrite of part of the C standard library (libft), my own `printf` (ft_printf) and a line-by-line file reader (get_next_line). No standard library functions allowed beyond `read`, `write`, `malloc` and `free`, strict compiler flags, and a strict coding style (the 42 Norm).

At École 42, there are no classes and no teachers: each project is a specification, and the code is validated by automated tests and by other students' peer reviews. This repository gathers the first three projects of the common core. They force you to understand what the basic C functions really do: memory management, pointers, strings, variadic functions, file reading.

## The projects

### libft: rewriting part of the standard library

A static library (`libft.a`) of 34 functions, reused in the following projects.

- **Rewritten libc functions**: memory (`ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_calloc`…), strings (`ft_strlen`, `ft_strlcpy`, `ft_strnstr`, `ft_strdup`…), characters (`ft_isalpha`, `ft_toupper`…) and conversion (`ft_atoi`).
- **Additional functions**: `ft_split` (split a string on a separator), `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_itoa`, `ft_strmapi`, `ft_striteri` and functions that write to a file descriptor (`ft_putstr_fd`, `ft_putnbr_fd`…).

### ft_printf: recoding printf

A variadic `ft_printf` function handling the `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` and `%%` conversions. Like `printf`, it returns the number of characters written, or -1 on a write error. The `printfmain.c` file compares its output with `printf` on a series of cases (`NULL` strings, edge-case integers, pointers…).

### get_next_line: reading a file line by line

`get_next_line(fd)` returns the next line of a file on each call, whatever the read buffer size (`BUFFER_SIZE`, set at compile time). What is left over between two calls is kept in a static variable. The bonus version follows several file descriptors at the same time.

## Build

```bash
make -C libft          # builds libft/libft.a
make -C ft_printf      # builds ft_printf/libftprintf.a
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -I get_next_line \
   main.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
```

Every file compiles with `-Wall -Wextra -Werror`. The projects were written and graded on the school's Linux machines.

## What I took away from them

- Thinking about memory: every `malloc` has its `free`, and every error path must release what was already allocated.
- Reading a specification precisely and handling edge cases (empty string, `NULL`, `INT_MIN`, end of file without a newline).
- Writing Makefiles and working with Git from day one.

## Acknowledgements

Thanks to Vincent Domaschio ([vdomasch](https://github.com/vdomasch)), who contributed to the ft_printf fixes, the get_next_line bonus and the `printfmain.c` test file.

---

Martin Bolmier, now a Data Science student (BUT Science des données, Lyon) · [LinkedIn](https://www.linkedin.com/in/mbolmier/)
