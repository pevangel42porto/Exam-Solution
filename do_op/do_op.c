/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:37:32 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/17 12:58:29 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_print(int nbr1, char oper, int nbr2)
{	
	int	result;
	
	if (oper == '+')
		result = nbr1 + nbr2; 
	if (oper == '-')
		result = nbr1 - nbr2; 
	if (oper == '*')
		result = nbr1 * nbr2; 
	if (oper == '/')
		result = nbr1 / nbr2; 
	if (oper == '%')
		result = nbr1 % nbr2; 
	printf("%d\n", result);
	
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_rev_print(atoi(argv[1]), argv[2][0],atoi(argv[3]));
	}
	else
		write (1, "\n", 1);
}
