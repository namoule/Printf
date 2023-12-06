/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:54 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/05 14:23:07 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(unsigned long long int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr >= 16 * 16)
	{
		count += ft_putnbr_base(nbr / 16);
		write(1, &(base[nbr % 16]), 1);
		count++;
	}
	else if (nbr < 16)
	{
		write(1, &(base[nbr % 16]), 1);
		count++;
	}
	else
	{
		write(1, &(base[nbr / 16]), 1);
		write(1, &(base[nbr % 16]), 1);
		count += 2;
	}
	return (count);
}

int	ft_putnbr_basemaj(unsigned long long int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nbr >= 16 * 16)
	{
		count += ft_putnbr_basemaj(nbr / 16);
		write(1, &(base[nbr % 16]), 1);
		count++;
	}
	else if (nbr < 16)
	{
		write(1, &(base[nbr % 16]), 1);
		count++;
	}
	else
	{
		write(1, &(base[nbr / 16]), 1);
		write(1, &(base[nbr % 16]), 1);
		count += 2;
	}
	return (count);
}