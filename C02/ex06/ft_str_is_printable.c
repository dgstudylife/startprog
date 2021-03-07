/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:13:25 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 00:20:03 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isprintable(char *str)
{
	if (*str >= 32 && *str <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!isprintable(str))
			return (0);
		str++;
	}
	return (1);
}
