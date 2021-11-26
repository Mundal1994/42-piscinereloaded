NAME = ft_display_file

CC = gcc

SRCS = main.c
SRCS += function.c

all: $(NAME)
$(NAME):
	$(CC) -o $(NAME) $(SRCS)

clean:
	/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
