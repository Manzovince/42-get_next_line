/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 22:14:51 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:38:12 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	char	*hay_cpy;
	char	*needle_cpy;

	if (!*needle)
		return ((char *)haystack);
	while (n-- && *haystack)
	{
		if (*haystack == *needle)
		{
			i = n;
			hay_cpy = (char *)haystack + 1;
			needle_cpy = (char *)needle + 1;
			while (i-- && *hay_cpy && *needle_cpy && *hay_cpy == *needle_cpy)
			{
				++hay_cpy;
				++needle_cpy;
			}
			if (!*needle_cpy)
				return ((char *)haystack);
		}
		++haystack;
	}
	return (NULL);
}
