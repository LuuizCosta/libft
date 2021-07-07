NAME =	libft.a
FLAGS =	-Wall -Werror -Wextra
CC =	clang
OBJ =	$(SRC:.c=.o)
BNS_OBJ = $(BNS:.c=.o)
BNS =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_memset.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_split.c \


all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $(FLAGS) $(SRC)

bonus: $(OBJ) $(BNS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BNS_OBJ)

$(BNS_OBJ): $(BNS)
	$(CC) -c $(FLAGS) $(BNS)
so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ) $(BNS_OBJ)

fclean: clean
	rm -f $(NAME) $(BNS_OBJ)

re: fclean all

.PHONY: all clean fclean re bonus