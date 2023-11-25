/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:09:56 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/24 14:22:41 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int	i;
	char	*strdup;

	i = 0;
	strdup = malloc(sizeof(char *) * ft_strlen(str));
	if (!strdup)
		return (0);
	while (str[i] != '\0')
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
/*
#include <stdio.h>
int	main()
{
	char example[] = "Ola bem vindo ao mundo 24!";
	
	printf("%s", ft_strdup(example));

}
*/
