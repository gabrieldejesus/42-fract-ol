/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 01:19:24 by gde-jesu          #+#    #+#             */
/*   Updated: 2022/07/07 01:30:36 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_p(unsigned long number)
{
	size_t	lenght;

	lenght = 0;
	lenght += ft_putchar('0');
	lenght += ft_putchar('x');
	lenght += ft_flag_x(number, 'x');
	return (lenght);
}
