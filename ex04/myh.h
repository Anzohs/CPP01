/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myh.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:15:08 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/03 18:30:02 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _myh
# define _myh


# ifdef __cplusplus
#  include <fstream>
#  include <iostream>
# endif

typedef char * string;
void   subsitute(std::ifstream &input, std::ofstream &output, std::string &search, std::string &replace);
#endif
