/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:29:50 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/30 12:38:35 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>

void	char_converter(const std::string& str);
void	int_converter(const std::string& str);
void	float_converter(const std::string& str);
void	double_converter(const std::string& str);

//Checkers

int		is_scientific(const std::string& str);
bool	checker(const std::string& str, int i);


#endif