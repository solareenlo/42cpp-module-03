/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:55:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 17:52:10 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap::ClapTrap() {
    this->setHitPoints(60);
    this->setMaxHitPoints(60);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setName("Ninja");
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamege(5);
    this->setArmorDamageReduction(0);
    this->setType("NI4N-TP");
    cout(": Hi in Sub Class!");
}

NinjaTrap::NinjaTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
    this->setHitPoints(60);
    this->setMaxHitPoints(60);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamege(5);
    this->setArmorDamageReduction(0);
    this->setType("NI4N-TP");
    cout(": Hi in Sub Class!");
}

NinjaTrap::NinjaTrap(NinjaTrap const& src) {
    *this = src;
}

NinjaTrap::~NinjaTrap(void) {
    cout(": goodbye in Sub Class!");
}

NinjaTrap&   NinjaTrap::operator = (NinjaTrap const& right) {
    if (this != &right) {
        this->setHitPoints(right.getHitPoints());
        this->setMaxHitPoints(right.getMaxHitPoints());
        this->setEnergyPoints(right.getEnergyPoints());
        this->setMaxEnergyPoints(right.getMaxEnergyPoints());
        this->setLevel(right.getLevel());
        this->setName(right.getName());
        this->setMeleeAttackDamage(right.getMeleeAttackDamage());
        this->setRangedAttackDamege(right.getRangedAttackDamege());
        this->setArmorDamageReduction(right.getArmorDamageReduction());
        this->setType(right.getType());
    }
    return (*this);
}

void    NinjaTrap::ninjaShoebox(ClapTrap const& target) {
    cout() << "gave " << target.getName() << " a callot." << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap const& target) {
    cout() << "gave " << target.getName() << " a cabbage." << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap const& target) {
    cout() << "gave " << target.getName() << " a green pepper." << std::endl;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap const& target) {
    cout() << "gave " << target.getName() << " a shuriken." << std::endl;
}
