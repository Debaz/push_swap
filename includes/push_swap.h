/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:55:13 by klescaud          #+#    #+#             */
/*   Updated: 2016/05/11 13:12:57 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

/*
** -----------------------------------------------------------------------------
** Parsing related functions (parser.c) :
*/

int		ps_parsing(int *tab, char **values);
int		is_value(char *n);
int		check_double(int *tab, int n, int i);

#endif
