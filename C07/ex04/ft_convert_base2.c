/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:56:12 by donggele          #+#    #+#             */
/*   Updated: 2021/03/16 17:32:02 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

int	ft_is_whitespace(char c)
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
		if (ft_is_whitespace(*temp) || *temp == '+' || *temp == '-')
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
