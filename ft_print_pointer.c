/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:37:36 by jlima             #+#    #+#             */
/*   Updated: 2022/05/17 18:03:31 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(t_ident *ptr)
{
	char			*num;
	unsigned int	i;

	num = hex_conversion_long(ptr);
	ptr->count += write(1, "0x", 2);
	i = 0;
	while (num[i] != '\0')
		ptr->count += write(1, &num[i++], 1);
	free(num);
}
