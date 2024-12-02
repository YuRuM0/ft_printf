/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:28:10 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/28 20:31:52 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

//printers
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int c);
int	ft_putunsign(unsigned int c);

//printhex
int	ft_puthex(unsigned long c);
int	ft_xxputhex(unsigned int c, const char start);

//printf
int	ft_typechecker(va_list args, const char *string);
int	ft_printf(const char *start, ...);
