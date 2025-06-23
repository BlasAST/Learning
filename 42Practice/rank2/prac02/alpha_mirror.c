/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:10:29 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/06/19 14:35:19 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argn, char **args)
{
	int	i;

	i = 0;
	if (argn == 2)
	{
		while (args[1][i])
		{
			if (args[1][i] >= 'A' && args[1][i] < 'N')
				args[1][i] = 'Z' - (args[1][i] - 'A');
			else if (args[1][i] >= 'a' && args[1][i] < 'n')
				args[1][i] = 'z' - (args[1][i] - 'a');
			else if (args[1][i] >= 'N' && args[1][i] <= 'Z')
				args[1][i] = 'A' + ('Z' - args[1][i]);
			else if (args[1][i] >= 'N' && args[1][i] <= 'z')
				args[1][i] = 'a' + ('z' - args[1][i]);
			write (1, &args[1][i], 1);
			i++;

		}
	}
	write (1, "\n", 1);
}

