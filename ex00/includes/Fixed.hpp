/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maambuhl <marcambuehl4@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:31:58 by maambuhl          #+#    #+#             */
/*   Updated: 2025/07/30 14:28:34 by maambuhl         ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Fixed {
	private:
		int					_value;
		static const int	_nb_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed 	operator=(const Fixed &fixed);
		int		getRawBits(void);
		void	setRawBits(int const raw);
};

#endif
