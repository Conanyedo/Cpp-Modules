/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:33:51 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/30 16:39:33 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "converter.hpp"

void	double_converter(const std::string& str)
{
	double	d;
	double	frac;
	int		i;

	i = 0;
	if (str.c_str()[0] == '+' || str.c_str()[0] == '-')
		i++;
	if (!isdigit(str.c_str()[i]))
	{
		if (is_scientific(str) == 1)
			std::cout << "double: " << str << std::endl;
		else if (is_scientific(str) == 2)
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		else
			std::cout << "double: Invalid argument!!" << std::endl;
		return ;
	}
	if (!checker(str, i))
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
	{	
		d = static_cast<double>(stod(str));
		frac = d - stoi(str);
		std::cout << "double: " << d << (!(frac) ? ".0\n" : "\n");
	}
}

void	float_converter(const std::string& str)
{
	float	f;
	int		i;
	float	frac;

	i = 0;
	if (str.c_str()[0] == '+' || str.c_str()[0] == '-')
		i++;
	if (!isdigit(str.c_str()[i]))
	{
		if (is_scientific(str))
			std::cout << "float: " << str << ((is_scientific(str) == 2) ? "\n" : "f\n");
		else
			std::cout << "float: Invalid argument!!" << std::endl;
		return ;
	}
	if (!checker(str, i))
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
	{	
		f = static_cast<float>(stof(str));
		frac = f - stoi(str);
		std::cout << "float: " << f << (!(frac) ? ".0f\n" : "f\n");
	}
}

void	int_converter(const std::string& str)
{
	int		i;

	i = 0;
	if (str.c_str()[0] == '+' || str.c_str()[0] == '-')
		i++;
	if (!isdigit(str.c_str()[i]))
	{
		if (is_scientific(str))
			std::cout << "int: impossible" << std::endl;
		else
			std::cerr << "int: Invalid argument!!" << std::endl;
		return ;
	}
	if (!checker(str, i))
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(stoi(str)) << std::endl;
}

void	char_converter(const std::string& str)
{
	int		i;

	i = 0;
	if (str.c_str()[0] == '+' || str.c_str()[0] == '-')
		i++;
	if (!isdigit(str.c_str()[i]))
	{
		if (str.length() == 1)
			std::cout << "char: '" << str.c_str()[0] << "'" << std::endl;
		else if (is_scientific(str))
			std::cout << "char: impossible" << std::endl;
		else
			std::cerr << "int: Invalid argument!!" << std::endl;
		return ;
	}
	if (!checker(str, i))
		std::cerr << "char: Invalid argument!!" << std::endl;
	else
	{
		if (stoi(str) >= 32 && stoi(str) <= 127)
			std::cout << "char: '" << static_cast<char>(stoi(str)) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}
