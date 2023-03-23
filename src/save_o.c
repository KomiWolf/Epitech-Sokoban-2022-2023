/*
** EPITECH PROJECT, 2023
** save_o
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void print_o_condition_ovf2(char **copy_tab, char **tab, int i, int j)
{
    if (copy_tab[i][j] == 'O' && tab[i][j] == ' ')
        tab[i][j] = copy_tab[i][j];
}

void print_o_position(char **copy_tab, char **tab)
{
    for (int i = 0; copy_tab[i] != NULL; i++) {
        for (int j = 0; copy_tab[i][j] != '\0'; j++) {
            print_o_condition_ovf2(copy_tab, tab, i, j);
        }
    }
}
