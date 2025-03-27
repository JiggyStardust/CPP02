/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saaraniemela <saaraniemela@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:08:38 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/27 10:46:39 by saaraniemel      ###   ########.fr       */
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
		Fixed( const Fixed& orig); // copy constructor? 
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

		
		// Add these four public overloaded member functions to your class:
		// • A static member function min that takes as parameters two references on fixed-point
		// numbers, and returns a reference to the smallest one.
		// • A static member function min that takes as parameters two references to constant
		// fixed-point numbers, and returns a reference to the smallest one.
		// • A static member function max that takes as parameters two references on fixed-point
		// numbers, and returns a reference to the greatest one.
		// • A static member function max that takes as parameters two references to constant
		// fixed-point numbers, and returns a reference to the greatest one.
};

std::ostream & operator<<(std::ostream &out, const Fixed &number);