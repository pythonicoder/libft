/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:55:52 by skasikci          #+#    #+#             */
/*   Updated: 2025/10/14 13:34:29 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	max;

	max = 4294967295;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	if (size && (count > (max / size)))
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(1));
	ft_bzero(ptr, count * size);
	return (ptr);
}
