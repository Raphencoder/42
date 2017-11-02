/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:17:38 by Raphael           #+#    #+#             */
/*   Updated: 2017/11/02 15:52:19 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			main()
{
	char	tab[10]="bonjour22";
	char	tab2[8]="";
	char	value;
	
	value = '$';
//	memcpy(tab, tab2, 5);
	ft_memcpy(tab,tab2, 5);
//	ft_bzero(tab, 5);
//	ft_memset(tab,value,5);
	printf("%s\n", tab);
	return (0);
}
