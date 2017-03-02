NAME = do-op
SRC = srcs/*.c
HEADER = includes/*.h

all: 
	gcc -Wall -Wextra -Werror -I $(HEADER) -c $(SRC)
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SRC) main.c -o $(NAME)
clean:
	/bin/rm -f *.o

re: clean all

