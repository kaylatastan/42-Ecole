/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktastan <ktastan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:55:59 by ktastan           #+#    #+#             */
/*   Updated: 2023/07/30 17:57:23 by ktastan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexadecimal(unsigned char hex)
{
	ft_putchar("0123456789abcdef"[hex / 16]);
	ft_putchar("0123456789abcdef"[hex % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 32 || str[i] == 127))
			ft_putchar(str[i]);
		else if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_hexadecimal(str[i]);
		}
		i++;
	}
}
