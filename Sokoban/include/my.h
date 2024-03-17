/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>

int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_str_isupper(char const *str);
int my_str_isalpha(char const *str);
int my_str_isprintable(char const *str);
char *my_strlowcase(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strdup(char const *src);
int my_str_isnum(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_str_islower(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strcapitalize(char *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);
void my_show_word_array(char *const *tab);
int mini_printf(const char *format, ...);
char **my_str_to_word_array(char *str);

#endif
