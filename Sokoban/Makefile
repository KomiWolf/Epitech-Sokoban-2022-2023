##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC			=	./src/read_file.c \
				./src/check_map.c \
				./src/helper.c \
				./src/set_game.c \
				./src/error_handling.c \
				./src/set_up_move.c \
				./src/set_down_move.c \
				./src/set_left_move.c \
				./src/set_right_move.c \
				./src/save_o.c \
				./src/win_condition.c \
				./src/lose_condition.c \
				./src/main.c \

OBJ     	=	$(SRC:.c=.o)

NAME    	=	my_sokoban

LIBFLAGS	=	-L./lib/my/ -lmy

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-I./include

all:    	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my/
	gcc $(SRC) -o $(NAME) $(LIBFLAGS) $(CFLAGS) $(CPPFLAGS) -lncurses
	make clean
	make fclean -C ./lib/my/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my/

re:     fclean all

.PHONY: all clean fclean re
