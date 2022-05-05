/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: _Bot_B <elmermetrasbrum@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:00:52 by _Bot_B            #+#    #+#             */
/*   Updated: 2022/05/05 11:00:52 by _Bot_B           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

/*
    main teste
int main(void)
{
    char name[] = "tamanho maximo ? ~çéáóíÌìòà\nteste de novo novamente \n";
    ft_putstr(name); 
}
*/