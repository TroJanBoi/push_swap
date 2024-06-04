# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/05 17:51:55 by pesrisaw          #+#    #+#              #
#    Updated: 2024/05/16 15:58:24 by pesrisaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
# CFLAGS = -Wall -Wextra -Werror -g
CFLAGS = -g
AR = ar rcs
RM = rm -f


FILES = main \
		ft_util \
		swap \
		ft_stack \
		push \
		rotate \
		reverse \
		ft_split \
		check_util \
		ft_atol \
		ft_atoi \
		ft_util2 \
		radix \
		ft_index \
		sort_dool \
		sort_seht \
		sort_neht \
		sort_dausut \
		check_input


SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

$(NAME): $(OBJS) push_swap.h
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDE)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS) $(NAME) a.out

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re