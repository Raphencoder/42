/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <raphaelkriefbm@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:44:56 by rkrief            #+#    #+#             */
/*   Updated: 2017/08/21 23:48:56 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncpy(char *dest, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
			if (src[i] != '\0')
			{
					dest[i] = src[i];
					i++;
			}
			else
			{
					dest[i] = '\0';
					return(dest) ;
			}
			n--;
	}
	return(dest);
}
