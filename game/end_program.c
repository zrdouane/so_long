/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_program.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:08:40 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/29 23:08:41 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_tilemap(t_game *game)
{
	t_tile	**tilemap;

	tilemap = game->tilemap;
	while (*game->tilemap != NULL)
	{
		free(*game->tilemap);
		game->tilemap++;
	}
	free (tilemap);
}

void	free_enemies(t_game *game)
{
	t_enemy	*next;

	if (game->enemy_list == NULL)
		return ;
	while (TRUE)
	{
		next = game->enemy_list->next;
		free (game->enemy_list);
		if (next == NULL)
			break ;
		game->enemy_list = next;
	}
}

/* Frees all allocated memory and makes exit(0) */
int	end_program(t_game *game)
{
	free_tilemap(game);
	game->tilemap = NULL;
	free_enemies(game);
	game->enemy_list = NULL;
	exit(0);
}
