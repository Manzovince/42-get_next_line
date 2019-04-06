/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:29:51 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:41:53 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*result;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_isspace(*s))
		s++;
	while (s[i])
	{
		if (!ft_isspace(s[i]))
			j = i;
		i++;
	}
	if (!(result = ft_strnew(j + 1)))
		return (NULL);
	i = 0;
	while (i <= j)
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}
