/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substitute.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:15:55 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/03 18:29:21 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myh.h"

void   subsitute(std::ifstream &input, std::ofstream &output, std::string &search, std::string &replace)
{
    std::string buffer;
    std::size_t found;
    std::size_t len;

    len = search.length();
    while (getline(input, buffer))
    {
        found = buffer.find(search);
        if (found == std::string::npos)
            output << buffer;
        else
        {
            while (found != std::string::npos)
            {
                if (found == 0)
                {
                    output << replace;
                    buffer = buffer.substr(found + len, std::string::npos);
                }
                else
                {
                    output << buffer.substr(0, found);
                    buffer = buffer.substr(found, std::string::npos);
                }
                found = buffer.find(search);
            }
            output << buffer;
        }
        output << std::endl;
    }
}
