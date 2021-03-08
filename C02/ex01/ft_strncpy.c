/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:58:44 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 22:24:21 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *tmp;

	tmp = dest;
	while (n && *src)
	{
		if (*src)
		{
			*tmp++ = *src++;
			n--;
		}
	}
	if (n)
	{
		while (--n)
			*tmp++ = '\0';
	}
	return (dest);
}
