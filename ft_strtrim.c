/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:45:04 by panguyen          #+#    #+#             */
/*   Updated: 2020/03/09 16:26:49 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		post(char *s)
{
	int		len;
	int		count;

	count = 0;
	len = ft_strlen(s) - 1;
	while (is_whitespace(s[len]))
	{
		len--;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		bws;
	int		m_len;

	str = (char*)s;
	bws = 0;
	if (s == NULL)
		return (NULL);
	while (is_whitespace(*str))
	{
		str++;
		bws++;
		if (*str == '\0')
			return (ft_strsub(s, 0, 0));
	}
	m_len = ft_strlen(s) - bws - post((char*)s);
	return (ft_strsub(s, bws, m_len));
}
