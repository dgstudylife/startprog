/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:33:52 by donggele          #+#    #+#             */
/*   Updated: 2021/02/26 00:39:34 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int	main(void)
{
	char *src;
	char dest[13]; //문자열개수 + 마지막 공백1개로 배열크기 지정

	src = "Hello World!"; //포인터 src에 문자열의 주소 저장
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
