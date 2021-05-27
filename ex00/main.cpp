/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 16:44:30 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"

int main(void) {
    FragTrap    fragTrap("A");

    srand(static_cast<unsigned>(time(NULL)));
    fragTrap.rangeAttack("B");
    fragTrap.meleeAttack("B");
    fragTrap.takeDamage(10);
    fragTrap.takeDamage(10);
    fragTrap.takeDamage(100);
    fragTrap.meleeAttack("B");
    fragTrap.beRepaired(10);
    fragTrap.beRepaired(100);
    fragTrap.beRepaired(100);
    fragTrap.vaulthunter_dot_exe("B");
    fragTrap.vaulthunter_dot_exe("C");
    fragTrap.vaulthunter_dot_exe("D");
    fragTrap.vaulthunter_dot_exe("E");
    fragTrap.vaulthunter_dot_exe("F");
    fragTrap.vaulthunter_dot_exe("G");
    fragTrap.takeDamage(200);
    fragTrap.vaulthunter_dot_exe("G");
    return (0);
}
