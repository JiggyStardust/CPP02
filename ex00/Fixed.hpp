/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:55:13 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/26 14:23:12 by sniemela         ###   ########.fr       */
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
		Fixed( void );
		Fixed( const Fixed& orig);
		Fixed& operator = ( const Fixed& orig);
		~Fixed( void );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};