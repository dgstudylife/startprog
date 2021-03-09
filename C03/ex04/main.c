/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:20:44 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 15:24:58 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char a[13] = "aababcabcdccc";
	char b[4] = "abcd";
	char *temp;

	temp = ft_strstr(a, b);
	printf("%s", temp);
	return (0);
}
