/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisrael- <lisrael-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 02:45:34 by lisrael-          #+#    #+#             */
/*   Updated: 2022/04/10 06:09:32 by lisrael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	rush(int x, int y)
{
	int	li;
	int	col;

		li = 0;
	while (++li <= y && (x > 0 && y > 0))
	{
		col = 0;
		while (++col <= x)
		{
			if ((col == 1 || col == x) && (li == 1 || li == y))
			{
				if (col == 1 && li == 1)
					ft_putchar('/');
				else if ((col == 1 && li == y) || (col == x && li == 1))
					ft_putchar('\\');
				else if (col == x && li == y)
					ft_putchar('/');
			}
			else if (col == 1 || col == x || li == 1 || li == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
