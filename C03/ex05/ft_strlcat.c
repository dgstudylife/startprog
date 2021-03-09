/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:29:34 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 17:46:28 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = 0;
	src_size = 0;
	while (*dest)
	{
		dest++;
		dest_size++;
	}
	while (*src && (dest_size + src_size + 1) < size)
	{
		*dest++ = *src++;
		src_size++;
	}
	while (*src++)
		src_size++;
	*dest = '\0';
	if (size <= dest_size)
		return (src_size + size);
	else
		return (src_size + dest_size);
}
