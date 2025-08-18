/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauafth <asauafth@Amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:56:56 by asauafth          #+#    #+#             */
/*   Updated: 2025/08/18 14:53:50 by asauafth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *input, ...)
{
	size_t	i;
	va_list	args;
	size_t	input_len;

	i = 0;
	input_len = strlen(input);
	va_start(args, input);
	while (i < input_len)
	{
		if (input[i] == 'c')
			ft_putchar(va_arg(args, int));
		else if (input[i] == 's')
			ft_putstr(va_arg(args, char *));
		else if (input[i] == 'p')
			ft_pointer(va_arg(args, void *));
		else if (input[i] == 'd' || input[i] == 'i')
			ft_putnbr(va_arg(args, int));
		else if (input[i] == 'u')
			ft_unsigned(va_arg(args, unsigned long));
		else if (input[i] == '%' && input[i + 1] == '%')
			ft_putchar('%');
		i++;
	}
	return (0);
}

int	main(void)
{
	int	a;

	a = -5;
	ft_printf("%p", 0);
}
