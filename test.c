/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:11:35 by Raphael           #+#    #+#             */
/*   Updated: 2017/10/25 15:48:32 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
/*	char s1[16] = "coucou234563281";
	char s2[4] = "zzz";
	int	c = '3';
	char *res;

	res = strchr(s,c);
	printf("%s\n", res);*/

	char s1[16] = "coucou234563281";
	char s2[6] = "cou";
	char *res;

	res = strstr(s1,s2);
	printf("%s\n", res);
	return (0);
}
	