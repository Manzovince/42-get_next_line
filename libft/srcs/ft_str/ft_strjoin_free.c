/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:16:15 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/03/25 14:24:15 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin_free(char *s1, char *s2, char c)
{
	char	*s;

	s = ft_strjoin(s1, s2);
	if (c == '1' || c == 'L' || c == 'l' || c == 'B' || c == 'b')
		free((char *)s1);
	if (c == '2' || c == 'R' || c == 'r' || c == 'B' || c == 'b')
		free((char *)s2);
	return (s);
}
