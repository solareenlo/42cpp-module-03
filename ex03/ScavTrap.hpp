/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:56:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 17:42:03 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_SCAVTRAP_HPP_
#define EX03_SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
 public:
    ScavTrap(void);
    explicit ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap(void);

    ScavTrap&   operator = (ScavTrap const& right);

    void        rangeAttack(std::string const& target);
    void        meleeAttack(std::string const& target);
    void        challengeNewcomer(std::string const& target);
};

#endif  // EX03_SCAVTRAP_HPP_
