NAME = libftprintf.a

SOURCES = ft_printers.c ft_printf.c ft_printhex.c ft_unsigned.c

OBJECTS	= $(SOURCES:.c=.o)

LIBFT = libft/libft.a

R = ar rsc
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJECTS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(R) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	make clean -C libft
	$(RM) $(OBJECTS)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

re: fclean all
