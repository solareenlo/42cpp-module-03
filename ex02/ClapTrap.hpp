/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:59:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 19:57:48 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_CLAPTRAP_HPP_
#define EX02_CLAPTRAP_HPP_

#include <iostream>
#include <string>

class   ClapTrap {
 public:
    explicit ClapTrap(std::string const& name);
    ~ClapTrap(void);

    void            rangeAttack(std::string const& target);
    void            meleeAttack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

 protected:
    void            setHitPoints(unsigned int val);
    void            setMaxHitPoints(unsigned int val);
    void            setEnergyPoints(unsigned int val);
    void            setMaxEnergyPoints(unsigned int val);
    void            setLevel(unsigned int val);
    void            setMeleeAttackDamage(unsigned int val);
    void            setRangedAttackDamege(unsigned int val);
    void            setArmorDamageReduction(unsigned int val);
    void            setType(std::string type);
    unsigned int    getHitPoints(void);
    unsigned int    getMaxHitPoints(void);
    unsigned int    getEnergyPoints(void);
    unsigned int    getMaxEnergyPoints(void);
    unsigned int    getLevel(void);
    unsigned int    getMeleeAttackDamage(void);
    unsigned int    getRangedAttackDamege(void);
    unsigned int    getArmorDamageReduction(void);
    std::ostream&   cout(void);
    std::ostream&   cout(std::string const& str);

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
};

#endif  // EX02_CLAPTRAP_HPP_
