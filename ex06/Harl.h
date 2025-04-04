/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:44:02 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/02 21:33:36 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifdef __cplusplus
#include <iostream>
#endif

#define DEBUG "I love having extra bacon for my XXL-double-cheese-triple-pickle-special-burger. I really do!"
#define INFO "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger !"
#define WARNING "I think I deserve extra bacon for free.\n I’ve been coming for years, whereas you started working here just last month."

#define ERROR "This is unnaceptable ! I want to speak to the manager now."

typedef char *string;


class Harl{

	public:
		void complain(std::string level);
		Harl(void);
		~Harl(void);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

typedef void (Harl::*func) (void);
