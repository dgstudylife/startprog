/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:12:46 by donggele          #+#    #+#             */
/*   Updated: 2021/02/25 13:24:41 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int j;
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3, 4, 5, 6};
	i = 0;
	j = 0;
	ft_rev_int_tab(a, 5);
	while(i++ < 5)
		printf("%d", a[i-1]);
	ft_rev_int_tab(b, 6);
	printf("\n");
	while(j++ < 6)
		printf("%d", b[j-1]);
	return(0);
}
