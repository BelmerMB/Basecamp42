/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: _Bot_B <elmermetrasbrum@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:12:30 by _Bot_B            #+#    #+#             */
/*   Updated: 2022/05/05 11:12:30 by _Bot_B           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(int *array, int tam)
{
    while (tam <= 9)
    {
        write(1, &array[tam], 1);
        tam++;
    }
}

void ft_putnbr(int nb)
{
    int digits[10];
    int i;

    i = 9;
    if(nb == -2147483648)
        write(1, "-2147483648", 11);
    else if(nb < 0)
    {
        nb *= -1;
        write(1, "-", 1);
    }
    if ( nb == 0) 
        write(1, "0", 1);
    while(nb > 0)
    {
        digits[i] = (nb % 10) + 48;
        nb = nb / 10;
        i--;
    }
    i++;
    ft_print(digits, i);
}

/* 
int main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);

    ft_putnbr(2147483647);
    write(1, "\n", 1);

    ft_putnbr(1234567);
    write(1, "\n", 1);

    ft_putnbr(+123465);
    write(1, "\n", 1);

    ft_putnbr(0);
    write(1, "\n", 1);

    ft_putnbr(-0);
    write(1, "\n", 1);

    ft_putnbr(-345);
    write(1, "\n", 1);
}

-2,147,483,648 to 2,147,483,647
*/