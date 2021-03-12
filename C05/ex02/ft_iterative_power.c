/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 02:11:48 by donggele          #+#    #+#             */
/*   Updated: 2021/03/13 04:01:15 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0 || nb <= 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = nb;
		while (power - 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
