/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:21:19 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/03/25 14:22:44 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnjoin_free(const char *s1, const char *s2, size_t len, char c)
{
	char	*s;

	s = ft_strnjoin(s1, s2, len);
	if (c == '1' || c == 'L' || c == 'l' || c == 'B' || c == 'b')
		free((char *)s1);
	if (c == '2' || c == 'R' || c == 'r' || c == 'B' || c == 'b')
		free((char *)s2);
	return (s);
}
