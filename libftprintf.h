/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:59:07 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/05 17:08:01 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putnbr(long int nb);
int	ft_putstr(const char *str);
int	ft_strlen(const char *str);
int	ft_putchar(int c);
int	ft_putnbr_basemaj(unsigned long long int nbr);
int	ft_putnbr_base(unsigned long long int nbr);

#endif
