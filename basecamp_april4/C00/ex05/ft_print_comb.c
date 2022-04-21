/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:22 by emetras-          #+#    #+#             */
/*   Updated: 2022/04/17 21:45:21 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(int numb1, int numb2, int numb3)
{
	write(1, &numb1, 1);
	write(1, &numb2, 1);
	write(1, &numb3, 1);
	if (numb1 != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	numb1;
	int	numb2;
	int	numb3;

	numb1 = 48;
	numb2 = 49;
	numb3 = 50;
	while (numb1 <= 55)
	{
		numb2 = numb1 + 1;
		while (numb2 <= 56)
		{
			numb3 = numb2 + 1;
			while (numb3 <= 57)
			{
				writer (numb1, numb2, numb3);
				numb3++;
			}
			numb2++;
		}
		numb1++;
	}
}
