NAME = libft.a

MY_SOURCES = $(wildcard *.c)

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
