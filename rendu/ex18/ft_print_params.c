/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:24:39 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/06 18:33:34 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc == 1)
		return (0);
	while (j < argc)
	{
		while (argv[j][i] != '\0')
			ft_putchar(argv[j][i++]);
		j++;
		i = 0;
		ft_putchar('\n');
	}
}
