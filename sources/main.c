/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:59:28 by klescaud          #+#    #+#             */
/*   Updated: 2016/05/11 13:29:12 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		main(int ac, char **av)
{
	int		tab[ac];
	int		err;

	if (ac > 1)
	{
		tab[0] = ac;
		err = ps_parsing(tab, av);
		if (err != 0)
		{
			ft_putstr("Error : ");
			ft_putnbr(err);			// DEBUG
			ft_putendl("");
		}
		else
			ft_putendl("Izokay");
//			push_swap(tab);
	}
	return (0);
}
