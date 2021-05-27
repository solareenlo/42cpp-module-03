/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:43:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 06:28:35 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX04_NINJATRAP_HPP_
#define EX04_NINJATRAP_HPP_

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   NinjaTrap : public virtual ClapTrap {
 public:
    explicit NinjaTrap(std::string const& name);
    ~NinjaTrap(void);

    void    rangeAttack(std::string const& target);
    void    meleeAttack(std::string const& target);

    void    ninjaShoebox(ClapTrap const& target);
    void    ninjaShoebox(FragTrap const& target);
    void    ninjaShoebox(ScavTrap const& target);
    void    ninjaShoebox(NinjaTrap const& target);

    unsigned int    getInitHitPoints(void);
    unsigned int    getInitMaxHitPoints(void);
    unsigned int    getInitEnergyPoints(void);
    unsigned int    getInitMaxEnergyPoints(void);
    unsigned int    getInitLevel(void);
    unsigned int    getInitMeleeAttackDamage(void);
    unsigned int    getInitRangedAttackDamage(void);
    unsigned int    getInitArmorDamageReduction(void);

 private:
    static const unsigned int   ninja_init_hit_points_ = 60;
    static const unsigned int   ninja_init_max_hit_points_ = 60;
    static const unsigned int   ninja_init_energy_points_ = 120;
    static const unsigned int   ninja_init_max_energy_points_ = 120;
    static const unsigned int   ninja_init_level_ = 1;
    static const unsigned int   ninja_init_melee_attack_damage_ = 60;
    static const unsigned int   ninja_init_ranged_attack_damage_ = 5;
    static const unsigned int   ninja_init_armor_damage_reduction_ = 0;
};

#endif  // EX04_NINJATRAP_HPP_
