/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:11:35 by Raphael           #+#    #+#             */
/*   Updated: 2017/10/25 14:18:07 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char s[16] = "coucou234563281";
	int	c = 'o';
	char *res;

	res = strchr(s,c);
	printf("%s\n", res);
	return (0);
}
	
