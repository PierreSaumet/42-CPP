/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/replace.hpp"

int			ft_error_exit(int err)
{
	std::string		error_msg_list[] = {
		"invalide number of arguments. Need 3",
		"the given arguments are not correct",
		"file cannont be open",
		"String is empty",
		"cannot open replace file"
	};
	std::cout << "Error: " << error_msg_list[err] << std::endl;
	return (err);
}

bool		ft_check_arg(char **argv)
{
	std::fstream fs;

	fs.open(argv[1]);
	if (fs.is_open() == 0)
	{
		fs.close();
		return (ft_error_exit(2));
	}
	fs.close();
	if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
		return (ft_error_exit(3));
	return (false);
}

int			ft_replace(char **argv)
{
	std::string 	filename = argv[1];
	std::string		search = argv[2];
	std::string		replace = argv[3];
	std::ifstream	fs(filename.c_str());
	std::stringstream	buff;
	std::string			line;
	size_t					pos;

	if (fs.is_open() == 0)
	{
		fs.close();
		return (ft_error_exit(2));
	}
	else
	{
		buff << fs.rdbuf();
		line = buff.str();
		while ((pos = line.find(search)) != std::string::npos)
			line.replace(pos, search.length(), replace);
	}

	filename.append(".replace");
	std::ofstream ofs(filename.c_str(), std::ofstream::out);
	if (ofs.is_open() == 0)
	{
		ofs.close();
		return (ft_error_exit(3));
	}
	ofs << line;
	ofs.close();
	fs.close();
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc != 4)
		return (ft_error_exit(0));
	else
	{
		if (ft_check_arg(argv) == 0)
			ft_replace(argv);
	}
	return (0);
}