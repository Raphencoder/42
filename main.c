/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:17:38 by Raphael           #+#    #+#             */
/*   Updated: 2017/11/02 13:29:49 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			main()
{
	char	tab[10]="bonjour22";
	char	value;
	
	value = '$';
	ft_memset(tab,value,5);
	printf("%s\n", tab);
	return (0);
}
