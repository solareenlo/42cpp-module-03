/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 16:55:49 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void) {
    FragTrap    fragTrap("F");
    ScavTrap    scavTrap("S");
    ClapTrap    clapTrap("C");

    fragTrap.rangeAttack("X");
    scavTrap.rangeAttack("X");
    clapTrap.rangeAttack("X");
    fragTrap.meleeAttack("X");
    scavTrap.meleeAttack("X");
    fragTrap.takeDamage(10);
    scavTrap.takeDamage(10);
    fragTrap.takeDamage(10);
    scavTrap.takeDamage(10);
    fragTrap.takeDamage(100);
    fragTrap.meleeAttack("B");
    fragTrap.beRepaired(10);
    fragTrap.beRepaired(100);
    scavTrap.beRepaired(100);
    fragTrap.beRepaired(100);
    fragTrap.vaulthunter_dot_exe("B");
    fragTrap.vaulthunter_dot_exe("C");
    fragTrap.vaulthunter_dot_exe("D");
    fragTrap.vaulthunter_dot_exe("E");
    fragTrap.vaulthunter_dot_exe("F");
    fragTrap.vaulthunter_dot_exe("G");
    scavTrap.challengeNewcomer("A");
    scavTrap.challengeNewcomer("B");
    fragTrap.takeDamage(200);
    scavTrap.takeDamage(200);
    fragTrap.vaulthunter_dot_exe("G");
    return (0);
}
