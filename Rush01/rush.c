/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:40:13 by donggele          #+#    #+#             */
/*   Updated: 2021/03/06 18:52:09 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int     g_cond[16];

int	ft_isspace(char c)
{
        if ((c >= 9 && c <= 13) || c == 32)
                return(1);
        return (0);
}
int	make_condition(char *cond)
{
        int	cnt;
        int	i;

        i = 0;
        cnt = 0;
        while (cond[i])
        {
                if (i % 2 == 0 && !ft_isspace(cond[i]) && (cond[i] >= '1' && cond[i] <= '4'))
                        g_cond[cnt++] = cond[i++] - '0';
                else if (i % 2 == 1 && ft_isspace(cond[i]))
                        i++;
                else
                        return (0);
        }
        return (cnt == 16);
}
int	main(int argc, char *argv[])
{
        int i = 0;
        int     a;
        a = make_condition(argv[1]);
        while (g_cond[i])
                printf("%d ", g_cond[i++]);
        printf("return : %d\n", a);
        return 0;
}
