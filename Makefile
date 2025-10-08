NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I Includes
SRCS = Srcs/ft_printf.c \
		Srcs/ft_putchar.c \
		Srcs/ft_putstr.c \
		Srcs/ft_putnbr.c \
		Srcs/ft_unsigned.c \
		Srcs/ft_to_hexa.c \
		Srcs/ft_pointer.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: re clean fclean all