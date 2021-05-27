/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:56:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 01:38:42 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_SCAVTRAP_HPP_
#define EX03_SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
 public:
    explicit ScavTrap(std::string const& name);
    ~ScavTrap(void);

    void            challengeNewcomer(std::string const& target);
};

#endif  // EX03_SCAVTRAP_HPP_
