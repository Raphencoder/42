/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:10:18 by Raphael           #+#    #+#             */
/*   Updated: 2017/10/26 13:31:59 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	*ft_memset(char *b, int c, size_t len)
{
	unsigned char *ptr;
	
	ptr = (unsigned char*)b;
	while(len > 0)
		{
			*ptr++ = (unsigned char)c;
			len--;
			printf("q");
		}
		return (b);
}

int	main(int argc, char **argv)
{	
	char *b;

	b = argv[2];
	int	c = 5;
	size_t len = 8;
	
	ft_memset(b,c,len);
	return (0);
}
