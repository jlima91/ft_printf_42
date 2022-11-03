/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_func_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:26:35 by jlima             #+#    #+#             */
/*   Updated: 2022/05/19 09:26:37 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	tmp;

	i = 0;
	size = 0;
	if (!str)
		return (NULL);
	while (str[size] != '\0')
		size++;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char			*ptr;
	unsigned int	i;

	if (nelem + elsize < nelem)
		return (0);
	ptr = malloc((nelem * elsize));
	if (!(ptr))
		return (0);
	i = 0;
	while (i < nelem * elsize)
		ptr[i++] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
