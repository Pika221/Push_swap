NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = command_push.c command_rotate.c command_rrotate.c command_swap.c sort.c utils.c utils2.c utils3.c checker.c push_swap.c small_sort.c parser.c index_num.c

FT_PRINTF = ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(FT_PRINTF)
	@$(CC) $(CFLAGS) $(OBJS) $(FT_PRINTF) -I./ft_printf -o $(NAME)
	@echo Done! 

$(FT_PRINTF):
	@make -sC ft_printf

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
	@rm -f $(OBJS)
	@make -sC ft_printf clean

fclean: clean
	@rm -f $(NAME) $(FT_PRINTF)
	@make -sC ft_printf fclean

re: fclean all

.PHONY: all clean fclean re