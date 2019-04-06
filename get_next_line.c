/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 12:18:10 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/04/03 22:56:09 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*ft_browse_list(t_list **start, int fd)
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
	p = ft_browse_list(&start, fd);
	while (!ft_strchr(p->content, '\n') && (rv = read(fd, buf, BUFF_SIZE)))
		p->content = ft_strnjoin_free(p->content, buf, rv, '1');
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
