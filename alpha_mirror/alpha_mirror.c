/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:44:47 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/22 15:05:59 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('a' + 'z' - str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('A' + 'Z' - str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_alpha_mirror(argv[1]);
	write(1, "\n", 1);
}

