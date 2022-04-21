/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:26:22 by lisrael-          #+#    #+#             */
/*   Updated: 2022/04/11 03:13:31 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

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

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	else
		rush(5, 1);
	return (0);
}
