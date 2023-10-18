/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <klopez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:57:43 by klopez            #+#    #+#             */
/*   Updated: 2023/10/18 19:48:54 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_integer(int nb);
int	ft_format(const char c, va_list args);
int	ft_char(char *str);
int	ft_putchar(char c);
int	ft_uinteger(unsigned int nb);
int	ft_nbrhexa(unsigned int nb, int format);
int	ft_countnb(int c);
int	ft_countnbhex(unsigned int c);
int	ft_countnbu(unsigned int c);
int	ft_countnbhexl(unsigned long c);
int	ft_nbrptr(unsigned long nb);
int	ft_format2(const char c, va_list args);
int	ft_putcharp(char c);
int	ft_printf(const char *s, ...);

#endif