/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 05:14:50 by donggele          #+#    #+#             */
/*   Updated: 2021/03/15 18:36:57 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	is_base_valid(char *str)
{
	char	*temp;
	int		i;
	int		j;

	temp = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	while (*temp)
	{
		if (is_whitespace(*temp) || *temp == '+' || *temp == '-')
			return (0);
		temp++;
	}
	i = 0;
	while (i < temp - str)
	{
		j = i + 1;
		while (j < temp - str)
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

int	resolve_base(char *base, char match)
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

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	minus;
	int form;

	if (!is_base_valid(base))
		return (0);
	form = ft_strlen(base);
	result = 0;
	minus = 1;
	while (is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (resolve_base(base, *str) != -1)
	{
		result *= form;
		result += resolve_base(base, *str);
		str++;
	}
	return (result * minus);
}
