/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 03:44:32 by donggele          #+#    #+#             */
/*   Updated: 2021/02/26 10:33:32 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkanother(char *str)
{
	if (*str > 'a' && *str < 'z' || *st)
		return (1);
	else if (*str > 'A' && *str < 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (checkanother(str + i))

		i++;
	}
}
