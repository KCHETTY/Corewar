/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_misc_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 12:58:48 by oexall            #+#    #+#             */
/*   Updated: 2016/08/23 10:37:59 by kchetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <asm.h>

t_arg_type	ft_gettype(char *param)
{
	while (*param == ' ' || *param == '\t')
		param++;
	if (*param == 'r')
		return (T_REG);
	else if (*param == '%')
		return (T_DIR);
	return (T_IND);
}
