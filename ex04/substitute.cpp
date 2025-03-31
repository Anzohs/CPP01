/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substitute.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:15:55 by hladeiro          #+#    #+#             */
/*   Updated: 2025/03/30 13:04:49 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myh.h"

void	subsitute(std::ifstream& input, std::ostream& output, std::string& s1, std::string& s2)
{
	std::string buffer;
	std::string sub;
	std::string rest;
	std::string final;
	std::size_t found;


	while (std::getline(input, buffer))
	{
		found = buffer.find(s1);
		if (found != std::string::npos)
		{
			sub = buffer.substr(0, found);
			rest = buffer.substr(found + s1.length());
			output << (sub + s2 + rest);
		}
		else
				output << buffer;
	}		
}
