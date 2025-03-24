NAME = push_swap

SRC = push_swap.c input_parser.c stack_utils.c stack_utils2.c stack_utils3.c \
      stack_utils4.c sort.c radix_sort.c operations.c rotate.c reverse_rotate.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
