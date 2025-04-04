/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:45:16 by hladeiro          #+#    #+#             */
/*   Updated: 2025/03/31 20:45:29 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(void){};

Harl::~Harl(){};

void Harl::debug(void){std::cout << DEBUG << std::endl;}
void Harl::info(void){std::cout << INFO << std::endl;}
void Harl::warning(void){std::cout << WARNING << std::endl;}
void Harl::error(void){std::cout << ERROR << std::endl;}

void Harl::complain(std::string level)
{
	bool p = false;
	std::string l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func f[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++){
		if (level == l[i])
		{
			(this->*(f[i]))();
			p = true;
		}
	}
	if (!p)
	{
		std::cout << "Don't you even think to call me Karen" << std::endl;
		std::cout << "I WILL CALL THE POLICE" << std::endl;
	}
}
