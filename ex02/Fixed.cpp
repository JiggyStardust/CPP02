/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saaraniemela <saaraniemela@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:08:45 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/27 11:00:01 by saaraniemel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed( void ) : m_fixed(0)
{
//	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed( const int value)
{
//	std::cout << "Int constructor called" << std::endl;
	m_fixed = value << m_bits;
}

Fixed::Fixed( const float value) 
{
//	std::cout << "Float constructor called" << std::endl;
	m_fixed = roundf(value * (1 << m_bits));
}

Fixed::Fixed( const Fixed& orig)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = orig;
}

Fixed& Fixed::operator = ( const Fixed& orig) 
{
	if (this != &orig)
	{
	//	std::cout << "Copy assignment operator called" << std::endl;
		m_fixed = orig.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed( void ) 
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (m_fixed);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	m_fixed = raw;
}

float Fixed::toFloat( void ) const
{
	float	fixedAsFloat;
	fixedAsFloat = static_cast<float>(m_fixed) / (1 << m_bits);
	return (fixedAsFloat);
}

int Fixed::toInt(void ) const
{
	int	fixedAsInt;
	fixedAsInt = m_fixed >> m_bits;
	return (fixedAsInt);
}

std::ostream & operator<<(std::ostream &out, const Fixed &number)
{
	out << number.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->m_fixed > other.m_fixed)
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->m_fixed < other.m_fixed)
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->m_fixed <= other.m_fixed)
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->m_fixed >= other.m_fixed)
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->m_fixed == other.m_fixed)
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->m_fixed != other.m_fixed)
		return (true);
	else
		return (false);
}

Fixed Fixed::operator +(const Fixed &other) const
{
	return Fixed(this->toFloat()+ other.toFloat());
}

Fixed Fixed::operator -(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());	
}

Fixed Fixed::operator *(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator /(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator ++()
{
	++m_fixed;
	return *this;
}

Fixed& Fixed::operator --()
{
	--m_fixed;
	return *this;
}

Fixed Fixed::operator ++(int)
{
	Fixed temp = *this;
	m_fixed++;
	return temp;
}

Fixed Fixed::operator --(int)
{
	Fixed temp = *this;
	m_fixed--;
	return temp;
}