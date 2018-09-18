/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:04:50 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/08/11 14:04:53 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strdup(const char *src)
{
	size_t	n;
	char	*dst;

	n = ft_strlen(src);
	dst = (char*)malloc(sizeof(const char) * (n + 1));
	if (dst)
		ft_memcpy(dst, src, n + 1);
	return (dst);
}
