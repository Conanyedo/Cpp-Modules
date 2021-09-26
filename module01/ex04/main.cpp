/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:10:08 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/26 14:58:44 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int		err_msg(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

void	replace(std::string data, char **av)
{
	std::ofstream	outfile;
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::size_t		found;

	found = 0;
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	found = data.find(av[2], found, s1.length());
	while (found != std::string::npos)
	{
		data.erase(found, s1.length());
		data.insert(found, s2);
		found = data.find(av[2], found + s2.length(), s1.length());
	}
	outfile.open(filename.append(".replace"));
	outfile << data;
	outfile.close();
}

int		main(int ac, char **av)
{
	std::string		data;
	std::ifstream	infile;

	if (ac != 4)
		return (err_msg("Wrong arguments' number!!"));
	else if (!*av[2] || !*av[3])
		return (err_msg("Empty arguments!!"));
	infile.open(av[1]);
	if (!infile.is_open())
		return (err_msg("File doesn't exist or permission denied!!"));
	getline(infile, data, '\0');
	infile.close();
	replace(data, av);
	return (0);
}