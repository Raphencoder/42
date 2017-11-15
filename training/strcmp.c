/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:10:12 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/06 18:22:23 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main()
{
	int		res;
	char s1[6] = "hella";
	char s2[6] = "helo";	
	res = strcmp(s1, s2);
	printf("%d\n", res);
	res = ft_strcmp(s1, s2);
	printf("%d\n", res);
	return (0);
}
