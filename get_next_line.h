/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:37:44 by vguillem          #+#    #+#             */
/*   Updated: 2017/12/02 10:28:12 by vguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include "./libft/libft.h"

# define BUFF_SIZE 838

typedef struct		s_gnl
{
	int				fd;
	int				nbread;
	struct s_gnl	*next;
	char			*str;
	int				endfile;
}					t_gnl;
int					get_next_line(const int fd, char **line);

#endif
