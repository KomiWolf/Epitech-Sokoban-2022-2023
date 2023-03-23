/*
** EPITECH PROJECT, 2023
** error_handling
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int wrong_number_argument(int ac)
{
    if (ac != 2) {
        my_putstr("Error: Wrong number of argument!\n");
        return 84;
    }
    return 0;
}

int handle_file(char *buffer)
{
    if (buffer == NULL || check_map(buffer) == 84) {
        my_putstr("Error: File not found, empty file or wrong map!\n");
        return 84;
    }
    return 0;
}
