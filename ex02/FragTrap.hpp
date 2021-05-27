/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:47:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 19:45:30 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_FRAGTRAP_HPP_
#define EX02_FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap {
 public:
    explicit FragTrap(std::string const& name);
    ~FragTrap(void);

    void            vaulthunter_dot_exe(std::string const& target);
};

#endif  // EX02_FRAGTRAP_HPP_
