# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 09:36:22 by gde-jesu          #+#    #+#              #
#    Updated: 2023/09/27 12:43:18 by gde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME	=	fractol

# Compiling Variables #
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

# Sources Variables #
MANDATORY_SRCS = fractol.c fractol_utils.c complexes.c events.c julia.c mandelbrot.c

BONUS_SRCS = fractol_bonus.c fractol_utils_bonus.c complexes_bonus.c events_bonus.c \
julia_bonus.c mandelbrot_bonus.c finding_dory_bonus.c

# Libft Variables #
LIBFT		=	./42-Libft/libft.a
LIBFT_DIR	=	./42-Libft
INC			=	-I. -I$(LIBFT_DIR)

# Colors #
GREEN = \e[32m
YELLOW = \e[33m
RESET = \e[0m
_SUCCESS = ✨ $(GREEN)Compiled successfully$(RESET)
_INFO = 🚀 $(YELLOW)Info$(RESET)

# Functions #
$(NAME): $(MANDATORY_SRCS)
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C mlx all &> /dev/null
	@$(CC) $(CFLAGS) $(MANDATORY_SRCS) $(LIBFT) $(INC) -Ofast -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@printf "$(_SUCCESS) fract-ol.\n"

all: $(NAME)

bonus:
	@$(MAKE) -C $(LIBFT_DIR) bonus
	@$(MAKE) -C mlx all &> /dev/null
	@$(CC) $(CFLAGS) $(BONUS_SRCS) $(LIBFT) $(INC) -Ofast -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@printf "$(_SUCCESS) fract-ol.\n"

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C mlx clean &> /dev/null
	@printf "$(_INFO) fract-ol cleaning done.\n"

fclean:
	@$(RM) $(NAME)
	@$(MAKE) -C mlx clean &> /dev/null
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@printf "$(_INFO) fract-ol cleaning done.\n"

re:		fclean all

.PHONY:	all clean fclean re 