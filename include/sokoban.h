/*
** EPITECH PROJECT, 2022
** sokoban.h
** File description:
** psu
*/

#ifndef SOKOBAN_
    #define SOKOBAN_

    #include <ncurses.h>
    #include <fcntl.h>
    #include <sys/stat.h>

int wrong_number_argument(int ac);
int handle_file(char *buffer);
char *get_map(char *filepath);
int check_map(char *buffer);
int helper(void);
void set_up_move(int c, char **tab);
void set_down_move(int c, char **tab);
void set_left_move(int c, char **tab);
void set_right_move(int c, char **tab);
void print_o_position(char **copy_tab, char **tab);
int set_win_condition(char **tab, char **copy_tab);
int set_lose_condition(char **tab, char **copy_tab);
int launch_with_ncurses_lib(char *buffer, char **tab, char **copy_tab);
void free_all(char *buffer, char **tab, char **copy_tab);

#endif
