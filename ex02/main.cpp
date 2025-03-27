/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:08:51 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/27 14:47:20 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	std::cout << "\nTests part 1 should end up in const max and const min." << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;


	std::cout << "\n\nTests part 2 should end up in max and min." << std::endl;
	Fixed c;
	Fixed d;
	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << ++d << std::endl;
	std::cout << d << std::endl;
	std::cout << d++ << std::endl;
	std::cout << d << std::endl;
	std::cout << Fixed::max( c, d ) << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;

	std::cout << "\n\nTests part 3 test the rest of the operands." << std::endl;
	std::cout << "a: " << a << "b: " << b << "c: " << c << "d: " << d << std::endl;
	if (a <= b)
		std::cout << "a is smaller or equal to b." << std::endl;
	else
		std::cout << "b is smaller or equal to a." << std::endl;
	if (a >= b)
		std::cout << "a is bigger or equal to b." << std::endl;
	else
		std::cout << "b is bigger or equal to a." << std::endl;
	if (b != d)
		std::cout << "b is not equal to d." << std::endl;
	if (c == d)
		std::cout << "c is equal to d." << std::endl;

	return 0;
}