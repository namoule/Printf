/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:59:11 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/06 15:14:35 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (nb == 2147483647)
		return (ft_putstr("2147483647"));
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10 && nb >= 0)
	{
		a = nb + '0';
		write(1, &a, 1);
	}
	return (0);
}

int	ft_printnbr(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		ft_putnbr(nb);
		nb = nb * -1;
		i++;
	}
	else
		ft_putnbr(nb);
	while (nb / 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}

int	ft_p(unsigned long long int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_putstr("0x");
	count += ft_putnbr_base(nb);
	return (count + 2);
}
