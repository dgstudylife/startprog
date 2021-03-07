/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:57:29 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 00:06:16 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	islowercase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!islowercase(str))
			return (0);
		str++;
	}
	return (1);
}
