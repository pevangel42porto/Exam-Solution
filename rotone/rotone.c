/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:34:57 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/21 10:43:13 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] !='\0')
	{
		if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
		{
			str[i] += 1;
			write (1, &str[i], 1);
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			str[i] -= 25;
			write (1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rotone(argv[1]);
	}
	write(1, "\n", 1);
}