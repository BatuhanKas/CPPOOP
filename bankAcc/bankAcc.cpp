/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankAcc.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:57:06 by bkas              #+#    #+#             */
/*   Updated: 2024/05/16 12:12:47 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bankAcc.hpp"

bankAcc::bankAcc(string name, string surname, float balance, long int phoneNum) {
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

bool bankAcc::controlNameSurname(string name) {
    for (int i = 0; name[i]; i++) {
        if (!isalpha(name[i])) return false;
    }
    return true;
}

bool bankAcc::controlPhoneNumber(int num) {
    int len = 0;
    while (len > 0) {
        num /= 10;
        len++;
    }
    return len == 10 ? true : false;
}

void bankAcc::credit(float balance) {
    if (balance < 0) {
        cout << "False Balance!" << endl;
        return;
    }
    accountBalance += balance;
    cout << "Deposit Successfull! Your Balance is: " << accountBalance << endl;
}

void bankAcc::withdraw(float balance) {
    if (balance < 0 || balance > accountBalance) {
        cout << "False Balance!" << endl;
        return;
    }
    accountBalance -= balance;
    cout << "Withdraw Successfull! Your Balance is: " << accountBalance << endl;
}

void bankAcc::sendMoney(bankAcc &oth, float amount) {
    if (amount < 0 || amount > accountBalance) {
        cout << "False Balance!" << endl;
        return;
    }
    accountBalance -= amount;
    oth.accountBalance += amount;
    cout << "Money Transfer Successfull! Your Balance is: " << accountBalance
         << oth.personName << " 's Account's Balance: " << oth.accountBalance
         << endl;
}

void bankAcc::displayProfile() {
    cout << "Person Name: " << personName << endl;
    cout << "Person SurName: " << personSurname << endl;
    cout << "Person Phone: " << personPhone << endl;
    cout << "Account Balance is: " << accountBalance << endl;
}

void bankAcc::setPersonName(string name) { personName = name; }

void bankAcc::setPersonSurname(string surname) { personSurname = surname; }

void bankAcc::setPersonPhone(int phoneNum) { personPhone = phoneNum; }

void bankAcc::setPersonBalance(float balance) { accountBalance = balance; }

string bankAcc::getPersonName() const { return personName; }

string bankAcc::getPersonSurname() const { return personSurname; }

int bankAcc::getPersonPhone() const { return personPhone; }

int bankAcc::getPersonBalance() const { return accountBalance; }

bankAcc::~bankAcc() {}