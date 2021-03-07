/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:45:50 by donggele          #+#    #+#             */
/*   Updated: 2021/03/07 23:53:32 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isnum(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!isnum(str))
			return (0);
		str++;
	}
	return (1);
}
