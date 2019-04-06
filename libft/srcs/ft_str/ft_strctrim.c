/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:15:39 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/03/25 14:34:50 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strctrim(char const *s, char c)
{
	unsigned int	i;
	size_t			len;
	char			*mem;

	i = 0;
	while ((s[i]) == c)
		++i;
	len = ft_strlen(s) - 1;
	while (len > i && s[len] == c)
		len--;
	if (len < i)
		return (mem = ft_strdup(""));
	return (mem = ft_strsub(s, i, len - (size_t)i + 1));
}
