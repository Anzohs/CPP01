/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:58:51 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/03 20:37:09 by hladeiro         ###   ########.fr       */
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
	std::string l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func f[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++){
		if (level == l[i])
		{
			(this->*(f[i]))();
		}
	}
}
