/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_anotheway.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:19 by marvin            #+#    #+#             */
/*   Updated: 2022/05/16 14:13:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    ft_print_combn()
{
    // int comb[9]= {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9",};
    int x;
    int num = 0;
    int inc = 0;
    int aux = 1;

    x = 0;    
    while(x++ <= 120)
    {
        while(inc++ < 9)
        {
            printf("%d, ", num+inc);
        }
        num += 10;
        inc = aux;
        aux++;
    }
}

int main(void)
{
    ft_print_combn();
}