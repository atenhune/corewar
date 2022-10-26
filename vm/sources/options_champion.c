/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options_champion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuikkan <asuikkan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:51:42 by asuikkan          #+#    #+#             */
/*   Updated: 2022/10/25 12:51:44 by asuikkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int	set_player_number(t_options *opts, char *nbr)
{
	int	player_id;

	if (nbr == NULL)
		return (-1);
	player_id = ft_atoi(nbr);
	if (player_id <= 0 || player_id > MAX_PLAYERS)
		error_handler(INVALID_PLAYER_ID, NULL);
	if (opts->next_id)
		return (-1);
	opts->next_id = player_id;
	return (1);
}
