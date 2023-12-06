/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:40:22 by jealefev          #+#    #+#             */
/*   Updated: 2023/12/06 15:14:15 by jealefev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spe(char c, va_list *args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 'p')
		return (ft_p(va_arg(*args, unsigned long long int)));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(*args, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_base(va_arg(*args, unsigned int)));
	else if (c == 'X')
		return (ft_putnbr_basemaj(va_arg(*args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
	{
		ft_putchar('%');
		return (ft_putchar(c) + 1);
	}
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
	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ret += ft_spe(str[i], &args);
		}
		else
		{
			write(1, &str[i], 1);
			ret++;
		}
		i++;
	}
	va_end(args);
	return (ret);
}

// int	main(void)
// {
// 	int	p;

// 	p = 1;
// 	printf("%d\n", ft_printf(" %%   %%   %% "));
// 	printf("%d\n", printf(" %%   %%   %% "));
// 	return (0);
// }
