/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:27:09 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/27 12:46:18 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mouse_hook(int keycode, int x, int y, t_data *vars)
{
	(void)x;
	(void)y;
	if (keycode == 4)
	{
		vars->max_im = vars->max_im * 1.1;
		vars->min_im = vars->min_im * 1.1;
		vars->max_re = vars->max_re * 1.1;
		vars->min_re = vars->min_re * 1.1;
		mlx_clear_window(vars->mlx, vars->mlx_win);
		select_fractol(vars);
	}
	else if (keycode == 5)
	{
		vars->max_im = vars->max_im * 0.9;
		vars->min_im = vars->min_im * 0.9;
		vars->max_re = vars->max_re * 0.9;
		vars->min_re = vars->min_re * 0.9;
		mlx_clear_window(vars->mlx, vars->mlx_win);
		select_fractol(vars);
	}
	return (0);
}

int	key_events(int keycode, t_data *vars)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->mlx_win);
		exit(0);
	}
	if (keycode >= 123 && keycode <= 126)
	{
		if (keycode == 123)
			vars->move_x += 0.5 * (vars->max_re);
		if (keycode == 124)
			vars->move_x += -0.5 * (vars->max_re);
		if (keycode == 125)
			vars->move_y += 0.5 * (vars->min_re);
		if (keycode == 126)
			vars->move_y += -0.5 * (vars->min_re);
		mlx_clear_window(vars->mlx, vars->mlx_win);
		select_fractol(vars);
	}
	return (0);
}

int	fractol_close(void)
{
	exit(0);
	return (0);
}
