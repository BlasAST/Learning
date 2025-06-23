/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:56:43 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/06/19 16:39:15 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_count_words(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str != '\0')
		{
			while (*str != ' ' && *str != '\0')
				str++;
			i++;
		}
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_copy(char **add, char *str)
{
	int	i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		(*add)[i] = str[i];
		i++;
	}
	(*add)[i] = '\0';
}

char	**ft_split(char *str)
{
	int len_str;
	int	i_stack;
	char **stack;

	stack = (char **) malloc (sizeof(char *) * (ft_count_words(str) + 1));
	if (!stack)
		return (NULL);
	i_stack = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			break ;
		len_str = ft_strlen(str);
		stack[i_stack] = (char *) malloc (sizeof(char) * (len_str + 1));
		if (!stack[i_stack])
			return (NULL);
		ft_copy(&stack[i_stack], str);
		i_stack++;
		str += len_str;
	}
	stack[i_stack] = NULL;
	return (stack);
}

int main(void)
{
	char *n;
	char **a;

	n = "HOla buenas t ardes como estas";
	a = ft_split(n);
	printf("%s", a[0]);

}
