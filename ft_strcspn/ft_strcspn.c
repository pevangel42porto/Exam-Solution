/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:31:58 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/20 15:35:32 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char *s1;
	const char *s2;

	s1 = s;
	while (*s1)
	{
		s2 = reject;
		while (*s2)
		{
			if (*s1 == *s2)
				return (s1 - s);
			s2++;
		}
		s1++;
	}
	return (s1 - s);
}
