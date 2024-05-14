/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankAcc.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:57:06 by bkas              #+#    #+#             */
/*   Updated: 2024/05/14 17:03:52 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bankAcc.hpp"

bankAcc::bankAcc(string name, string surname, float balance, int phoneNum) {
    setPersonName(name);
    setPersonSurname(surname);
    setPersonPhone(phoneNum);
    setPersonBalance(balance);
    cout << "Def Const Worked Well" << endl;
}

bankAcc::bankAcc(const bankAcc &oth) {
    personName = oth.personName;
    personSurname = oth.personSurname;
    accountBalance = oth.accountBalance;
    personPhone = oth.personPhone;
    cout << "Copy Const Worked Well" << endl;
}

void bankAcc::setPersonName(string name) { personName = name; }

void bankAcc::setPersonSurname(string surname) { personSurname = surname; }

void bankAcc::setPersonPhone(int phoneNum) { personPhone = phoneNum; }

void bankAcc::setPersonBalance(float balance) { accountBalance = balance; }

bankAcc::~bankAcc() {}