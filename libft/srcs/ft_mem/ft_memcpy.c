/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 22:13:04 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:36:47 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dst;

	ptr_dst = (char *)dst;
	ptr_src = (const char *)src;
	while (n--)
		*ptr_dst++ = *ptr_src++;
	return (dst);
}
