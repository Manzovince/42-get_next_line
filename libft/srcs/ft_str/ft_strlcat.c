/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 22:14:44 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:37:43 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		len_dst;
	size_t		n;

	ptr_dst = dst;
	ptr_src = src;
	n = size;
	while (*ptr_dst != '\0' && n-- != 0)
		ptr_dst++;
	len_dst = ptr_dst - dst;
	n = size - len_dst;
	if (n == 0)
		return (len_dst + ft_strlen(src));
	while (*ptr_src != '\0')
	{
		if (n != 1)
		{
			*ptr_dst++ = *ptr_src;
			n--;
		}
		ptr_src++;
	}
	*ptr_dst = '\0';
	return (len_dst + (ptr_src - src));
}
