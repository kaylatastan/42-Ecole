/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktastan <ktastan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:42:53 by ktastan           #+#    #+#             */
/*   Updated: 2023/08/02 15:10:07 by ktastan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int p)
{
	int	r;

	r = nb;
	while (p > 1)
	{
		r *= nb;
		p--;
	}
	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	return (r);
}
