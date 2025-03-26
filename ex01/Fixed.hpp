/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:55:13 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/26 16:52:13 by sniemela         ###   ########.fr       */
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
};

std::ostream & operator<<(std::ostream &out, const Fixed &number);