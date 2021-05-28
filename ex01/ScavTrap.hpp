/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:56:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 15:55:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_SCAVTRAP_HPP_
#define EX01_SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class   ScavTrap {
 public:
    ScavTrap(void);
    explicit ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap(void);

    ScavTrap&       operator = (ScavTrap const& right);

    unsigned int    getHitPoints(void) const;
    unsigned int    getMaxHitPoints(void) const;
    unsigned int    getEnergyPoints(void) const;
    unsigned int    getMaxEnergyPoints(void) const;
    unsigned int    getLevel(void) const;
    std::string     getName(void) const;
    unsigned int    getMeleeAttackDamage(void) const;
    unsigned int    getRangedAttackDamege(void) const;
    unsigned int    getArmorDamageReduction(void) const;
    std::string     getType(void) const;

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
    std::string     type_;
    std::ostream&   cout(void);
    std::ostream&   cout(std::string const& str);
};

#endif  // EX01_SCAVTRAP_HPP_
