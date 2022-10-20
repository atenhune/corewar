/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:16:55 by altikka           #+#    #+#             */
/*   Updated: 2021/12/02 17:44:34 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
