/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:47:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/21 02:43:17 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_SCAVTRAP_HPP_
#define EX01_SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include <cstdlib>

class   ScavTrap {
 public:
    ScavTrap();
    ~ScavTrap();
    explicit ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const& src);
    ScavTrap&       operator=(ScavTrap const& rhs);

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

    unsigned int    getHitPoints() const;
    unsigned int    getMaxHitPoints() const;
    unsigned int    getEnergyPoints() const;
    unsigned int    getMaxEnergyPoints() const;
    unsigned int    getLevel() const;
    std::string     getName() const;
    unsigned int    getMeleeAttackDamage() const;
    unsigned int    getRangedAttackDamege() const;
    unsigned int    getArmorDamageReduction() const;
    std::string     getType() const;

    void            setHitPoints(unsigned int amount);
    void            setEnergyPoints(unsigned int amount);

    std::ostream&   cout();
    std::ostream&   cout(std::string const& str);
};

#endif  // EX01_SCAVTRAP_HPP_
