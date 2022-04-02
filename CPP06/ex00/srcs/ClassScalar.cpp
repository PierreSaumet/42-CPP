/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.Cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassScalar.hpp"
#include <stdlib.h>


/*
**	ClassScalar's default constructor
*/
Scalarconvertor::Scalarconvertor( void ) : _arg("NULL") {

	return;
}

/*
**	ClassScalar constructor
*/
Scalarconvertor::Scalarconvertor( std::string const &argv ) : _arg(argv) {

	return ;
}

/*
**	ClassScalar's destructor
*/
Scalarconvertor::~Scalarconvertor( void ) {

	return ;
}

/*
**	ClassScalar's copy constructor
*/
Scalarconvertor::Scalarconvertor( const Scalarconvertor &copy ) {

	this->_arg = copy.get_argument();
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Scalarconvertor			&Scalarconvertor::operator=( const Scalarconvertor &element ) {

	if (this != &element)
	{
		this->_arg = element.get_argument();
	}
	return (*this);
}

/*
**	Getter
*/
std::string			Scalarconvertor::get_argument( void ) const {

	return (this->_arg);
}

/*
**	Other Functions
*/
void				Scalarconvertor::convert( void ) {

	int ret = 0;
	switch (ret = check_type()) {

		case 1:
			this->display_int();
			break;
		case 2:
			this->display_char();
			break;
		case 3:
			this->display_double();
			break;
		case 4:
			this->display_float();
			break;
		case 5:
			std::cout << "Error double sign + or -" << std::endl;
			break;
		case 6:
			std::cout << "Error not convertible" << std::endl;
			break;
		
	}
	return ;
}

int					Scalarconvertor::check_type( void ) {

	int				i = 0;
	int				point = 0;

	if (this->_arg.size() == 1 && !isdigit(this->_arg[0]))
		return (CHAR);
	else if (this->_arg == "-inf" || this->_arg == "+inf" || this->_arg == "nan")
		return (DOUBLE);
	else if (this->_arg == "-inff" || this->_arg == "+inff" || this->_arg == "nanf")
		return (FLOAT);
	if (!isdigit(this->_arg[0]) && this->_arg[0] != '+' && this->_arg[0] != '-')
		return (ERROR_NOT_CONVERTIBLE);
	if (this->_arg[0] == '+' || this->_arg[0] == '-')
	{
		if (this->_arg[1] == '+' || this->_arg[1] == '-')
			return (ERROR_DOUBLE_SIGN);
		i = 1;
	}
	while (this->_arg[i])
	{
		if (!isdigit(this->_arg[i]))
		{
			if (this->_arg[i] == '.' && !point)
				point = 1;
			else if (this->_arg[i] == 'f' && !this->_arg[i + 1])
				return (FLOAT);
			else
				return (ERROR_NOT_CONVERTIBLE);
		}
		i++;
	}
	if (point == 1)
		return (DOUBLE);
	return INT;
}

void			Scalarconvertor::display_char( void ) const {
	

	std::cout << "Char: " << static_cast<char> (this->_arg[0]) << std::endl;
    std::cout << "Int: " << static_cast<int> (this->_arg[0]) << std::endl;
    std::cout << "Float: " << static_cast<float> (this->_arg[0]) << ".0f" << std::endl;
    std::cout << "Double: " << static_cast<double> (this->_arg[0]) << ".0" << std::endl;
	return ;
}

void			Scalarconvertor::display_int( void ) const {

	double 		d = std::strtod(this->_arg.c_str(), NULL);

	if (d < 32 || d > 126)
        std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "Char: " << static_cast<char> (d) << std::endl;
	if (d < -2147483648 || d > 2147483647)
		std::cout << "Int: Overflow" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(d) << std::endl;
	
	if (d - (int)d != (double)0)
		std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
	else
		std::cout << "Float: " << static_cast<float>(d) << ".0f" << std::endl;
	if (d - (int)d != (double)0)
		std::cout << "Double: " << static_cast<double>(d) << std::endl;
	else
		std::cout << "Double: " << static_cast<double>(d) << ".0" << std::endl;
	return ;
}

void			Scalarconvertor::display_double( void ) const {

	if (this->_arg == "-inf" || this->_arg == "+inf" || this->_arg == "nan")
	{
		double 		d = std::strtod(this->_arg.c_str(), NULL);
		std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(d) << std::endl;
	}
	else
	{
		double 		d = std::strtod(this->_arg.c_str(), NULL);

		if (d < 32 || d > 126)
        	std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "Char: " << static_cast<char> (d) << std::endl;
		if (d < -2147483648 || d > 2147483647)
			std::cout << "Int: Overflow" << std::endl;
		else
			std::cout << "Int: " << static_cast<int>(d) << std::endl;

		if (d - (int)d != (double)0)
		{
			//std::cout << this->_arg.size() << std::endl;
			std::cout << "Float: " << std::setprecision(1) << std::fixed << static_cast<float>(d) << "f" << std::endl;
			//std::cout << "Float: " << std::fixed << static_cast<float>(d) << "f" << std::endl;
		}		
		else
			std::cout << "Float: " << static_cast<float>(d) << ".0f" << std::endl;
		

		if (d - (int)d != (double)0)
			std::cout << "Double: " << static_cast<double>(d) << std::endl;
		else
			std::cout << "Double: " << static_cast<double>(d) << ".0" << std::endl;
	}
	return ;
}

void			Scalarconvertor::display_float( void ) const {

	if (this->_arg == "-inff" || this->_arg == "+inff" || this->_arg == "nanf")
	{
		double 		d = std::strtod(this->_arg.c_str(), NULL);
		std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(d) << std::endl;
	}
	else
	{
		double 		d = std::strtod(this->_arg.c_str(), NULL);

		std::cout << "display_float" << std::endl;

		if (d < 32 || d > 126)
        	std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "Char: " << static_cast<char> (d) << std::endl;
		if (d < -2147483648 || d > 2147483647)
			std::cout << "Int: Overflow" << std::endl;
		else
			std::cout << "Int: " << static_cast<int>(d) << std::endl;
		
		if (d - (int)d != (float)0)
			std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
		else
			std::cout << "Float: " << static_cast<float>(d) << ".0f" << std::endl;

		if (d - (int)d != (double)0)
			std::cout << "Double: " << static_cast<double>(d) << std::endl;
		else
			std::cout << "Double: " << static_cast<double>(d) << ".0" << std::endl;
	}
	return ;
}