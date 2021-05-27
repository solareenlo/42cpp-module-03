/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:56:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 17:15:12 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_SCAVTRAP_HPP_
#define EX01_SCAVTRAP_HPP_

#include <iostream>
#include <string>

class   ScavTrap {
 public:
    explicit ScavTrap(std::string const& name);
    ~ScavTrap(void);

    void            rangeAttack(std::string const& target);
    void            meleeAttack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            challengeNewcomer(std::string const& target);

 private:
    unsigned int    hit_points_;
    unsigned int    max_hit_points_;
    unsigned int    energy_points_;
    unsigned int    max_energy_points_;
    unsigned int    level_;
    std::string     name_;
    unsigned int    melee_attack_damage_;
    unsigned int    ranged_attack_damege_;
    unsigned int    armor_damage_reduction_;
    std::ostream&   cout(void);
    std::ostream&   cout(std::string const& str);
};

#endif  // EX01_SCAVTRAP_HPP_
