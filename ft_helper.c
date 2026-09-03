/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:08:42 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/09/02 14:08:42 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	char	ch;

	ch = (char)c;
	return (write(1, &ch, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_signed(long n)
{
	int	count;
	char	digit;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr_signed(n / 10);
	digit = (n % 10) + '0';
	count += ft_putchar(digit);
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;
	char	digit;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned(n / 10);
	digit = (n % 10) + '0';
	count += ft_putchar(digit);
	return (count);
}

int ft_putnbr_hex(uintptr_t n, char letter_base)
{
	int	count;
	char	digit;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex(n / 16, letter_base);
	if ((n % 16) < 10)
		digit = (n % 16) + '0';
	else
		digit = ((n % 16) - 10) + letter_base;
	count += ft_putchar(digit);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;
	uintptr_t	pointer;

	pointer = (uintptr_t)ptr;
	count = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putnbr_hex(pointer, 'a');
	return (count);
}