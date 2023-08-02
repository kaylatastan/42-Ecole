/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktastan <ktastan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:10:45 by ktastan           #+#    #+#             */
/*   Updated: 2023/07/29 14:07:15 by ktastan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	in;

	i = 0;
	in = 1;
	ft_lowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (in == 1)
				str[i] -= 32;
			in = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			in = 0;
		else
			in = 1;
		i++;
	}
	return (str);
}
