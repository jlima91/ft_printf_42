/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:40:58 by jlima             #+#    #+#             */
/*   Updated: 2022/05/17 18:03:41 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(t_ident *ptr)
{
	char			*num;
	unsigned int	i;

	num = ft_unsigned_itoa(va_arg(ptr->args, int));
	i = 0;
	while (num[i] != '\0')
		ptr->count += write(1, &num[i++], 1);
	free(num);
}
