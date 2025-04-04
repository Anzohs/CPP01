/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:43:41 by hladeiro          #+#    #+#             */
/*   Updated: 2025/03/31 21:53:06 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(int ac, string av[])
{
	(void)ac;
	(void)av;

	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int j;
	if (ac > 2 || ac < 2)
	{
		std::cerr << "This program takes an argument\n";
		return (1);
	}

	Harl tester = Harl();
	j = 0;
	for (int i=0; i < 4; i++){
		if (level[i] == av[1])
		{
			j = i;
			break;
		}
		if (i == 3 && j== 0)
			j = 4;
	}
	for (;j < 4; j++)
	{
		std::cout << "[ " << level[j] << " ]" << std::endl;
		tester.complain(level[j]);
		std::cout << std::endl;
	}
	return (1);
}
