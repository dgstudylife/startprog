/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:58:44 by donggele          #+#    #+#             */
/*   Updated: 2021/03/10 21:02:03 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *tmp;

	tmp = dest;
	while (n > 0 && *src)
	{
		*tmp++ = *src++;
		n--;
	}	
	while (n > 0)
	{
		*tmp++ = '\0';
		n--;
	}
	return (dest);
}
