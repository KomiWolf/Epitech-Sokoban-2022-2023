/*
** EPITECH PROJECT, 2023
** win_condition
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void count_o_occurence(char **copy_tab, int i, int j, int *count_o)
{
    if (copy_tab[i][j] == 'O')
            *count_o += 1;
}

void count_x_inside_o(char **tab, char **copy_tab, int i, int *count_x_in_o)
{
    for (int j = 0; copy_tab[i][j] != '\0'; j++) {
        if (copy_tab[i][j] == 'O' && tab[i][j] == 'X')
            *count_x_in_o += 1;
        }
}

int set_win_condition(char **tab, char **copy_tab)
{
    int count_x_in_o = 0;
    int count_o = 0;

    for (int i = 0; copy_tab[i] != NULL; i++) {
        for (int j = 0; copy_tab[i][j] != '\0'; j++) {
            count_o_occurence(copy_tab, i, j, &count_o);
        }
    }
    for (int i = 0; copy_tab[i] != NULL; i++) {
        count_x_inside_o(tab, copy_tab, i, &count_x_in_o);
    }
    if (count_x_in_o == count_o) {
        usleep(500000);
        return 0;
    }
    return 1;
}
