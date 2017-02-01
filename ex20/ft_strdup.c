/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:17:52 by cbarbier          #+#    #+#             */
/*   Updated: 2016/11/03 15:05:34 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		len;
	int		index;

	len = ft_strlen(src);
	if (!(res = (char*)malloc((len + 1) * sizeof(char))))
		return (0);
	index = 0;
	while (index < len)
	{
		res[index] = src[index];
		index++;
	}
	res[len] = 0;
	return (res);
}
