/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:09:42 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/29 23:09:43 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

/* Returns TRUE if <c> is a valid map character */
int	valid_char(char c)
{
	if (c == '1' || c == '0' || c == 'C' || c == 'E' || c == 'P'
		|| c == 'H' || c == 'V' || c == 'F')
		return (TRUE);
	return (FALSE);
}

/* Turns <bool> to TRUE when <c> is equal to <checker>.
* Returning FALSE if <bool> is already TRUE  */
int	valid_uniquechar(char c, char checker, t_bool *bool)
{
	if (c == checker && *bool == FALSE)
		*bool = TRUE;
	else if (c == checker && *bool == TRUE)
		return (FALSE);
	return (TRUE);
}

/* Returns FALSE if <point> is in the border of the map, and <c> is not a '1' */
int	valid_border(char c, t_vector point, t_vector size)
{
	if (point.y == 0 || point.x == 0
		|| point.y == size.y - 1 || point.x == size.x - 1)
		if (c != '1')
			return (FALSE);
	return (TRUE);
}
