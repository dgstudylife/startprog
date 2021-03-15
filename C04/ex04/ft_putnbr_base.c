/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:33:15 by donggele          #+#    #+#             */
/*   Updated: 2021/03/15 17:47:06 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		is_base_valid(char *str)
{
	char	*temp;
	int		i;
	int		j;

	temp = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	while (*temp)
	{
		if ((*temp >= 9 && *temp <= 13) || *temp == ' '
				|| *temp == '+' || *temp == '-')
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

void	ft_putnbr_base_recursive(int number, char *base, int form)
{
	if (number == -2147483648)
	{
		ft_putnbr_base_recursive(number / form, base, form);
		write(1, &(base[-(number % form)]), 1);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-number, base, form);
		return ;
	}
	if (number > form - 1)
		ft_putnbr_base_recursive(number / form, base, form);
	write(1, &(base[number % form]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int form;

	if (!is_base_valid(base))
		return ;
	form = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, form);
}
