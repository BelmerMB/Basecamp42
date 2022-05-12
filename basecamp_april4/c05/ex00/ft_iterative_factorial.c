/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: _Bot_B <elmermetrasbrum@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:07:54 by _Bot_B            #+#    #+#             */
/*   Updated: 2022/05/09 13:07:54 by _Bot_B           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int result;

    result = nb;
    if(result == 0)
        return (1);
    if (result < 0)
        return (0);
    while (--nb > 0)
        result *= nb;
    return (result);
}

#include <stdio.h>

int main (void)
{
    printf("%d\n", ft_iterative_factorial(0));
    printf("%d\n", ft_iterative_factorial(1));
    printf("%d\n", ft_iterative_factorial(-1));
    printf("%d\n", ft_iterative_factorial(-12554));
    printf("%d\n", ft_iterative_factorial(10));
    printf("%d\n", ft_iterative_factorial(5));

}
