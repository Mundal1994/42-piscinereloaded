NAME = libft.a

CC = gcc
INCLUDES = -I$(IDIR)

IDIR = ./includes/
SRCDIR = ./srcs/

SRCS = $(SRCDIR)ft_putchar.c
SRCS += $(SRCDIR)ft_putstr.c
SRCS += $(SRCDIR)ft_strcmp.c
SRCS += $(SRCDIR)ft_strlen.c
SRCS += $(SRCDIR)ft_swap.c

OBJS = ft_putchar.o
OBJS += ft_putstr.o
OBJS += ft_strlen.o
OBJS += ft_strcmp.o
OBJS += ft_swap.o

all: $(NAME)
$(NAME):
	$(CC) -c $(INCLUDES) $(SRCS) 
	ar rc $(NAME) $(OBJS) 

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
