/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 04:19:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 18:56:29 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap() {
    this->setHitPoints(this->FragTrap::getInitHitPoints());
    this->setMaxHitPoints(this->FragTrap::getInitMaxHitPoints());
    this->setEnergyPoints(this->NinjaTrap::getInitEnergyPoints());
    this->setMaxEnergyPoints(this->NinjaTrap::getInitMaxEnergyPoints());
    this->setLevel(1);
    this->setName("Super");
    this->setMeleeAttackDamage(this->NinjaTrap::getInitMeleeAttackDamage());
    this->setRangedAttackDamege(this->FragTrap::getInitRangedAttackDamage());
    this->setArmorDamageReduction(
        this->FragTrap::getInitArmorDamageReduction());
    this->setType("SU4R-TP");
    cout(": Hi in Sub Class!");
}

SuperTrap::SuperTrap(std::string const& name) :
    ClapTrap(name), FragTrap(name), NinjaTrap(name) {
    this->setHitPoints(this->FragTrap::getInitHitPoints());
    this->setMaxHitPoints(this->FragTrap::getInitMaxHitPoints());
    this->setEnergyPoints(this->NinjaTrap::getInitEnergyPoints());
    this->setMaxEnergyPoints(this->NinjaTrap::getInitMaxEnergyPoints());
    this->setLevel(1);
    this->setMeleeAttackDamage(this->NinjaTrap::getInitMeleeAttackDamage());
    this->setRangedAttackDamege(this->FragTrap::getInitRangedAttackDamage());
    this->setArmorDamageReduction(
        this->FragTrap::getInitArmorDamageReduction());
    this->setType("SU4R-TP");
    cout(": Hi in Sub Class!");
}

SuperTrap::SuperTrap(SuperTrap const& src) {
    *this = src;
}

SuperTrap::~SuperTrap(void) {
    cout(": goodbye in Sub Class!");
}

SuperTrap&   SuperTrap::operator = (SuperTrap const& right) {
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

void    SuperTrap::rangeAttack(std::string const& targe) {
    FragTrap::rangeAttack(targe);
}

void    SuperTrap::meleeAttack(std::string const& targe) {
    NinjaTrap::meleeAttack(targe);
}
