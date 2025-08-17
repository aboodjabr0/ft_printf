/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauafth <asauafth@Amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:28:19 by asauafth          #+#    #+#             */
/*   Updated: 2025/08/17 17:28:27 by asauafth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>

char	ft_putchar(char c);
char	*ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif