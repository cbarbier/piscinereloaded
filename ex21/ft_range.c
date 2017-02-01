/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:10:40 by cbarbier          #+#    #+#             */
/*   Updated: 2016/11/02 18:21:26 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int index;

	if (min >= max)
		return (0);
	if (!(res = malloc((max - min) * sizeof(int))))
		return (0);
	index = 0;
	while (index + min < max)
	{
		res[index] = min + index;
		index++;
	}
	return (res);
}
