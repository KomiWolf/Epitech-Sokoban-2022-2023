/*
** EPITECH PROJECT, 2022
** main
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void free_all(char *buffer, char **tab, char **copy_tab)
{
    free(buffer);
    free(tab);
    free(copy_tab);
}

int main(int ac, char **av)
{
    char *buffer;
    char **tab;
    char **copy_tab;

    if (wrong_number_argument(ac) == 84)
        return 84;
    if (my_strcmp(av[1], "-h") == 0)
        return helper();
    buffer = get_map(av[1]);
    if (handle_file(buffer) == 84)
        return 84;
    tab = my_str_to_word_array(buffer);
    copy_tab = my_str_to_word_array(buffer);
    if (launch_with_ncurses_lib(buffer, tab, copy_tab) == 1)
        return 1;
    free_all(buffer, tab, copy_tab);
    endwin();
    return 0;
}
