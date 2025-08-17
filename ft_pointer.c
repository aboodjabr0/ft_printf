/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauafth <asauafth@Amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:20:41 by asauafth          #+#    #+#             */
/*   Updated: 2025/08/17 17:29:05 by asauafth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	*ptr(long int binary)
{
	long int	hexa_decimal;
	long int	i;
	long int	remainder;

	hexa_decimal = 0;
	i = 1;
	while (!binary)
	{
		binary % 10;
		hexa_decimal += remainder * i;
		i *= 2;
		binary /= 10;
	}
}
