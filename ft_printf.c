/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:04:01 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/08/11 14:04:04 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_printf(char *fmt, ...)
{
	int					len;
	va_list				va;

	len = 0;
	va_start(va, fmt);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
			len += ft_print_char(*fmt);
		else
		{
			fmt++;
			len += ft_look_conversion(&(fmt), va);
		}
		fmt++;
	}
	va_end(va);
	return (len);
}
