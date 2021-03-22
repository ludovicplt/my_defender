##
## EPITECH PROJECT, 2021
## my_defender
## File description:
## Makefile
##

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra -pedantic -l csfml-audio -l csfml-graphics -l csfml-window -l csfml-system -I./include

SRC	=	main.c	\
		src/init/init_asset.c	\
		src/init/init_asset2.c	\
		src/init/init_ennemy.c	\
		src/init/init_asset3.c	\
		src/init/init_asset4.c	\
		src/display/display_asset.c		\
		src/display/display_asset2.c	\
		src/display/display_asset3.c	\
		src/display/display_asset4.c	\
		src/destroy/destroy_asset.c		\
		src/destroy/destroy_asset2.c	\
		src/destroy/destroy_asset3.c	\
		src/destroy/destroy_asset4.c	\
		src/game.c	\
		src/pause.c	\
		src/win_and_loose.c	\
		src/states.c	\
		src/button.c	\
		src/small_button.c	\
		src/fonc_btn.c	\
		src/fonc_btn2.c	\
		src/clock_goat.c	\
		src/easter_egg.c	\
		src/goat_ia.c	\
		src/tower_ai.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

DEBUG	?= 	0

ifeq ($(DEBUG),1)
	CFLAGS	+= -g -g3 -ggdb
endif

all:
	make -j build -C .

build:
	make -j make_obj -C .
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)


make_obj: $(OBJ)

clean:
	rm -rf *.o
	find . \( -name "*~" -o -name "*.o" -o -name "vgcore.*" \) -delete

fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all
