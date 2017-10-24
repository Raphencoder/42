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

char	ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest)
		i++;
	while (src)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}
			
