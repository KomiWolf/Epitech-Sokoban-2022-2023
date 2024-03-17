/*
** EPITECH PROJECT, 2023
** helper
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int helper(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tA game where we need to put boxes in storage locations.\n");
    my_putstr("\t# for walls, P for the player, ");
    my_putstr("X for boxes and O for storage locations.\n");
    return 0;
}
