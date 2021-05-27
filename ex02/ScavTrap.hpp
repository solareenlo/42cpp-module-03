/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:56:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 20:08:31 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_SCAVTRAP_HPP_
#define EX02_SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
 public:
    explicit ScavTrap(std::string const& name);
    ~ScavTrap(void);

    void            challengeNewcomer(std::string const& target);
};

#endif  // EX02_SCAVTRAP_HPP_
