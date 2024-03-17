/*
** EPITECH PROJECT, 2023
** my_strcapitalize
** File description:
** cpool
*/

#include "./my.h"

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str[0] >= 'A' && str[0] <= 'Z')
        str[0] = str[0] + 32;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' &&
        (str[i - 1] < 'a' || str[i - 1] > 'z')) {
            str[i] = str[i] - 32;
            i++;
        }
        if (str[i] >= 'A' && str[i] <= 'Z' &&
        (str[i - 1] >= 'a' || str[i - 1] <= 'z' ||
        str[i - 1] >= '0' || str[i - 1] <= '9')) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}
