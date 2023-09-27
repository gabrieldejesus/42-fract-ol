# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 23:09:00 by gde-jesu          #+#    #+#              #
#    Updated: 2023/09/16 15:53:24 by gde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME = libftprintf.a

# Compiling Variables #
CC = cc
RM = rm -f
ARC = ar -rcs
CFLAGS = -Wall -Wextra -Werror -c

# Sources Variables #
MANDATORY_SRCS = ft_printf.c ft_putchar.c ft_strlen.c ft_putstr.c \
ft_flag_s.c ft_flag_u.c ft_flags_di.c ft_flag_x.c ft_flag_p.c

# Objects Variables #
MANDATORY_OBJS = $(MANDATORY_SRCS:.c=.o)

# Colors #
GREEN = \e[32m
YELLOW = \e[33m
RESET = \e[0m
_SUCCESS = ✨ $(GREEN)Compiled successfully$(RESET)
_INFO = 🚀 $(YELLOW)Info$(RESET)

# Functions #
$(NAME):
	@$(CC) $(CFLAGS) -I. $(MANDATORY_SRCS)
	@$(ARC) $(NAME) $(MANDATORY_OBJS)
	@printf "$(_SUCCESS) is ready.\n"

all: $(NAME)

clean:
	@$(RM) $(MANDATORY_OBJS)
	@printf "$(_INFO) cleaning done.\n"


fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
