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

int		atoi(const char *nptr)
{
		int		nb;
		int		i;
		int		var;

		i = 0;
		nb = 0;
		var = 1;
		while (nptr[i] <= 32)
				i++;
		if (nptr[i] == '-' || nptr[i] == '+')
				if (nptr[i++] == '-')
						var = -1;
		while (nptr[i] >= 48 && nptr[i] <= 57)
				nb = (nb * 10) + (nptr[i++] - '0');
		return (nb * var);
}
