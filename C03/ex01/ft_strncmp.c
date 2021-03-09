/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:08:18 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 17:52:36 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		if (*s1 != *s2)
			break ;
		else if (*s1 == 0 || *s2 == 0)
			break ;
		s1++;
		s2++;
		i++;
	}
	if (n == 0)
		return (0);
	return ((int)(*s1 - *s2));
}
