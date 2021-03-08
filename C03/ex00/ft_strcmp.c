/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:41:39 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 23:02:18 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char c1;
	unsigned char c2;

	while (1)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
			return ((int)(c1 - c2));
		if (!c1)
			break;
	}
	return (0);
}
