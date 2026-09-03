/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:17:01 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/27 15:40:23 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(const char *format, va_list *ap);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr_signed(long n);
int	ft_putnbr_unsigned(unsigned int n);
int ft_putnbr_hex(uintptr_t n, char letter_base);
int	ft_putptr(void *ptr);

#endif