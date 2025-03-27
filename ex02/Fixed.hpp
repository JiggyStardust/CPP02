/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:08:38 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/27 14:49:28 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int m_fixed;
		static const int m_bits = 8;
	public:
		Fixed( void ); // default constructor, not sure about parameter
		Fixed( const int ); // default constructor with const int param
		Fixed( const float ); // default constructor with const float param
		Fixed( const Fixed& orig); // copy constructor
		Fixed& operator = ( const Fixed& orig);	// copy assignment operator overload
		~Fixed( void ); // a destructor
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const; // member function that converts fixed point value to float
		int toInt(void ) const; // member function that converts fixed point value to int
		
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		Fixed operator +(const Fixed &other) const;
		Fixed operator -(const Fixed &other) const;
		Fixed operator *(const Fixed &other) const;
		Fixed operator /(const Fixed &other) const;

		Fixed& operator ++();
		Fixed& operator --();
		Fixed operator ++(int);
		Fixed operator --(int);

		static const Fixed& max(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& min(Fixed &a, Fixed &b);
};

std::ostream & operator<<(std::ostream &out, const Fixed &number);