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
	va_list	args;
	int	i;
	int	count;

	if (!input)
		return (-1);
	va_start(args, input);
	count = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] != '%')
			count += (int)write(1, &input[i], 1);
		else
		{
			i++;
			if (!input[i])
				break;
			if (input[i] == 'c')
			count += ft_putchar(va_arg(args, int));
			else if (input[i] == 's')
			count += ft_putstr(va_arg(args, char *));
			else if (input[i] == 'p')
			count += ft_pointer(va_arg(args, void *));
			else if (input[i] == 'd' || input[i] == 'i')
			count += ft_putnbr(va_arg(args, int));
			else if (input[i] == 'u')
			count += ft_unsigned(va_arg(args, unsigned int));
			else if (input[i] == 'x' || input[i] =='X')
			count += ft_to_hexa(va_arg(args, unsigned int), input[i]);
		else if (input[i] == '%')
			count += ft_putchar('%');
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int a = 42;
	void *ptr = &a;
	
    int c1;
    int c2;

    c1 = printf("%c\n", 'c');
    c2 = ft_printf("%c\n", 'c');

    printf("printf returned: %d\n", c1);
    printf("ft_printf returned: %d\n", c2);
	printf("\n--------------------------------\n");

	int s1;
	int s2;

	s1 = printf("%s\n", "hello, world");
	c2 = ft_printf ("%s\n", "hello, world");

	printf("printf returned: %d\n", s1);
    printf("ft_printf returned: %d\n", s2);
	printf("\n--------------------------------\n");

	int p1;
	int p2; 

	p1 = printf("%p\n", ptr);
	p2 = ft_printf ("%p\n", ptr);

	printf("printf returned: %d\n", p1);
    printf("ft_printf returned: %d\n", p2);
	printf("\n--------------------------------\n");

	int d_i_1;
	int d_i_2;

	d_i_1 = printf("%d\n%i\n", 12345, 12345);
	d_i_2 = ft_printf ("%d\n%i\n", 12345, 12345);

	printf("printf returned: %d\n", d_i_1);
    printf("ft_printf returned: %d\n", d_i_2);
	printf("\n--------------------------------\n");

	int u1;
	int u2;

	u1 = printf("%u\n", 5482);
	u2 = ft_printf ("%u\n", 5482);

	printf("printf returned: %d\n", u1);
    printf("ft_printf returned: %d\n", u2);
	printf("\n--------------------------------\n");

	int x1;
	int x2; 

	x1 = printf("%x", 101);
	x2 = ft_printf("%x, 101");

	printf("printf returned: %d\n", x1);
    printf("ft_printf returned: %d\n", x2);
	printf("\n--------------------------------\n");
}
