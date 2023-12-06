/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:16:42 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/06 15:17:33 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_strlen(const char *str);
int	ft_putstr(const char *str);
int	ft_putnbr_basemaj(unsigned long long int nbr);
int	ft_putnbr_base(unsigned long long int nbr);
int	ft_putunsigned(unsigned int n);
int	ft_p(unsigned long long int nb);
int	ft_putnbr(int nb);
int	ft_printnbr(int nb);
int	ft_printf(const char *str, ...);

#endif
