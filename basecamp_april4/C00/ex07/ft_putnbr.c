/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: _Bot_B <elmermetrasbrum@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:54:26 by emetras-          #+#    #+#             */
/*   Updated: 2022/05/05 13:35:05 by _Bot_B           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	numb[11];
	int		count;

	count = 0;
	numb[0] = '0';
	while (nb != 0)
	{
		numb[count] = (nb % 10) + '0';
		nb = nb / 10;
		count++;
	}
	while (count >= 0)
	{
		write(1, &numb[count], 1);
		count--;
	}
}
