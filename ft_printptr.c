/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:43:06 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/09/07 18:53:20 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	int			count;
	uintptr_t	pointer;

	pointer = (uintptr_t)ptr;
	count = 0;
	if (ptr == NULL)
		return (ft_printstr("(nil)"));
	count += ft_printstr("0x");
	count += ft_printnbr_hex(pointer, 'a');
	return (count);
}
