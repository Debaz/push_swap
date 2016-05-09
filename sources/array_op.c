/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:22:27 by klescaud          #+#    #+#             */
/*   Updated: 2016/05/09 14:14:31 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		*add_value(int *array, int value)
{
	if (array == NULL)
	{
		array = malloc(sizeof(int) * 2);
		array[0] = 1;
		array[1] = value;
	}
	else
		array = copy_and_grow(array, value);
	return (array);
}

int		*copy_and_grow(int *array, int value)
{
	int		*tmp;
	int		i;

	i = 0;
	tmp = malloc(sizeof(int) * array[0] + 1);
	while (i <= array[0])
	{
		tmp[i] = array[i];
		i++;
	}
	i = 1;
	free(array);
	array = malloc(sizeof(int) * tmp[0] + 2);
	array[0] = tmp[0] + 1;
	while (i <= tmp[0])
	{
		array[i] = tmp[i];
		i++;
	}
	array[i] = value;
	free(tmp);
	return (array);
}

int		check_double(int *array, int value)
{
	int		i;

	if (array == NULL)
		return (0);
	i = 1;
	while (i <= array[0])
	{
		if (array[i] == value)
			return (1);
		i++;
	}
	return (0);
}

void	print_int_tab(int *array)
{
	int		i;

	i = 1;
	if (array == NULL)
		ft_putendl("No Value");
	else
	{
		while (i <= array[0])
		{
			ft_putnbr(array[i]);
			ft_putchar(' ');
			i++;
		}
		ft_putendl("");
	}
}
