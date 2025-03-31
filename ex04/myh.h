/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myh.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:15:08 by hladeiro          #+#    #+#             */
/*   Updated: 2025/03/30 13:06:00 by hladeiro         ###   ########.fr       */
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
void	subsitute(std::ifstream& input, std::ostream& output, std::string& s1, std::string& s2);
#endif
