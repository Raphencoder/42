/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <raphaelkriefbm@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:44:56 by rkrief            #+#    #+#             */
/*   Updated: 2017/10/25 12:00:30 by Raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncpy(char *dst, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
			if (src[i] != '\0')
			{
					dst[i] = src[i];
					i++;
			}
			else
			{
					dst[i] = '\0';
					return(dst) ;
			}
			n--;
	}
	return(dst);
}
