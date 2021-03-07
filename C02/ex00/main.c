/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:51:44 by donggele          #+#    #+#             */
/*   Updated: 2021/03/07 22:37:03 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char dest[13]; //문자열개수 + 마지막 공백1개로 배열크기 지정
	
	src = "Hello World!"; //포인터 src에 문자열의 주소 저장
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
