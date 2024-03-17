##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## lib
##

CC = 	gcc

RM = 	rm -f

SRC = 	my_putchar.c \
		my_putstr.c \
		my_put_nbr.c \
		my_strlen.c \
		my_getnbr.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strcapitalize.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strupcase.c \
		my_strlowcase.c \
		my_strcat.c \
		my_strncat.c \
		my_strdup.c \
		my_show_word_array.c \
		mini_printf.c \
		my_str_to_word_array.c \

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CFLAG = -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../$(NAME)
	cp $(NAME) ../../$(NAME)
	cp my.h ../../include/
	make clean

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../$(NAME)

re: fclean all

.PHONY: re all fclean clean
