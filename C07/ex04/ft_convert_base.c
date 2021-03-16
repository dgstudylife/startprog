/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:47:57 by donggele          #+#    #+#             */
/*   Updated: 2021/03/16 20:46:27 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_base_valid(char *str);
int		ft_is_whitespace(char c);
int		ft_strlen(char *src);

int		atoi_base(char *str, char *base, int form)
{
	int decimal;
	int minus;
	int index;

	decimal = 0;
	minus = 1;
	while (ft_is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			minus *= -1;
	while (*str)
	{
		index = -1;
		while (++index < form)
		{
			if (*str == base[index])
				break ;
		}
		if (index == form)
			break ;
		decimal = decimal * form + (minus * index);
		str++;
	}
	return (decimal);
}

int		resolve_base(char *base, char match)
{
	int index;

	index = 0;
	while (base[index])
	{
		if (base[index] == match)
			return (index);
		index++;
	}
	return (-1);
}

int		compute_size(long long result, int form)
{
	int size;

	if (!result)
		return (1);
	size = 0;
	if (result < 0)
		++size;
	while (result)
	{
		result /= form;
		++size;
	}
	return (size);
}

char	*change_base(int decimal, char *base, int form)
{
	long long	tmp;
	char		*string;
	int			size;

	if (decimal == 0)
	{
		string = (char *)malloc(2);
		string[0] = base[0];
		string[1] = 0;
		return (string);
	}
	tmp = decimal;
	size = compute_size(decimal, form);
	string = (char *)malloc(size + 1);
	string[size] = 0;
	if (tmp < 0)
		tmp *= -1;
	while (tmp)
	{
		string[--size] = base[tmp % form];
		tmp /= form;
	}
	if (decimal < 0)
		string[0] = '-';
	return (string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	form;
	int	decimal;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	form = ft_strlen(base_from);
	decimal = atoi_base(nbr, base_from, form);
	form = ft_strlen(base_to);
	return (change_base(decimal, base_to, form));
}
