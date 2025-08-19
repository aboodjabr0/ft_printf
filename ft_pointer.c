/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauafth <asauafth@Amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:20:41 by asauafth          #+#    #+#             */
/*   Updated: 2025/08/18 14:53:19 by asauafth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pointer(void *p)
{
    int n;

    n = 0;
    if (!p)
    {
        return ft_putstr("(nil)");
    }
    n += ft_putstr("0x");
    n += ft_to_hexa((unsigned long long)(uintptr_t)p, 'x');
    return (n);
}