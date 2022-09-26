/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:42:21 by mriant            #+#    #+#             */
/*   Updated: 2022/09/26 18:24:00 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	closeFiles(std::ifstream *ifs, std::ofstream *ofs)
{
	if (ifs)
	{
		(*ifs).close();
		delete ifs;
	}
	if (ofs)
	{
		(*ofs).close();
		delete ofs;
	}
}

std::ifstream	*openInfile(char *name)
{
	std::ifstream	*ifs = new std::ifstream(name);
	
	if (!(*ifs).good())
	{
		std::cerr << "Error: " << name << " can't be opened." << std::endl;
		closeFiles(ifs, 0);
		return (0);
	}
	if ((*ifs).peek() == EOF)
		std::cerr << "Warning: " << name << " is a directory or an empty file"
			<< std::endl;
	return (ifs);
}

std::ofstream	*openOutfile(char *name)
{
	std::string		outfile_name(name);
	std::ofstream	*ofs;
	
	outfile_name += ".replace";
	ofs = new std::ofstream(outfile_name.c_str());
	if (!(*ofs).good())
	{
		std::cerr << "Error: " << outfile_name << " not created." << std::endl;
		closeFiles(0, ofs);
		return (0);
	}
	return (ofs);
}

void	replaceString(std::ifstream *ifs, std::ofstream *ofs, char *old_s,
	char *new_s)
{
	std::string	str;
	std::string	old_str(old_s);
	std::string	new_str(new_s);
	char		c = (*ifs).get();
	size_t		pos;

	while ((*ifs).good()) 
	{
		str.push_back(c);
		c = (*ifs).get();
	}
	pos = str.find(old_str);
	while (old_str.size() && pos != std::string::npos)
	{
		str.erase(pos, old_str.size());
		str.insert(pos, new_str);
		pos = str.find(old_str, pos + new_str.size());
	}
	*ofs << str;
}

int	main(int ac, char **av)
{
	std::ifstream	*ifs;
	std::ofstream	*ofs;

	if (ac != 4)
	{
		std::cout << "Usage: ./sed_is_for_losers <filename> <string1> <string2>"
			<< std::endl;
		return (1);
	}
	ifs = openInfile(av[1]);
	if (!ifs)
		return (1);
	ofs = openOutfile(av[1]);
	if (!ofs)
	{
		delete ifs;
		return (1);
	}
	replaceString(ifs, ofs, av[2], av[3]);
	closeFiles(ifs, ofs);
	return (0);
}