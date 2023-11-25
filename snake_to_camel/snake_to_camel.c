/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:30:25 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/25 16:44:22 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);

		}
		else if (str[i] == '_')
		{
			i++;
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_write(argv[1]);
	write(1, "\n", 1);
}
