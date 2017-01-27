NAME = ft_cat

SRC = srcs/*.c

HEADER = *.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADER) -c $(SRC)
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SRC) main.c -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)