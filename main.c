/*
** EPITECH PROJECT, 2022
**
** File description:
**
*/

#include "include/my_list.h"

char first_name(int argc, char **argv)
{
    int x = 0;

    for (; argv[1][x] != ' '; x++) {
        if (argv[1][0] >= 'A' && argv[1][0] >= 'Z')
            argv[1][0] -= 32;
        if (argv[1][x] == '-' && argv[1][x + 1] >= 'a'
            && argv[1][x + 1] <= 'z')
            argv[1][x + 1] -= 32;
    }
    return x;
}

char last_name(int argc, char **argv)
{
    int x = 0;

    first_name(argc, argv);
    x++;
    for (; argv[1][x] != '\0'; x++) {
        if (argv[1][x] == ' ') {
            x++;
            if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
                argv[1][x] += 32;
        }
    }
}

int main(int argc, char **argv)
{
    int x = 0;

    for (; argv[1][x] != '\0'; x++)
        last_name(argc, argv);
    printf("%s\n", argv[1]);
    return 0;
}