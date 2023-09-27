/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:44:17 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/27 12:55:53 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	get_data(t_data *vars)
{
	vars->y = 0;
	vars->mlx = mlx_init();
	vars->mlx_win = mlx_new_window(vars->mlx, WIDTH, HEIGHT, "fract-ol");
	vars->img = mlx_new_image(vars->mlx, WIDTH, HEIGHT);
	vars->addr = mlx_get_data_addr(vars->img,
			&vars->bits_per_pixel, &vars->line_length, &vars->endian);
	if (vars->selected == 0)
	{
		vars->max_im = 1.5;
		vars->min_im = -1.5;
		vars->max_re = 1;
		vars->min_re = -2;
	}
	else if (vars->selected == 1 || vars->selected == 2)
	{
		vars->max_im = 2;
		vars->min_im = -2;
		vars->max_re = 2;
		vars->min_re = -2;
	}
}

void	exit_notification(void)
{
	ft_printf("%s", "You need to pass the ");
	ft_printf("%s\n", "following parameters in to run the program:");
	ft_printf("%s\n", "- ./fractol mandelbrot");
	ft_printf("%s\n", "- ./fractol julia 1 or 2 or 3 or 4");
	ft_printf("%s\n", "- ./fractol dory");
	exit(0);
}

void	select_julia(char *type, t_data *vars)
{
	if (!ft_strncmp("1", &type[0], 2))
	{
		vars->c_re = -0.79;
		vars->c_im = 0.15;
	}
	else if (!ft_strncmp("2", &type[0], 2))
	{
		vars->c_re = -0.162;
		vars->c_im = 1.04;
	}
	else if (!ft_strncmp("3", &type[0], 2))
	{
		vars->c_re = -1.476;
		vars->c_im = 0;
	}
	else if (!ft_strncmp("4", &type[0], 2))
	{
		vars->c_re = 0.28;
		vars->c_im = 0.008;
	}
	else
		exit_notification();
}

int	main(int argc, char *argv[])
{
	t_data		vars;

	vars.move_x = 0;
	vars.move_y = 0;
	if (argc != 2 && argc != 3)
		exit_notification();
	if (!ft_strncmp("mandelbrot", argv[1], 11) && argc == 2)
		vars.selected = 0;
	else if (!ft_strncmp("julia", argv[1], 6) && argc == 3)
	{
		select_julia(argv[2], &vars);
		vars.selected = 1;
	}
	else if (!ft_strncmp("dory", argv[1], 5) && argc == 2)
		vars.selected = 2;
	else
		exit_notification();
	get_data(&vars);
	select_fractol(&vars);
	mlx_hook(vars.mlx_win, 17, 0, fractol_close, &vars);
	mlx_key_hook(vars.mlx_win, key_events, &vars);
	mlx_mouse_hook(vars.mlx_win, mouse_hook, &vars);
	mlx_loop(vars.mlx);
}
