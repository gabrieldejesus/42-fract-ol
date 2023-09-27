/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:23:56 by gde-jesu          #+#    #+#             */
/*   Updated: 2022/07/07 00:12:00 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_flags_di(int number)
{
	size_t		lenght;
	long int	i;

	i = number;
	lenght = 0;
	if (i < 0)
	{
		lenght += ft_putchar('-');
		i *= -1;
	}
	if (i >= 10)
		lenght += ft_flags_di(i / 10);
	lenght += ft_putchar((i % 10) + '0');
	return (lenght);
}
