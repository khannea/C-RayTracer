/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnb.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 16:12:22 by thvocans          #+#    #+#             */
/*   Updated: 2018/04/03 17:25:41 by thvocans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNB_H
# define GNB_H
# define BUFF_SIZE 100000
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

struct	s_gnb
{
	char			*str;
	int				position;
	int				end;
};
typedef struct s_gnb	t_gnb;

#endif
