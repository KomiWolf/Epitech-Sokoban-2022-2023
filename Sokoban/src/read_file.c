/*
** EPITECH PROJECT, 2023
** read_file
** File description:
** psu
*/

#include "../include/my.h"
#include "../include/sokoban.h"

off_t file_size(char const *filepath)
{
    struct stat info;

    if (stat(filepath, &info) == -1)
        return -84;
    return info.st_size;
}

char *get_map(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    off_t size = 0;
    char *buffer;

    if (fd <= 0)
        return NULL;
    size = file_size(filepath);
    if (size == -84)
        return NULL;
    buffer = malloc(sizeof(char) * (size + 1));
    if (!buffer || read(fd, buffer, size) <= 0) {
        free(buffer);
        close(fd);
        return NULL;
    }
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
