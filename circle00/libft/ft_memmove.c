/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:01:27 by skasikci          #+#    #+#             */
/*   Updated: 2025/09/26 15:30:11 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*d;
	const unsigned char		*s;

	if (!dst && !src)
	{
		return (NULL);
	}
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
