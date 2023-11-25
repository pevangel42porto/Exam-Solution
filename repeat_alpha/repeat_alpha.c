/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:16:11 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/17 11:43:00 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_repeat_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		return (str[i] - 'a' + 1);
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (str[i] - 'A' + 1);
	return (1);
}

int	main(int argc, char **argv)
{
	int	repeat;
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat = ft_repeat_alpha(&argv[1][i]);
			while (repeat > 0)
			{
				write (1, &argv[1][i], 1);
				repeat--;
			}
			i++;
		}
		write (1, "\n", 1);
	}
	else 
		write (1, "\n", 1);
}
