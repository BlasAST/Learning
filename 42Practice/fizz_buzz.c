/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:11:11 by marvin            #+#    #+#             */
/*   Updated: 2025/06/02 20:11:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// * Write a program that prints the numbers from 1 to 100, each separated by a
// * newline.
// * If the number is a multiple of 3, it prints 'fizz' instead.
// * If the number is a multiple of 5, it prints 'buzz' instead.
// * If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

#include "unistd.h"

void	ft_putnbr(int nb)
{
	char	c;
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	*fizzbuzz()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}

int main(void)
{
	fizzbuzz();
}