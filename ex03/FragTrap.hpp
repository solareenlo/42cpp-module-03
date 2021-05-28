/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:47:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 17:41:05 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_FRAGTRAP_HPP_
#define EX03_FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap {
 public:
    FragTrap(void);
    explicit FragTrap(std::string const& name);
    FragTrap(FragTrap const& src);
    ~FragTrap(void);

    FragTrap&   operator = (FragTrap const& right);

    void        rangeAttack(std::string const& target);
    void        meleeAttack(std::string const& target);
    void        vaulthunter_dot_exe(std::string const& target);
};

#endif  // EX03_FRAGTRAP_HPP_
