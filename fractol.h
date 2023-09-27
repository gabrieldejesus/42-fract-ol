/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:07:32 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/27 12:44:55 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <math.h>
# include <stdlib.h>
# include "./mlx/mlx.h"
# include "./42-Libft/libft.h"

# define MAX_ITERATIONS 250
# define HEIGHT 800
# define WIDTH 800

typedef struct s_complex_number
{
	double	r;
	double	i;
}	t_complex;

typedef struct s_data {
	void		*img;
	char		*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
	void		*mlx;
	void		*mlx_win;
	int			iteration;
	double		y;
	double		x;
	double		max_im;
	double		min_im;
	double		max_re;
	double		min_re;
	double		move_x;
	double		move_y;
	t_complex	c;
	t_complex	z;
	int			selected;
	double		c_im;
	double		c_re;
}	t_data;

double		complex_absolute(t_complex i);
t_complex	complex_sum(t_complex i, t_complex c);
t_complex	complex_pow(t_complex i);
void		my_mlx_pixel_put(t_data *data, int x, int y, int color);
int			color_by_iteration(int iteration);
int			ft_rgb(int transparency, int red, int green, int blue);
int			mouse_hook(int keycode, int x, int y, t_data *vars);
int			key_events(int keycode, t_data *vars);
int			fractol_close(void);
int			mouse_hook(int keycode, int x, int y, t_data *vars);
void		get_data(t_data *vars);
void		my_mlx_pixel_put(t_data *data, int x, int y, int color);
t_complex	complex_sum_julia(t_complex i, t_data *vars);
void		select_fractol(t_data *vars);
void		draw_mandelbrot(t_data *vars);
int			get_iteration_mandelbrot(t_complex c);
void		draw_julia(t_data *vars);
int			get_iteration(t_data *vars, t_complex c);
t_complex	complex_sum_julia(t_complex i, t_data *vars);
void		select_fractol(t_data *vars);

#endif