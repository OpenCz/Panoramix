##
## EPITECH PROJECT, 2026
## Makefile
## File description:
## Makefile
##

NAME    = panoramix

SRC     = $(shell find src -type f -name "*.c")

OBJ     = $(SRC:.c=.o)

CC      = epiclang

CFLAGS  = -I./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -lpthread

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
