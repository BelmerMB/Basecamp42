/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:35:07 by emetras-          #+#    #+#             */
/*   Updated: 2022/04/17 21:47:39 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int num)
{
	char	x;
	char	y;

	x = (num % 10) + 48;
	y = num / 10 + 48;
	write(1, &y, 1);
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 97)
	{
		while (n2 <= 99)
		{
			ft_print_int(n1);
			write(1, " ", 1);
			ft_print_int(n2);
			write(1, ", ", 2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
	ft_print_int(n1);
	write(1, " ", 1);
	ft_print_int(n2);
}
