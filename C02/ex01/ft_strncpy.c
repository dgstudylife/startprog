/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:58:44 by donggele          #+#    #+#             */
/*   Updated: 2021/03/07 18:41:15 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; //갯수 이므로 양수여야함

	i = 0;
	while (src[i] && i < n)
	{	
		dest[i] = src[i];
		i++;
	}
	while (index < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
