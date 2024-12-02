/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:44:44 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/29 18:56:12 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tentohex(unsigned long c)
{
	int	counter;

	counter = 0;
	if (c <= 9)
	{
		counter += ft_putchar(c + '0');
	}
	else if (c > 9 && c < 16)
	{
		counter += ft_putchar(c + 87);
	}
	else
	{
		counter += ft_tentohex(c / 16);
		counter += ft_tentohex(c % 16);
	}
	return (counter);
}

int	ft_puthex(unsigned long c)
{
	if (!c)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_putstr("0x");
	return (ft_tentohex(c) + 2);
}

int	ft_xxputhex(unsigned int c, const char start)
{
	int	counter;

	counter = 0;
	if (c <= 9)
		counter += ft_putchar(c + '0');
	else if (start == 'x' && c > 9 && c < 16)
		counter += ft_putchar(c + 87);
	else if (start == 'X' && c > 9 && c < 16)
		counter += ft_putchar(c + 55);
	else
	{
		counter += ft_xxputhex(c / 16, start);
		counter += ft_xxputhex(c % 16, start);
	}
	return (counter);
}
