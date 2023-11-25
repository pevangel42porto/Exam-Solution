/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:45:49 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/25 17:19:09 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *str)
{
	int	i = 0;
	int	flag = 0;
	
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			flag = 1;
		if (!(str[i] == ' ' || str[i] == '\t'))
		{
			if (flag)
			{
				write (1, " ",1);
				flag = 0;
			}
			write (1, &str[i],1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_write(argv[1]);
	write (1, "\n", 1);
}
