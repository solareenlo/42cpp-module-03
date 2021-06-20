/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/20 21:28:16 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <ctime>
#include "FragTrap.hpp"

int main() {
    srand(static_cast<unsigned>(time(NULL)));

    FragTrap    A("A");

    A.rangeAttack("B");
    A.meleeAttack("B");
    std::cout << std::endl;

    A.takeDamage(10);
    A.takeDamage(10);
    A.takeDamage(100);
    std::cout << std::endl;

    A.meleeAttack("B");
    std::cout << std::endl;

    A.beRepaired(10);
    A.beRepaired(100);
    A.beRepaired(100);
    std::cout << std::endl;

    A.vaulthunter_dot_exe("B");
    A.vaulthunter_dot_exe("C");
    A.vaulthunter_dot_exe("D");
    A.vaulthunter_dot_exe("E");
    A.vaulthunter_dot_exe("F");
    A.vaulthunter_dot_exe("G");
    std::cout << std::endl;

    A.takeDamage(200);
    A.vaulthunter_dot_exe("G");
    std::cout << std::endl;

    FragTrap    B(A);
    B.beRepaired(10);
    A.vaulthunter_dot_exe("G");
    B.vaulthunter_dot_exe("G");
    std::cout << std::endl;

    FragTrap    C = B;
    return (0);
}
