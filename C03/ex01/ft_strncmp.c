/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:08:18 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 00:09:53 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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
