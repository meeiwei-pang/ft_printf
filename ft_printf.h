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

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(const char *format, va_list *ap);
int	ft_printchar(int c);
int	ft_printstr(char *s);
int	ft_printnbr_signed(long n);
int	ft_printnbr_unsigned(unsigned int n);
int	ft_printnbr_hex(uintptr_t n, char letter_base);
int	ft_printptr(void *ptr);

#endif