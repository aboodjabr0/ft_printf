NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_unsigned.c \
		ft_to_hexa.c \
		ft_pointer.c


OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: re clean fclean all