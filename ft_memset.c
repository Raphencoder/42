/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:10:18 by Raphael           #+#    #+#             */
/*   Updated: 2017/11/02 15:44:21 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(char *b, int c, size_t len)
{
	unsigned char *ptr;
	
	ptr = (unsigned char*)b;
	while(len > 0)
		{
			*ptr++ = (unsigned char)c;
			len--;
		}
		return (b);
}
