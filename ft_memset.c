/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:10:18 by Raphael           #+#    #+#             */
/*   Updated: 2017/10/25 11:26:25 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t		  i;

	i = 0;
	ptr = (unsigned char*)b;
	while(len > 0)
		{
			ptr[i++] = (unsigned char)c;
			len--;
		}
		return (b);
}

int	main()
{
	void *b = "coucou";
	int	c = 5;
	size_t len = 8;
	
	ft_memset(b,c,len);
	return (0);
}
