/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 15:07:10 by Raphael           #+#    #+#             */
/*   Updated: 2017/11/02 15:49:58 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, void *src, size_t n)
{
	int		i;
	char	*ptr;
	char	*ptrs;

	i = n;
	ptr = (char*)dst;
	ptrs = (char*)src;
	while (n > 0)
	{
		*ptr++ = *ptrs++;
		n--;
	}
	while (i > 0)
	{
			ptr--;
			i--;
	}
	return (ptr);
}

