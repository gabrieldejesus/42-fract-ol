/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complexes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:32:57 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/27 12:47:24 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	complex_absolute(t_complex i)
{
	double	value;

	value = sqrt(i.r * i.r + i.i * i.i);
	return (value);
}

t_complex	complex_sum(t_complex i, t_complex c)
{
	t_complex	value;

	value.r = i.r + c.r;
	value.i = i.i + c.i;
	return (value);
}

t_complex	complex_sum_julia(t_complex i, t_data *vars)
{
	t_complex	value;

	value.r = i.r + vars->c_re;
	value.i = i.i + vars->c_im;
	return (value);
}

t_complex	complex_pow(t_complex i)
{
	t_complex	value;

	value.i = 2 * i.r * i.i;
	value.r = i.r * i.r - i.i * i.i;
	return (value);
}
