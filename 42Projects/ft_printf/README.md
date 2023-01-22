# ft_printf + ft_printf_fd
<P ALIGN="CENTER"><IMG STYLE="WIDTH: 100PX; HEIGHT: 100PX;" SRC="https://cdn.discordapp.com/attachments/630843149778157623/1064886989964443731/125.png"></P>

```c
int ft_printf(const char *(__), ...);
int ft_printf_fd(int fd, const char *(__), ...);
```

| COMMAND | VALID FLAGS       | EXPLANATION                    | HOW TO USE | KEYWORDS               |
| ------- | ----------------- | ------------------------------ | ---------- | ---------------------- |
| %d      | "*0+ -.123456789" | Output decimal as integer      | var        | signed int             |
| %i      | "*0+ -.123456789" | Output integer                 | var        | signed int             |
| %u      | "*-0.123456789"   | Output unsigned as integer     | var        | unsigned int, int      |
| %c      | "*-123456789"     | Output character               | var, var[] | char, unsigned char    |
| %s      | "*-.123456789"    | Output string                  | var        | char*                  |
| %o      | "*#-0.123456789"  | Output octal as integer        | var        | signed int             |
| %x      | "*#-0.123456789"  | Output hexdecimal as integer   | var        | signed int             |
| %X      | "*#-0.123456789"  | Output HEXDECIMAL as integer   | var        | signed int             |
| %b      | "*#-0.123456789"  | Output binary as integer       | var        | signed int             |
| %f      | "*-0.123456789"   | Output float or double         | var        | double, float          |
| %n      |                   | Get len and save to variable   | &var       | int                    |
| %p      | "*-0.123456789"   | Output hexdecimal as long long | var, &var  | *                      |
| %%      | "*-0.123456789"   | Printf '%'                     |            |                        |

| FLAGS   | EXPLANATION                              | PRIORITY | HOW TO USE |
| ------- | ---------------------------------------- | -------- | ---------- |
| +       | Print '+' if number is positive          |          |            |
| -       | Set the padding rotation to right        |          |            |
| [SPACE] | Print [SPACE] before variable            | +1->9.*  |            |
| #       | Add the number system's tag              |          |            |
| 1->9    | Set margin of the variable               |          |            |
| .1->9   | Set padding, add '0' instead of [SPACE]s |          |            |
| 0       | Turn [SPACE]s to '0' in margin flag      |          |            |
| *       | Set margin from the variable             |          | int var    |
| .*      | Set padding from the variable            |          | int var    |

