##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Main Makefile
##

CC	=	gcc

SRC_MAIN	=	src/main.c	\
				src/board.c	\
				src/pawns/pawn.c	\
				src/pawns/rook.c	\
				src/pawns/knight.c	\
				src/pawns/bishop.c	\
				src/pawns/queen.c	\
				src/pawns/king.c	\
				src/draws/draw_blackPawns.c	\
				src/draws/draw_whitePawns.c	\

NAME_MAIN	=	pawndev0.0.1_1

CFLAGS = -Wall -Wextra -I./inc/ -I./lib/include -I./lib/my/external_files/inc

CSFML	=	-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all: $(NAME_MAIN)

$(NAME_MAIN):	$(OBJ_MAIN)
		$(CC) -o ./versions/$(NAME_MAIN) $(OBJ_MAIN) $(CSFML) $(CFLAGS)

debug: CFLAGS	+=	-g
debug: fclean	$(NAME_MAIN)

clean:
	find . -type f -name "*.o" -delete
	rm -f $(OBJ_MAIN)

fclean: clean
	find . -type f -name "*.a" -delete
	rm -f $(NAME_MAIN)

re: fclean clean all

version:
	@echo $(NAME_MAIN)

.PHONY: re fclean clean all
