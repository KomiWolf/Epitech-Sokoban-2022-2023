/*
** EPITECH PROJECT, 2023
** check_map.c
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int check_map(char *buffer)
{
    int count_p = 0;
    int count_o = 0;
    int count_x = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != ' ' && buffer[i] != '\n' && buffer[i] != '#' &&
        buffer[i] != 'X' && buffer[i] != 'O' && buffer[i] != 'P')
            return 84;
        if (buffer[i] == 'P')
            count_p++;
        if (buffer[i] == 'O')
            count_o++;
        if (buffer[i] == 'X')
            count_x++;
    }
    if (count_p != 1)
        return 84;
    if (count_o != count_x && count_x != count_o)
        return 84;
    return 0;
}
