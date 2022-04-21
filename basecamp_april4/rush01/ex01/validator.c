/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 03:35:37 by emetras-          #+#    #+#             */
/*   Updated: 2022/04/18 03:37:09 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int func(vista[], qtd_a_ver)   // 3 vista  = 1 2 3 4
{		
	int i;
	int count_v;

	i = 0;
	count_v = 0;
		
	if(vista[0] == 3)
		return (2);
	else if (vista[0] == 4)
		return (1);
	while(i < 3)
	{
		if(vista[i] < vista[i+1])	//se a primeira vista for menor que a vista sequinte
		{
			count_v++;				
			i++;
		}
	}
	return (count_v + 1);
}
