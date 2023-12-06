/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:14:16 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/06 15:14:25 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	{
	}
	return (i - 1);
}

int	ft_putstr(const char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}
