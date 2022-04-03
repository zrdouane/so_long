/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:09:55 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/29 23:09:56 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "../basics.h"
# include "../so_long.h"

int		valid_file(int argc, char *file);
char	**read_map(char *file);
int		valid_map(char **map);

typedef struct s_mapcheckerdata
{
	t_vector	size;
	t_vector	point;
	t_bool		b_player;
	t_bool		b_exit;
	t_bool		b_collect;
}				t_mapcheckerdata;

void	add_enemy(t_game *game, t_enemyytpe type, t_tile *tile);

#endif
