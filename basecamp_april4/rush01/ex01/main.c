/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:52:30 by emetras-          #+#    #+#             */
/*   Updated: 2022/04/17 20:24:22 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "arguments_check.c"

int	ft_atoi( char *str);
int	ft_arguments(char *arg);

int	main(int argc, char **argv)
{
	
	if (argc == 2 && ft_arguments(argv[1]))
	{
		printf("CERTO \n");
		
	}
	else
		write(1, "ERROR$\n", 7);
}

int	ft_atoi( char *str)
{
	int	i;
	int	var;

	i = 0;
	var = 0;
	while ((str[i] >= 48 && str[i] <= 57) != '\0')
	{
		var = var * 10;
		var = var + (str[i] - '0');
		i++;
	}
	return (var);
}
