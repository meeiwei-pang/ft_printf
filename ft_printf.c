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

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) == '%')
		{
			count += write (1, format, 1);
			format += 2;
		}
		else if (*format == '%' && *(format + 1))
		{
			count += ft_print_format (++format, &ap);
			format ++;
		}
		else
		{
			count += write (1, format, 1);
			format ++;
		}
	}
	va_end (ap);
	return (count);
}

/*
#include <stdio.h>
int	main(void)
{
	int	written;
	int	test_var = 42;

	written = ft_printf(
				"Hello %s, you are %d years old (%x, %X, %u, %p, %%, %i)\n",
 							"World", 42, 42, 42, 42, (void *)&test_var, 42);
	ft_printf("Characters written: %d\n", written);

	written = printf("Hello %s, you are %d years old (%x, %X, %u, %p, %%, %i)\n",
						"World", 42, 42, 42, 42, (void *)&test_var, 42);
	printf("Characters written: %d\n", written);

	return (0);
}
*/
