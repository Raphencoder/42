/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:02:32 by Raphael           #+#    #+#             */
/*   Updated: 2017/11/07 15:07:37 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*clone;
	int		j;

	i = 0;
	while (src[i])
		i++;
	clone = (char *)malloc(sizeof(*clone) * (i + 1));
	j = 0;
	while (src[j])
	{
		clone[j] = src[j];
		j++;
	}
	clone[j] = '\0';
	return (clone);
}
