/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:47:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 16:32:12 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_FRAGTRAP_HPP_
#define EX02_FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap {
 public:
    FragTrap(void);
    explicit FragTrap(std::string const& name);
    FragTrap(FragTrap const& src);
    ~FragTrap(void);

    FragTrap&   operator = (FragTrap const& right);

    void        vaulthunter_dot_exe(std::string const& target);
};

#endif  // EX02_FRAGTRAP_HPP_
