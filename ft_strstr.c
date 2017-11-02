/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:54:31 by Raphael           #+#    #+#             */
/*   Updated: 2017/10/25 16:11:46 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (s2 == '\0')
			return (NULL);
	while (s1 + i != '\0')
	{
		while (s1 != s2 && s1 != '\0')
		{
			s1 = s1 + i;
			printf("Q");
		}
		while ((s1 + i) == (s2 + j))
		{
			i++;
			j++;
		}
		if (s2 + j == '\0')
			return ((char*)s1 + i);
		j = 0;
	}
	return (NULL);
}

int main()
{
	
	char s1[16] = "coucou234563281";
	char s2[5] = "cou23";
	char *res;
	
	res = ft_strstr(s1, s2);
	printf("%s\n", res);
	return (0);
}











