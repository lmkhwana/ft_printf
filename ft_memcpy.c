/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:01:47 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/08/11 14:01:50 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*vdst;
	const unsigned char *vsrc;

	vdst = dst;
	vsrc = src;
	i = 0;
	while (i < n)
	{
		vdst[i] = vsrc[i];
		i++;
	}
	return (dst);
}
