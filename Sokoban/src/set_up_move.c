/*
** EPITECH PROJECT, 2023
** set_move
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int set_up_condition(char **tab, int i, int j)
{
    if (tab[i][j] == 'P' && tab[i - 1][j] == 'X' &&
    tab[i - 2][j] != '#' && tab[i - 2][j] != 'X' &&
    (tab[i - 2][j] == ' ' || tab[i - 2][j] == 'O')) {
        tab[i][j] = ' ';
        tab[i - 1][j] = 'P';
        tab[i - 2][j] = 'X';
        return 1;
        }
    return 0;
}

int set_up_loop_2(char **tab, int i)
{
    for (int j = 0; tab[i][j] != '\0'; j++) {
        if (tab[i][j] == 'P' && tab[i - 1][j] == '#')
            return 1;
        if (tab[i][j] == 'P' && tab[i - 1][j] == ' ' &&
        (tab[i - 2][j] == ' ' || tab[i - 2][j] == 'O' ||
        tab[i - 2][j] == 'X' || tab[i - 2][j] == '#')) {
            tab[i][j] = ' ';
            tab[i - 1][j] = 'P';
            return 1;
        }
        if (tab[i][j] == 'P' && tab[i - 1][j] == 'O') {
            tab[i][j] = ' ';
            tab[i - 1][j] = 'P';
            return 1;
        }
        if (set_up_condition(tab, i, j) == 1)
            return 1;
    }
    return 0;
}

void set_up_loop(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        if (set_up_loop_2(tab, i) == 1)
            return;
    }
}

void set_up_move(int c, char **tab)
{
    if (c == KEY_UP) {
        set_up_loop(tab);
    }
}
