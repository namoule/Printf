/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:59:11 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/06 09:04:59 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int	ft_putnbr(long int nb)
{
	int count;
	int d;
	int c;

	c = 0;
	d = 1;
	count = 0;
	if (nb == -2147483648)
		return(count += ft_putstr("-2147483648"));
	if(nb < 0)
	{
		nb = nb * -1;
		count += ft_putchar('-');
	}
	while(d < nb)
		d = d * 10;
	while(d > 1)
	{
		d = d / 10;
		c = (nb / d);
		nb -= c * d;
		c += '0';
		count += ft_putchar(c);
	}
	return(count);
}
// int main()
// {
// 	ft_putnbr(22);
// 	return(0);
// }