/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:26:43 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/24 14:47:45 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == '\t' || str[i + 1] == ' ' || str[i + 1] == '\0'))
			(str[i] -= 32);
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}

	}
	else
		ft_putchar('\n');
}
