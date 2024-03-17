/*
** EPITECH PROJECT, 2023
** my_str_isalpha
** File description:
** cpool
*/

#include "./my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 1;
    while (str[i] != '\0') {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z')))
            return 0;
        i++;
    }
    return 1;
}
