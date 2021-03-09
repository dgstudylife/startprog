/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:25:19 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 15:19:22 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p_str;
	char *p_to_find;

	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		if (*str == *to_find)
		{
			p_str = str + 1;
			p_to_find = to_find + 1;
			while (*p_to_find && *p_str && *p_str == *p_to_find)
			{
				p_str++;
				p_to_find++;
			}
			if (*p_to_find == 0)
				return (str);
			else if (*p_str == 0)
				break ;
		}
		str++;
	}
	return (0);
}
