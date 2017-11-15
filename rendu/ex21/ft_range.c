/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:39:19 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/07 15:03:30 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = NULL;
	if (min >= max)
		return (range);
	range = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
