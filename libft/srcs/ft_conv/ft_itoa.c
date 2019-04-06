/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:27:38 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/03/25 14:01:22 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(nbr = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n < 0)
	{
		nbr[0] = '-';
		nbr[1] = '\0';
		nbr = ft_strjoin(nbr, ft_itoa(-n));
	}
	else if (n >= 10)
		nbr = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n >= 0 && n < 10)
	{
		nbr[0] = n + '0';
		nbr[1] = '\0';
	}
	return (nbr);
}
