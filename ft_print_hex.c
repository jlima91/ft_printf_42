/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:51:02 by jlima             #+#    #+#             */
/*   Updated: 2022/05/17 18:44:53 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(t_ident *ptr, const char *str, int n)
{
	char			*num;
	unsigned int	i;

	num = hex_conversion_unsigned(ptr, str, n);
	i = 0;
	while (num[i] != '\0')
		ptr->count += write(1, &num[i++], 1);
}
