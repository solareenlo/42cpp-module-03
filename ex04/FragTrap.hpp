/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:47:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 18:30:44 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX04_FRAGTRAP_HPP_
#define EX04_FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

class   FragTrap : public virtual ClapTrap {
 public:
    FragTrap(void);
    explicit FragTrap(std::string const& name);
    FragTrap(FragTrap const& src);
    ~FragTrap(void);

    FragTrap&       operator = (FragTrap const& right);

    void            rangeAttack(std::string const& target);
    void            meleeAttack(std::string const& target);
    void            vaulthunter_dot_exe(std::string const& target);

    unsigned int    getInitHitPoints(void);
    unsigned int    getInitMaxHitPoints(void);
    unsigned int    getInitEnergyPoints(void);
    unsigned int    getInitMaxEnergyPoints(void);
    unsigned int    getInitLevel(void);
    unsigned int    getInitMeleeAttackDamage(void);
    unsigned int    getInitRangedAttackDamage(void);
    unsigned int    getInitArmorDamageReduction(void);

 private:
    static const unsigned int   frag_init_hit_points_ = 100;
    static const unsigned int   frag_init_max_hit_points_ = 100;
    static const unsigned int   frag_init_energy_points_ = 100;
    static const unsigned int   frag_init_max_energy_points_ = 100;
    static const unsigned int   frag_init_level_ = 1;
    static const unsigned int   frag_init_melee_attack_damage_ = 30;
    static const unsigned int   frag_init_ranged_attack_damage_ = 20;
    static const unsigned int   frag_init_armor_damage_reduction_ = 20;
};

#endif  // EX04_FRAGTRAP_HPP_
