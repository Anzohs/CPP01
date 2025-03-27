/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 22:47:32 by hladeiro          #+#    #+#             */
/*   Updated: 2025/03/25 22:55:23 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	Zombie *z = newZombie("Brains");
	randomChump("Zombie");
	Zombie s = Zombie("Tereza");
	s.announce();
	z->announce();
	delete z;
}
