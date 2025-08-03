/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maambuhl <marcambuehl4@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:54:15 by maambuhl          #+#    #+#             */
/*   Updated: 2025/07/30 14:28:26 by maambuhl         ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() {
	_value = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor is called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = fixed;
}

Fixed Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed)
		this->_value = fixed._value;
	return *this;
}
