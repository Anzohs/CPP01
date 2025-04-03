/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:43:41 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/03 20:36:03 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(int ac, string av[])
{
	(void)ac;
	(void)av;
	Harl tester;

  tester.complain("DEBUG");
  tester.complain("oups");
  tester.complain("INFO");
  tester.complain("oups");
  tester.complain("WARNING");
  tester.complain("oups");
  tester.complain("ERROR");
  tester.complain("oups");
	return (1);
}
