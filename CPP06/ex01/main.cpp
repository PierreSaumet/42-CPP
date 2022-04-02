#include <iostream>

/*
**	clang++ -Wall -Wextra -Werror -o main main.cpp && ./main
*/
struct Data
{
	int		i;
	char	c;
	std::string	str;
};


uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int		main( void ) 
{
	Data	*ptr = new Data;

	ptr->i = 42;
	ptr->c = 'p';
	ptr->str = "Salut Patrick";

	std::cout << "La structure ptr contient : un int = '" << ptr->i << "' et un char = '" << ptr->c << "' et une string = '" << ptr->str << "'" << std::endl;
	std::cout << std::endl;

	Data	*ptr_2 = deserialize(serialize(ptr));
	std::cout << "La structure ptr_2 contient : un int = '" << ptr_2->i << "' et un char = '" << ptr_2->c << "' et une string = '" << ptr_2->str << "'" << std::endl;
	std::cout << std::endl;

	uintptr_t uint_test = serialize(ptr);
	std::cout << "Uint_test est egal a = " << uint_test << std::endl;

	Data	*ptr_3;
	ptr_3 = deserialize(uint_test);
	std::cout << "La structure ptr_3 contient : un int = '" << ptr_3->i << "' et un char = '" << ptr_3->c << "' et une string = '" << ptr_3->str << "'" << std::endl;
	std::cout << std::endl;

	delete ptr;
	return (0);
}