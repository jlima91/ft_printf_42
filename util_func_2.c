/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_func_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:26:24 by jlima             #+#    #+#             */
/*   Updated: 2022/05/19 09:26:26 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	length;

	is_neg = (n < 0);
	str = ft_calloc(11 + is_neg, sizeof(*str));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	ft_strrev(str);
	return (str);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*str;
	int		is_neg;
	size_t	length;

	is_neg = (n < 0);
	str = ft_calloc(11 + is_neg, sizeof(*str));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	ft_strrev(str);
	return (str);
}

char	*hex_conversion_unsigned(t_ident *ptr, const char *str, int n)
{
	int				j;
	char			hexadecimalnum[50];
	unsigned int	quotient;
	unsigned int	remainder;

	j = 0;
	quotient = va_arg(ptr->args, unsigned int);
	if (quotient == 0)
		hexadecimalnum[j++] = '0';
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder <= 9)
			hexadecimalnum[j++] = '0' + remainder;
		else
		{
			if (str[n] == 'x')
				hexadecimalnum[j++] = 'a' + remainder - 10;
			else
				hexadecimalnum[j++] = 'A' + remainder - 10;
		}
		quotient = quotient / 16;
	}
	hexadecimalnum[j] = '\0';
	return (ft_strrev(hexadecimalnum));
}

char	*hex_conversion_long(t_ident *ptr)
{
	unsigned int	j;
	char			*hexadecimalnum;
	unsigned long	quotient;
	unsigned long	remainder;

	j = 0;
	hexadecimalnum = (char *)malloc(50);
	if (!(hexadecimalnum))
		return (0);
	quotient = va_arg(ptr->args, unsigned long);
	if (quotient == 0)
		hexadecimalnum[j++] = '0';
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder <= 9)
			hexadecimalnum[j++] = '0' + remainder;
		else
			hexadecimalnum[j++] = 'a' + remainder - 10;
		quotient = quotient / 16;
	}
	hexadecimalnum[j] = '\0';
	return (ft_strrev(hexadecimalnum));
}
