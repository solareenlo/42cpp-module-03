/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:56:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 19:35:37 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX04_SCAVTRAP_HPP_
#define EX04_SCAVTRAP_HPP_

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

    void            rangeAttack(std::string const& target);
    void            meleeAttack(std::string const& target);
    void            challengeNewcomer(std::string const& target);

    unsigned int    getInitHitPoints(void) const;
    unsigned int    getInitMaxHitPoints(void) const;
    unsigned int    getInitEnergyPoints(void) const;
    unsigned int    getInitMaxEnergyPoints(void) const;
    unsigned int    getInitLevel(void) const;
    std::string     getInitName(void) const;
    unsigned int    getInitMeleeAttackDamage(void) const;
    unsigned int    getInitRangedAttackDamage(void) const;
    unsigned int    getInitArmorDamageReduction(void) const;
    std::string     getInitType(void) const;

 private:
    static const unsigned int   scav_init_hit_points_ = 100;
    static const unsigned int   scav_init_max_hit_points_ = 100;
    static const unsigned int   scav_init_energy_points_ = 50;
    static const unsigned int   scav_init_max_energy_points_ = 50;
    static const unsigned int   scav_init_level_ = 1;
    static const unsigned int   scav_init_melee_attack_damage_ = 20;
    static const unsigned int   scav_init_ranged_attack_damage_ = 15;
    static const unsigned int   scav_init_armor_damage_reduction_ = 3;
};

#endif  // EX04_SCAVTRAP_HPP_
