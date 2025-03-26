/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:55:13 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/26 12:41:41 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int m_fixed;
		static const int m_bits = 8;
	public:
		Fixed( void ); // default constructor, not sure about parameter
		Fixed( const Fixed& orig); // copy constructor? 
		Fixed& operator = ( const Fixed& orig);	// copy assignment operator overload
		~Fixed( void ); // a destructor
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};