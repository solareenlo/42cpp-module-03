/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:43:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 19:30:46 by tayamamo         ###   ########.fr       */
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
    NinjaTrap(void);
    explicit NinjaTrap(std::string const& name);
    NinjaTrap(NinjaTrap const& src);
    ~NinjaTrap(void);

    NinjaTrap&  operator = (NinjaTrap const& right);

    void    rangeAttack(std::string const& target);
    void    meleeAttack(std::string const& target);

    void    ninjaShoebox(ClapTrap const& target);
    void    ninjaShoebox(FragTrap const& target);
    void    ninjaShoebox(ScavTrap const& target);
    void    ninjaShoebox(NinjaTrap const& target);

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
