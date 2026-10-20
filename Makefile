
NAME = libft.a

SRC_DIR = src

SRC = $(filter-out $(BONUS), $(wildcard $(SRC_DIR)/*.c))

BONUS = $(addprefix $(SRC_DIR)/, \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstmap.c)

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
COMPRESS = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(RM) $(NAME)
	$(COMPRESS) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	$(RM) $(NAME)
	$(COMPRESS) $(NAME) $(OBJ) $(BONUS_OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
