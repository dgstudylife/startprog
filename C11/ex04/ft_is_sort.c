/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:51:19 by donggele          #+#    #+#             */
/*   Updated: 2021/03/17 19:04:29 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int up;
	int down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			down = 1;
		else if (f(tab[i], tab[i + 1]) < 0)
			up = 1;
		i++;
	}
	if (up == 1 && down == 1)
		return (0);
	else
		return (1);
}
