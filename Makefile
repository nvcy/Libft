
NAME = libft.a

SRC_DIR = src

SRC = $(wildcard $(SRC_DIR)/*.c)

OBJ = $(SRC:%.c=%.o)

CC = gcc

RM = rm -rf

FLAGS = -Wall -Wextra -Werror

COMPRESS = ar rcs

$(NAME): $(OBJ)
	$(COMPRESS) $(NAME) $(OBJ)
all: $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean: $(OBJ)
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
	
