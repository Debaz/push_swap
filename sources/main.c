/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 10:07:22 by klescaud          #+#    #+#             */
/*   Updated: 2016/05/09 14:17:05 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		main(int ac, char **av)
{
	int		*array;
	int		i;

	i = 1;
	array = NULL;
	if (ac > 1)
		while (i < ac)
		{
			if (!check_double(array, ft_atoi(av[i])))
			{
				array = add_value(array, ft_atoi(av[i]));
//				ft_putnbr(array[0]);
//				ft_putchar(' ');
				i++;
			}
			else
			{
				ft_putendl("Error");
				free(array);
				array = NULL;
				break;
			}
		}
	print_int_tab(array);
	return (0);
}
