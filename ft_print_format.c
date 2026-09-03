/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 11:33:25 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/09/02 11:33:25 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(const char *format, va_list *ap)
{
	int	count;

	count = 0;
	if (*format == '\0')
		return (0);
	else if (*format == 'c')
		count += ft_putchar(va_arg(*ap, int));
	else if (*format == 's' )
		count += ft_putstr(va_arg(*ap, char *));
	else if (*format == 'p')
		count += ft_putptr(va_arg(*ap, void *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr_signed (((long)va_arg (*ap, int)));
	else if (*format == 'u')
		count += ft_putnbr_unsigned ((va_arg(*ap, unsigned int)));
	else if (*format == 'x')
		count += ft_putnbr_hex(va_arg(*ap, unsigned int), 'a');
	else if (*format == 'X')
		count += ft_putnbr_hex(va_arg(*ap, unsigned int), 'A');
	else if (*format == '%')
		count += ft_putchar('%');
	else
		count += write(1, format, 1);
	return (count);
}