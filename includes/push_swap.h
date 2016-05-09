/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:55:13 by klescaud          #+#    #+#             */
/*   Updated: 2016/05/09 13:59:47 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

/*
** -----------------------------------------------------------------------------
** array parsing functions (array_op.c):
*/

int		*add_value(int *array, int value);
int		*copy_and_grow(int *array, int value);
int		check_double(int *array, int value);
void	print_int_tab(int *array);

#endif
