/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktastan <ktastan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:01:32 by ktastan           #+#    #+#             */
/*   Updated: 2023/07/23 12:42:24 by ktastan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

#include <stdio.h>

int main()
{
	int ***nbr;
	int **ptr1;
	int *ptr2;
	int number;

	nbr = &ptr1;
	ptr1 = &ptr2;
	ptr2 = &number;
	
	ft_ultimate_ft(nbr);
	printf("%d", number);

}


