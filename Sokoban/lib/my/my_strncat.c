/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** strncat
*/

#include "./my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int l = my_strlen(dest);

    while (src[a] != '\0' && a < nb) {
        a = a + 1;
    }
    for (a = 0; a < nb; a++) {
        dest[l + a] = src[a];
    }
    dest[l + a] = '\0';
    return dest;
}
