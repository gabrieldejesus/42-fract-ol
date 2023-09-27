/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:33:33 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/27 12:55:42 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

int	color_by_iteration_2(int i)
{
	if (i == 6)
		return (ft_rgb(0, 24, 82, 177));
	if (i == 7)
		return (ft_rgb(0, 57, 125, 209));
	if (i == 8)
		return (ft_rgb(0, 134, 181, 229));
	if (i == 9)
		return (ft_rgb(0, 211, 236, 248));
	if (i == 10)
		return (ft_rgb(0, 241, 233, 191));
	if (i == 11)
		return (ft_rgb(0, 248, 201, 95));
	if (i == 12)
		return (ft_rgb(0, 255, 170, 0));
	if (i == 11)
		return (ft_rgb(0, 204, 128, 0));
	if (i == 12)
		return (ft_rgb(0, 153, 87, 0));
	return (ft_rgb(0, 106, 52, 3));
}

int	color_by_iteration(int iteration)
{
	int	i;

	if (iteration < MAX_ITERATIONS && iteration > 0)
	{
		i = iteration % 14;
		if (i == 0)
			return (ft_rgb(0, 66, 30, 15));
		if (i == 1)
			return (ft_rgb(0, 9, 1, 47));
		if (i == 2)
			return (ft_rgb(0, 9, 1, 47));
		if (i == 3)
			return (ft_rgb(0, 4, 4, 73));
		if (i == 4)
			return (ft_rgb(0, 0, 7, 100));
		if (i == 5)
			return (ft_rgb(0, 12, 44, 138));
		if (i >= 6 && i <= 13)
			return (color_by_iteration_2(i));
	}
	return (ft_rgb(0, 9, 1, 47));
}

int	ft_rgb(int transparency, int red, int green, int blue)
{
	int	color;

	color = 0;
	color = color | (transparency << 24);
	color = color | (red << 16);
	color = color | (green << 8);
	color = color | blue;
	return (color);
}

void	select_fractol(t_data *vars)
{
	if (vars->selected == 0)
		draw_mandelbrot(vars);
	else if (vars->selected == 1)
		draw_julia(vars);
	else if (vars->selected == 2)
		draw_finding_dory(vars);
}
