/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:32:28 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/29 23:32:29 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* Returns 0 printing <message> in red */
int	error(char *message)
{
	printf("\033[0;31m" " Error\n    %s\n" "\033[0m", message);
	return (0);
}

/* Returns NULL printing <message> in red */
void	*null_error(char *message)
{
	printf("\033[0;31m" " Error\n %s\n" "\033[0m", message);
	return (0);
}

/* Prints <message> in yellow */
void	print_warning(char *message)
{
	printf("\033[0;33m" " Warning\n %s\n" "\033[0m", message);
}
