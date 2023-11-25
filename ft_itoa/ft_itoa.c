/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:20:55 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/24 15:58:04 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(long int nbr)
{
	size_t len = 1;;

	while (nbr /= 10)
		len++;
	return (len);
}


char			*ft_itoa(int n)
{
	char		*str_num;
	size_t	digits;
	long int	num;

	num = n;
	digits = ft_strlen(num);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	if (!(str_num = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
/*
int	main(void)
{
	int i = 0;
	int tab[] = {16};

	printf("%s\n", ft_itoa(tab[i++]));
}*/
