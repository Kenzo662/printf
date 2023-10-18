NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_integer.c \
ft_countnb.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJDIR)$(OBJ)

clean :
	rm -rf $(OBJDIR)$(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all