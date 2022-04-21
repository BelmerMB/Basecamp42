/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:10:01 by emetras-          #+#    #+#             */
/*   Updated: 2022/04/17 19:53:35 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_arguments(char *arg)
{
	int count_n;
	int i;
	int empty;

	empty = 0;
	i = 0;
	count_n = 0;
	while(arg[i] != '\0')
	{	
		if (arg[i] > '0' && arg[i] <= '4')
			count_n++;
		if (arg[i] == ' ')
			empty++;
		
		i++;
	}
	if (count_n == 16 && empty == 15)
		return (1);
	else
		return (0);
}