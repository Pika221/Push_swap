NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = command_push.c command_rotate.c command_rrotate.c command_swap.c sort.c utils.c utils1.c utils2.c checker.c push_swap.c small_sort.c parser.c index_num.c
FT_PRINTF = ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(SRCS) $(FT_PRINTF)
	@$(CC) $(CFLAGS) $(SRCS) $(FT_PRINTF) -I./ft_printf -o $(NAME)
	@echo Done! 

$(FT_PRINTF):
	@make -sC ft_printf

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME) $(FT_PRINTF)

re: fclean all

.PHONY: all clean fclean re