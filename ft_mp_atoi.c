/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mp_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:31:11 by ablondel          #+#    #+#             */
/*   Updated: 2021/02/10 11:56:50 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cub3d.h"

int		ft_atoi(char *s)
{
	int res;

	res = 0;
	while (*s == '\v' || *s == '\r' || *s == '\t' ||
	*s == '\f' || *s == '\n' || *s == ' ')
		s++;
	if (*s == '-')
		return (-1);
	if (!ft_is_digit(*s))
		return (-1);
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - '0';
	return (res);
}
