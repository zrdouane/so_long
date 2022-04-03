/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:15:52 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/29 23:15:53 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creates -with malloc- an array with <count> elements of 
<size> bytes and fills it with '\0' chars */
void	*ft_calloc(size_t count, size_t size)
{
	void	*output;

	output = malloc(count * size);
	if (output == 0)
		return (NULL);
	ft_bzero(output, count * size);
	return (output);
}
