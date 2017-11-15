/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:41:50 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/07 10:19:02 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_compare(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
	{
		while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
			i++;
		return (s1[i] - s2[i]);
	}
	return (0);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	int		j;
	int		end;
	char	*clone;

	j = 1;
	end = 0;
	while (end < argc + 2)
	{
		while (j < argc - 1)
		{
			if (ft_compare(argv[j], argv[j + 1]) > 0)
			{
				clone = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = clone;
			}
			j++;
		}
		end++;
		j = 1;
	}
	j = 1;
	while (j < argc)
		ft_putstr(argv[j++]);
}
