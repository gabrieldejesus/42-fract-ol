/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finding_dory_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:42:57 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/27 12:56:19 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

int	get_iteration_finding_dory(t_complex c)
{
	int			i;
	t_complex	z;

	i = 0;
	z.i = 0;
	z.r = 0;
	while (complex_absolute(z) < 2)
	{
		if (i == MAX_ITERATIONS)
			break ;
		z = complex_sum(complex_pow_finding_dory(z), c);
		i++;
	}
	return (i);
}

void	draw_finding_dory(t_data *vars)
{
	while (vars->y < HEIGHT)
	{
		vars->x = 0;
		vars->c.i = vars->max_im - vars->y / HEIGHT * (vars->max_im
				- (vars->min_im)) + vars->move_y;
		while (vars->x < WIDTH)
		{
			vars->c.r = vars->x / WIDTH * (vars->max_re
					- vars->min_re) + vars->min_re + vars->move_x;
			vars->iteration = get_iteration_finding_dory(vars->c);
			if (vars->iteration == MAX_ITERATIONS)
				my_mlx_pixel_put(vars, vars->x, vars->y, 0x000000);
			else
				my_mlx_pixel_put(vars,
					vars->x, vars->y, color_by_iteration(vars->iteration));
			vars->z.r = 0;
			vars->x++;
		}
		vars->y++;
	}
	vars->y = 0;
	mlx_put_image_to_window(vars->mlx, vars->mlx_win, vars->img, 0, 0);
}
