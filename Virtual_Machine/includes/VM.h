/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VM.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchetty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 09:35:38 by kchetty           #+#    #+#             */
/*   Updated: 2016/08/22 10:17:14 by kchetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _VM_H
# define _VM_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <op.h>

typedef struct		s_global
{
	int		reg[REG_NUMBER];
	int		prog_count;
}					t_global

#endif

