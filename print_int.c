#include "main.h"

int print_int(int num)
{
    char num_str[20];
    int len = 0;

    int_to_str(num, num_str);

    while (num_str[len] != '\0')
    {
        write(1, &num_str[len], 1);
        len++;
    }

    return len;
}