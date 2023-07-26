#include "main.h"

/****************** FUNCTIONS ******************/
/* Funtions to print chars and strings */

/* Function to print a character */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);
    
    char c = va_arg(types, int);
    return handle_write_char(c, buffer, 0, 0, 0, 0);
}

/* Function to print a string */
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);

    char *str = va_arg(types, char*);
    if (str == NULL)
        str = "(null)";

    int len = 0;
    while (str[len] != '\0')
        len++;

    int chars_written = 0;
    for (int i = 0; i < len; i++)
        chars_written += handle_write_char(str[i], buffer, 0, 0, 0, 0);

    return chars_written;
}

/* Function to print a percent sign */
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    UNUSED(types);
    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);

    return handle_write_char('%', buffer, 0, 0, 0, 0);
}

/* Functions to print numbers */

/* ... (implementation) ... */

/* Function to print non-printable characters */
/* ... (implementation) ... */

/* Function to print memory address */
/* ... (implementation) ... */

/* Functions to handle other specifiers */
/* ... (implementation) ... */

/* Function to print string in reverse */
/* ... (implementation) ... */

/* Function to print a string in rot 13 */
/* ... (implementation) ... */

/****************** UTILS ******************/
/* ... (implementation) ... */

