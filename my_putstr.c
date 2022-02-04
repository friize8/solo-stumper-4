/*
** EPITECH PROJECT, 2022
** 
** File description:
** 
*/

#include "include/my_list.h"

int my_putstr(char *str)
{
    int x = 0;

    while (str[x] != '\0')
        my_putchar(str[x]);
    return 0;
}
