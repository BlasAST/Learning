/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:50:14 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/06/19 15:48:16 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *nb)
{
	int	i;
	int	sgn;

	i = 0;
	sgn = 1;
	while (*nb == ' ')
		nb++;
	if (*nb == '+' || *nb == '-')
	{
		if (*nb == '-')
			sgn = -1;
		nb++;
	}
	while (*nb >= '0' && *nb <= '9')
	{
		i *= 10;
		i += *nb - '0';
		nb++;
	}
	return (i * sgn);
}

void	ft_itoa(int nb)
{
	long nbl;
	char	c;

	nbl = nb;
	if (nbl < 0)
	{
		write (1, "-", 1);
		nbl *= -1;
	}
	if(nbl > 0)
	{
		ft_itoa(nbl / 10);
		c = nbl % 10 + '0';
		write (1, &c, 1);
	}
}

int	do_op(int nb1, char *operator, int nb2)
{
	int result;

	result = 0;
	if (*operator == '+')
		result = nb1 + nb2;
	else if (*operator == '-')
		result = nb1 - nb2;
	else if (*operator == '*')
		result = nb1 * nb2;
	else if (*operator == '/')
		result = nb1 /nb2;
	else if (*operator == '%')
		result = nb1 % nb2;
	return (result);
}

int	main(int argn, char **args)
{
	if (argn == 4)
	{
		ft_itoa(do_op(ft_atoi(args[1]), args[2], ft_atoi(args[3])));
	}
	write (1, "\n", 1);
}
