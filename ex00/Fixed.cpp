/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:54:38 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/26 13:50:58 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : m_fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& orig)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = orig;
}

Fixed& Fixed::operator = ( const Fixed& orig) 
{
	if (this != &orig)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		m_fixed = orig.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed( void ) 
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_fixed);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	m_fixed = raw;
}