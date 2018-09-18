/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:02:20 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/08/11 14:02:23 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_print_str(char *str, int precision)
{
	int					len;

	len = 0;
	if (str == NULL)
		return (ft_print_str("(null)", precision));
	while (*str != '\0' && precision--)
	{
		len += ft_print_char(*str);
		str++;
	}
	return (len);
}
