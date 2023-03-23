/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** strcmp
*/

#include "./my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] < s1[j])
            return -1;
        if (s1[i] > s2[j])
            return 1;
        i++;
        j++;
    }
    if (s1[i] == '\0' && s2[j] == '\0') {
        return 0;
    } else if (s1[i] == '\0') {
        return 1;
    } else {
        return -1;
    }
    return 0;
}
