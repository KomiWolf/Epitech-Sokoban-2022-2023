/*
** EPITECH PROJECT, 2023
** set_game
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void reset_game(char **tab, char **copy_tab)
{
    for (int i = 0; copy_tab[i] != NULL; i++) {
        for (int j = 0; copy_tab[i][j] != '\0'; j++) {
            tab[i][j] = copy_tab[i][j];
        }
    }
}

void set_move(int c, char **tab)
{
    set_up_move(c, tab);
    set_down_move(c, tab);
    set_left_move(c, tab);
    set_right_move(c, tab);
}

int set_game_loop(char **tab, int c, char **copy_tab)
{
    while (1) {
        clear();
        for (int i = 0; tab[i] != NULL; i++)
            mvwprintw(stdscr, i, 0, tab[i]);
        refresh();
        c = getch();
        if (c == ' ')
            reset_game(tab, copy_tab);
        if (c == 'q' || c == 27)
            return 0;
        if (set_win_condition(tab, copy_tab) == 0)
            return 0;
        if (set_lose_condition(tab, copy_tab) == 1)
            return 1;
        set_move(c, tab);
        print_o_position(copy_tab, tab);
    }
    return 0;
}

int launch_with_ncurses_lib(char *buffer, char **tab, char **copy_tab)
{
    int c = 0;

    initscr();
    keypad(stdscr, TRUE);
    noecho();
    if (set_game_loop(tab, c, copy_tab) == 1) {
        free_all(buffer, tab, copy_tab);
        endwin();
        return 1;
    }
    return 0;
}
