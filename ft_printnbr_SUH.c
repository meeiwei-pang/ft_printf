/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_SUH.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:42:24 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/09/07 18:53:16 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_signed(long n)
{
	int		count;
	char	digit;

	count = 0;
	if (n < 0)
	{
		count += ft_printchar('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_printnbr_signed(n / 10);
	digit = (n % 10) + '0';
	count += ft_printchar(digit);
	return (count);
}

int	ft_printnbr_unsigned(unsigned int n)
{
	int		count;
	char	digit;

	count = 0;
	if (n >= 10)
		count += ft_printnbr_unsigned(n / 10);
	digit = (n % 10) + '0';
	count += ft_printchar(digit);
	return (count);
}

int	ft_printnbr_hex(uintptr_t n, char letter_base)
{
	int		count;
	char	digit;

	count = 0;
	if (n >= 16)
		count += ft_printnbr_hex(n / 16, letter_base);
	if ((n % 16) < 10)
		digit = (n % 16) + '0';
	else
		digit = ((n % 16) - 10) + letter_base;
	count += ft_printchar(digit);
	return (count);
}
