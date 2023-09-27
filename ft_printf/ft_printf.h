/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:58:48 by gde-jesu          #+#    #+#             */
/*   Updated: 2022/07/07 01:24:28 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *string, ...);
int		ft_strlen(const char *s);
void	ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_flag_s(va_list args);
size_t	ft_flag_u(unsigned int number);
size_t	ft_flags_di(int number);
size_t	ft_flag_x(unsigned long number, char select);
int		ft_flag_p(unsigned long number);

#endif
