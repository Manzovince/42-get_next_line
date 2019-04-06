/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:37:42 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:39:06 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_count_words(char const *s, char c)
{
	int word_nb;

	word_nb = 0;
	if (*s != c && *s != '\0')
	{
		word_nb++;
		s++;
	}
	while (*s != '\0')
	{
		if (*s != c && s[-1] == c)
			word_nb++;
		s++;
	}
	return (word_nb + 1);
}
