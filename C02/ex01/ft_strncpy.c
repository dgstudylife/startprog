/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:58:44 by donggele          #+#    #+#             */
/*   Updated: 2021/03/10 15:05:57 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *tmp;

	tmp = dest;
	while (n-- > 0 && *src)
		*tmp++ = *src++;
	if (n-- > 0)
		*tmp++ = '\0';
	return (dest);
}
