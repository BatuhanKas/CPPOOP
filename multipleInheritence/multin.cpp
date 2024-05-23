/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multin.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:33:10 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 11:22:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "multin.hpp"

AClass::AClass() { cout << "---A-Class Const Worked.---" << endl; }

AClass::~AClass() { cout << "---A-Class Dest Worked.---" << endl; }

BClass::BClass() { cout << "---B-Class Const Worked.---" << endl; }

BClass::~BClass() { cout << "---B-Class Dest Worked.---" << endl; }

/**
 * @brief There is a way to work
 * Other Classes Contructors.
 * Calling directly other classes contructors.
 */

CClass::CClass() {
    a = 35;
    b = 26;
    // cout << "b:" << b << endl;
    cout << "---C-Class Const Worked.---" << endl;
}

CClass::~CClass() { cout << "---C-Class Dest Worked.---" << endl; }