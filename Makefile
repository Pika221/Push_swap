# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/26 14:11:29 by marvin            #+#    #+#              #
#    Updated: 2025/01/26 14:11:29 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = push_swap.c checker.c index_num.c sort.c utils.c command_push.c command_rotate.c command_rrotate.c command_swap.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft/
LIBFT_LIB = libft/libft.a
PRINTF = ft_printf/
PRINTF_LIB = ft_printf/libftprintf.a
OBJS = $(SRCS:.c=.o)

all: $(NAME) push_swap.h clean

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@make -C $(PRINTF)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT_LIB) $(PRINTF_LIB)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@make -C $(LIBFT) clean
	@make -C $(PRINTF) clean

fclean:
	@rm -rf $(NAME) $(OBJS)
	@make -C $(LIBFT) fclean
	@make -C $(PRINTF) fclean

re: fclean all

.PHONY: all clean fclean re