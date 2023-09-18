# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 09:36:22 by gde-jesu          #+#    #+#              #
#    Updated: 2023/09/17 21:02:36 by gde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME	=	fractol

# Compiling Variables #
CC = cc
RM = rm -f
ARC = ar -rcs
CFLAGS = -Wall -Wextra -Werror

# Sources Variables #
MANDATORY_SRCS = fractol.c fractol_utils.c complexes.c events.c julia.c mandelbrot.c

BONUS_SRCS = fractol_bonus.c fractol_utils_bonus.c complexes_bonus.c events_bonus.c \
julia_bonus.c mandelbrot_bonus.c finding_dory_bonus.c

# Libft Variables #
LIBFT		=	./libft/libft.a
LIBFT_DIR	=	./libft
INC			=	-I. -I$(LIBFT_DIR)

# Objects Variables #
MANDATORY_OBJS = $(MANDATORY_SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Colors #
GREEN = \e[32m
YELLOW = \e[33m
RESET = \e[0m
_SUCCESS = ✨ $(GREEN)Compiled successfully$(RESET)
_INFO = 🚀 $(YELLOW)Info$(RESET)

# Functions #
$(NAME):
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C minilibx-linux all &> /dev/null
	@$(CC) $(CFLAGS) $(MANDATORY_SRCS) $(LIBFT) $(INC) -Ofast -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@$(ARC) $(NAME) $(MANDATORY_OBJS)
	@printf "$(_SUCCESS) is ready.\n"

all: $(NAME)

bonus:
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C minilibx-linux all &> /dev/null
	@$(CC) $(CFLAGS) $(BONUS_SRCS) $(LIBFT) $(INC) -Ofast -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@$(ARC) $(NAME) $(BONUS_OBJS)
	@printf "$(_SUCCESS) is ready.\n"

clean:
	@$(RM) $(MANDATORY_OBJS) $(BONUS_OBJS)
	@$(MAKE) clean $(LIBFT_DIR)
	@printf "$(_INFO) cleaning done.\n"

fclean:	clean
	@$(RM) $(NAME)
	@$(MAKE) fclean $(LIBFT_DIR)

re:		fclean all

.PHONY:	all clean fclean re 