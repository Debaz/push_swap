/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 12:12:33 by klescaud          #+#    #+#             */
/*   Updated: 2016/05/25 15:53:54 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		ps_parsing(int *tab, char **values)
{
	int		i;

	i = 1;
	while (i < tab[0])
	{
		if (is_value(values[i]))
		{
			if (!check_double(tab, ft_atoi(values[i]), i))
			{
				tab[i] = ft_atoi(values[i]);
			}
			else
				return (2);
		}
		else
			return (1);
		i++;
	}
	return (0);
}

int		is_value(char *n)
{
	int		i;

	i = 0;
	while (n[i])
	{
		if (i == 0 && n[i] == '-')
			i++;
		if (!ft_isdigit(n[i]))
			return (0);
		else
			i++;
	}
	return (1);
}

int		check_double(int *tab, int n, int i)
{
	int		j;

	j = 1;
	while (j < i)
	{
		if (tab[j] == n)
			return (1);
		j++;
	}
	return (0);
}
