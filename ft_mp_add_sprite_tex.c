/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mp_add_sprite_tex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:37:09 by ablondel          #+#    #+#             */
/*   Updated: 2021/02/14 14:36:34 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cub3d.h"

int		ft_add_sprite_tex(char *elem, t_cub *ad)
{
	int i;

	i = 0;
	if (ad->path_sp_ispec == 1)
		return (-1);
	ft_skip_non_digit(elem, &i);
	if (!(ad->path_sp = ft_get_path(&elem[i])))
		return (-1);
	ad->path_sp_ispec = 1;
	ad->data_found++;
	return (0);
}
