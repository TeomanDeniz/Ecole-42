# ft_printf
<P ALIGN="CENTER"><IMG STYLE="WIDTH: 100PX; HEIGHT: 100PX;" SRC="https://cdn.discordapp.com/attachments/630843149778157623/1064886989964443731/125.png"></P>

| COMMAND | VALID FLAGS       | EXPLANATION                    | HOW TO USE |
| ------- | ----------------- | ------------------------------ | ---------- |
| %d      | "*0+ -.123456789" | Output decimal as integer      | int var    |
| %i      | "*0+ -.123456789" | Output integer                 | int var    |
| %u      | "*-0.123456789"   | Output unsigned as integer     | int var    |
| %c      | "*-123456789"     | Output character               | char var   |
| %s      | "*-.123456789"    | Output string                  | char *var  |
| %o      | "*#-0.123456789"  | Output octal as integer        | int var    |
| %x      | "*#-0.123456789"  | Output hexdecimal as integer   | int var    |
| %X      | "*#-0.123456789"  | Output HEXDECIMAL as integer   | int var    |
| %b      | "*#-0.123456789"  | Output binary as integer       | int var    |
| %f      | "*-0.123456789"   | Output float or double         | double var |
| %n      |                   | Get len and save to variable   | &var       |
| %p      | "*-0.123456789"   | Output hexdecimal as long long | ALL TYPES  |
| %%      | "*-0.123456789"   | Printf '%'                     |            |

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

