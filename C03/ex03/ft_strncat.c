/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:12:03 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 17:55:07 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (nb-- > 0 && *src)
	{
		*tmp++ = *src++;
	}
	*tmp = '\0';
	return (dest);
}
