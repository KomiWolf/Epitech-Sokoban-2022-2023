/*
** EPITECH PROJECT, 2023
** lose_condition
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int set_lose_condition_ovf3(char **tab, char **copy_tab, int i, int j)
{
    if (tab[i][j] == 'X' && tab[i + 1][j] == '#' &&
        tab[i][j - 1] == '#' && copy_tab[i][j] != 'O') {
        return 1;
    }
    if (tab[i][j] == 'X' && tab[i + 1][j] == '#' &&
        tab[i][j + 1] == '#' && copy_tab[i][j] != 'O') {
        usleep(500000);
        return 1;
    }
    return 0;
}

int set_lose_condition_ovf2(char **tab, char **copy_tab, int i)
{
    for (int j = 0; tab[i][j] != '\0'; j++) {
        if (tab[i][j] == 'X' && tab[i - 1][j] == '#' &&
            tab[i][j - 1] == '#' && copy_tab[i][j] != 'O') {
            usleep(500000);
            return 1;
        }
        if (tab[i][j] == 'X' && tab[i - 1][j] == '#' &&
            tab[i][j + 1] == '#' && copy_tab[i][j] != 'O') {
            usleep(500000);
            return 1;
        }
        if (set_lose_condition_ovf3(tab, copy_tab, i, j) == 1)
            return 1;
    }
    return 0;
}

int set_lose_condition(char **tab, char **copy_tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        if (set_lose_condition_ovf2(tab, copy_tab, i) == 1)
            return 1;
    }
    return 0;
}
