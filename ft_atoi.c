/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 13:58:19 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/08/11 13:58:22 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_atoi_f(char **s)
{
	int			res;
	int			i;
	int			charge;

	res = 0;
	i = 0;
	charge = 1;
	while ('0' <= (*s)[i] && (*s)[i] <= '9')
	{
		res = res * 10 + (*s)[i] - '0';
		i++;
	}
	(*s) = &(*s)[i];
	return (res * charge);
}
