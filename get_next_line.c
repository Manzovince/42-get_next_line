/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 12:18:10 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/04/07 19:08:41 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_concat_free(const char *s1, const char *s2, size_t len)
{
	char	*s;

	s = ft_strnjoin(s1, s2, len);
	free((char *)s1);
	return (s);
}

static t_list	*ft_stock_line(t_list **start, int fd)
{
	t_list	*tmp;

	tmp = *start;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(start, tmp);
	return (tmp);
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				rv;
	t_list			*start;
	static t_list	*p;
	char			*tmp;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	start = p;
	p = ft_stock_line(&start, fd);
	while (!ft_strchr(p->content, '\n') && (rv = read(fd, buf, BUFF_SIZE)))
		p->content = ft_concat_free(p->content, buf, rv);
	rv = 0;
	while (((char*)p->content)[rv] && ((char*)p->content)[rv] != '\n')
		++rv;
	*line = ft_strndup(p->content, rv);
	(((char*)p->content)[rv] == '\n') ? ++rv : 0;
	tmp = p->content;
	p->content = ft_strdup(p->content + rv);
	p = start;
	free(tmp);
	return (rv ? 1 : 0);
}
