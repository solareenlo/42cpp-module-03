/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:47:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/20 20:34:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_FRAGTRAP_HPP_
#define EX00_FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include <cstdlib>

class   FragTrap {
 public:
    FragTrap();
    ~FragTrap();
    explicit FragTrap(std::string const& name);
    FragTrap(FragTrap const& src);
    FragTrap&       operator=(FragTrap const& rhs);

    void            rangeAttack(std::string const& target);
    void            meleeAttack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            vaulthunter_dot_exe(std::string const& target);

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

    std::ostream&   cout();
    std::ostream&   cout(std::string const& str);
};

#endif  // EX00_FRAGTRAP_HPP_
