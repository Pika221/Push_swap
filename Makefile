NAME = push_swap
CC = cc
MAKEFLAGS += --no-print-directory
CFLAGS = -Wall -Wextra -Werror
PRINTF = ft_printf/libftprintf.a

SRCS = checker.c checker2.c command_push.c command_rotate.c command_rrotate.c command_swap.c push_swap.c small_sort.c sort.c utils.c utils2.c utils3.c ft_split.c

all: $(NAME)

$(NAME): $(PRINTF) $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) \
	$(PRINTF) \
	-I./ft_printf \
	-o $(NAME)
	@echo DONE!

$(PRINTF):
	@make -sC ft_printf

run: all
	@./push_swap
clean:
	@make fclean -sC ft_printf
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run