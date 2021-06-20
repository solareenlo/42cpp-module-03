/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/21 03:16:34 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    srand(static_cast<unsigned>(time(NULL)));

    FragTrap    F("F");
    ScavTrap    S("S");

    F.rangeAttack("B");
    S.rangeAttack("B");
    std::cout << std::endl;

    F.meleeAttack("B");
    S.meleeAttack("B");
    std::cout << std::endl;

    F.takeDamage(10);
    S.takeDamage(10);
    F.takeDamage(10);
    S.takeDamage(10);
    F.takeDamage(100);
    std::cout << std::endl;

    F.meleeAttack("B");
    F.beRepaired(10);
    F.beRepaired(100);
    S.beRepaired(100);
    F.beRepaired(100);
    std::cout << std::endl;

    F.vaulthunter_dot_exe("B");
    F.vaulthunter_dot_exe("C");
    F.vaulthunter_dot_exe("D");
    F.vaulthunter_dot_exe("E");
    F.vaulthunter_dot_exe("F");
    F.beRepaired(100);
    F.vaulthunter_dot_exe("G");
    std::cout << std::endl;

    S.challengeNewcomer("A");
    S.challengeNewcomer("B");
    S.challengeNewcomer("B");
    S.beRepaired(50);
    std::cout << std::endl;

    F.takeDamage(200);
    S.takeDamage(200);
    F.vaulthunter_dot_exe("G");
    S.challengeNewcomer("G");
    return (0);
}
