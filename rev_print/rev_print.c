/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:24:34 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/20 15:29:45 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	write (1, "\n", 1);
}
