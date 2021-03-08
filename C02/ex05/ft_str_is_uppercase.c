/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:07:27 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 12:50:07 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isuppercase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!isuppercase(str))
			return (0);
		str++;
	}
	return (1);
}
