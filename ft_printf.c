/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 11:33:29 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/09/01 11:33:29 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int	ft_printf(const char *format, ...)
{
	int	count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == '%')
			count += write (1, format++, 1);
		else if (*format == '%')
			count += ft_print_format (++format, &ap);
		else
			count += write (1, format, 1);
		format++;
	}
	va_end (ap);
	return (count);
}
*/
int	ft_printf(const char *format, ...)
{
	int	count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == '%')
		{
			count += write (1, format, 1);
			format += 2;
		}
		else if (*format == '%' && *(format + 1) == '\0')
		{
			count += write(1, format, 1);
			format += 1;
		}
		else if (*format == '%')
		{
			count += ft_print_format (++format, &ap);
			format += 1;
		}
		else
		{
			count += write (1, format, 1);
			format += 1;
		}
	}
	va_end (ap);
	return (count);
}