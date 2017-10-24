/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:10:18 by Raphael           #+#    #+#             */
/*   Updated: 2017/10/24 12:33:02 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//void	*ft_memset(void *b, int c, size_t len)

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int main(void)
{
	
	void *b = "coucou";
	int c = 5;
	size_t len = 3;
	size_t	i;
	ft_putchar('A');
	i = 0;
	while(len > 0)
		{
			ft_putchar('1');
			((char*)b)[i++] = (unsigned char)c;
			len--;
			ft_putchar('B');
			ft_putchar('\n');
		}
		printf("%s\n", b);
		return(0);
}
