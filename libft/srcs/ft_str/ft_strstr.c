/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 22:15:06 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:38:22 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *haystack_it;
	const char *needle_it;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		haystack_it = haystack;
		needle_it = needle;
		while (*needle_it != '\0' && *haystack_it == *needle_it)
		{
			haystack_it++;
			needle_it++;
		}
		if (*needle_it == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
