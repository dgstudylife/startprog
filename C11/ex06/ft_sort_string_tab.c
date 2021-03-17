/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:27:30 by donggele          #+#    #+#             */
/*   Updated: 2021/03/17 19:14:41 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *str1, char *str2)
{
	unsigned char c1;
	unsigned char c2;

	while (*str1 && *str2)
	{
		c1 = *str1;
		c2 = *str2;
		if (c1 != c2)
			return (c1 - c2);
		str1++;
		str2++;
	}
	c1 = *str1;
	c2 = *str2;
	return (c1 - c2);
}

int		str_size(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
		size++;
	return (size);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	*tmp;

	size = str_size(tab);
	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size + 1 - i)
		{
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
