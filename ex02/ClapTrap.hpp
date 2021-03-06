/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:59:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 16:33:34 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_CLAPTRAP_HPP_
#define EX02_CLAPTRAP_HPP_

#include <iostream>
#include <string>

class   ClapTrap {
 public:
    ClapTrap(void);
    explicit ClapTrap(std::string const& name);
    ClapTrap(ClapTrap const& src);
    ~ClapTrap(void);

    ClapTrap&       operator = (ClapTrap const& right);

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

 protected:
    void            setHitPoints(unsigned int val);
    void            setMaxHitPoints(unsigned int val);
    void            setEnergyPoints(unsigned int val);
    void            setMaxEnergyPoints(unsigned int val);
    void            setLevel(unsigned int val);
    void            setName(std::string name);
    void            setMeleeAttackDamage(unsigned int val);
    void            setRangedAttackDamege(unsigned int val);
    void            setArmorDamageReduction(unsigned int val);
    void            setType(std::string type);
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
