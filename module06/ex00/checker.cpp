/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:28:33 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/30 12:38:50 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		is_scientific(const std::string& str)
{
	int		i;

	i = -1;
	std::string	science[] = {"-inf", "+inf", "nan"};
	std::string	science_f[] = {"-inff", "+inff", "nanf"};
	while (++i < 3)
	{
		if (str == science[i])
			return (1);
		if (str == science_f[i])
			return (2);
	}
	return (0);
}

bool	checker(const std::string& str, int i)
{
	int		point;
	char	last;

	point = 0;
	last = str.c_str()[(str.length() - 1)];
	if (!isdigit(last) && last != 'f')
		return (false);
	while (i < static_cast<int>(str.length() - 1))
	{
		if (str.c_str()[i] == '.' && !point)
			point++;
		else if (!isdigit(str.c_str()[i]))
			return (false);
		i++;
	}
	return (true);
}
