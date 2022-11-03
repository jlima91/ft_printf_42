/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:42:03 by jlima             #+#    #+#             */
/*   Updated: 2022/05/17 18:03:36 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_ident *ptr)
{
	char	*str;

	str = va_arg(ptr->args, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		ptr->count += 6;
		return ;
	}
	while (*str != '\0')
		ptr->count += write(1, &*str++, 1);
}
