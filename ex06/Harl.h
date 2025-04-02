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

typedef char *string;

class Carl
{
		private:
				void	debug(void);
				void	info(void);
				void	warning(void);
				void	error(void);
		public:
				void	complain(std::string level);
}
