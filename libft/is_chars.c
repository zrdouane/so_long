/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_chars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:15:42 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/29 23:18:14 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns 1 if <c> is in the ascii table. 0 if not. */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* Returns 1 if <c> is a printable character. 0 if not. */
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/* Returns 1 if <c> is consider a space char. 0 if not. */
int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

/* Returns 1 if <c> is a digit. 0 if not. */
int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* Returns 1 if <c> is alphanumeric. 0 if not. */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
