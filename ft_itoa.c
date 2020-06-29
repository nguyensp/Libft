/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 18:34:28 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 00:16:55 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static int	nbr_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = nbr_len(n);
	if (!(result = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
