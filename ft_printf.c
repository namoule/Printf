/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:40:22 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/06 09:07:31 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_spe(char c, va_list *args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (c == 'p')
	{
		ft_putstr("0x");
		return (ft_putnbr_base(va_arg(*args, unsigned long long int)) + 2);
	}
	if (c == 'd' || c == 'i'|| c == 'u')
		return (ft_putnbr(va_arg(*args, long)));
	if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(*args, unsigned long long int)));
	if (c == 'X')
		return (ft_putnbr_basemaj(va_arg(*args, unsigned long long int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret;

	va_start(args, str);
	ret = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			ret += ft_spe(str[i + 1], &args);
		else if (str[i - 1] != '%' && str[i] != '%')
			ret += ft_putchar(str[i]);
		else if(str[i] == '%' && str[i + 1] == '%')
		{
			write(1, "%", 1);
			ret += 1;
		}
		i++;
	}
	va_end(args);
	return (ret);
}


int main()
{
	printf("%d\n", ft_printf("%d\n", 10));
	// printf("%d\n", printf("%d\n", 10));
	return(0);
}
