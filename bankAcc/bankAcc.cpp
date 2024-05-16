/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankAcc.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:57:06 by bkas              #+#    #+#             */
/*   Updated: 2024/05/16 15:48:24 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bankAcc.hpp"

bankAcc::bankAcc(string name, string surname, float balance, string phoneNum) {
    setPersonName(name);
    setPersonSurname(surname);
    setPersonBalance(balance);
    controlPhoneNumber(phoneNum)
        ? setPersonPhone(personPhone)
        : (cout << "Empty or False Phone Num!" << endl, void());
    cout << "Def Const Worked Well" << endl << endl;
}

bankAcc::bankAcc(const bankAcc &oth) {
    personName = oth.personName;
    personSurname = oth.personSurname;
    accountBalance = oth.accountBalance;
    personPhone = oth.personPhone;
    cout << "Copy Const Worked Well" << endl;
}

bool bankAcc::controlNameSurname(string name) {
    if (name.empty()) return true;
    for (int i = 0; name[i]; i++) {
        if (!isalpha(name[i])) return true;
    }
    return false;
}

bool bankAcc::controlPhoneNumber(string num) {
    if (num.empty() || num == "0") return true;
    // const char *s;
    while (num.length() != 10) {
        cout << "Please Enter a 10 digit number" << endl;
        getline(cin, num);
    }
    for (int i = 0; num[i]; i++) {
        if (isalpha(num[i])) {
            cout << "False number" << endl;
            num = "0";
            return false;
        }
    }
    // cout << "num: " << num << endl;
    personPhone = num;
    // s = num.c_str();
    // castedPhone = atoi(s);
    // __int128 tmp = castedPhone;
    long long int tmp = stol(personPhone);
    int len = 0;
    while (tmp > 0) {
        tmp /= 10;
        len++;
    }
    return len == 10 ? true : false;
}

void bankAcc::credit(float balance) {
    while (balance <= 0) {
        cout << "False Balance!" << endl;
        cin >> balance;
    }
    // do {
    //     cout << "input a balance" << endl;
    //     // getline(cin, balance);
    // } while (balance < 0);
    accountBalance += balance;
    cout << personName
         << "'s Deposit Successfull! Your Balance is: " << accountBalance
         << endl
         << endl;
}

void bankAcc::withdraw(float balance) {
    while (balance < 0 || balance > accountBalance) {
        cout << "False Balance!" << endl;
        cin >> balance;
    }
    accountBalance -= balance;
    cout << personName
         << "'s Withdraw Successfull! Your Balance is: " << accountBalance
         << endl
         << endl;
}

void bankAcc::sendMoney(bankAcc &oth, float amount) {
    while (amount < 0 || amount > accountBalance) {
        cout << "False Balance!" << endl;
        cin >> amount;
    }
    accountBalance -= amount;
    oth.accountBalance += amount;
    cout << "Money Transfer Successfull! Your Balance is: " << accountBalance
         << endl;
    cout << oth.personName << "'s Account's Balance: " << oth.accountBalance
         << endl
         << endl;
}

void bankAcc::displayProfile() {
    cout << "----------------------------------------" << endl;
    cout << "Person Name: " << personName << endl;
    cout << "Person SurName: " << personSurname << endl;
    cout << "Person Phone: " << personPhone << endl;
    cout << "Account Balance is: " << accountBalance << endl << endl;
}

void bankAcc::setPersonName(string name) {
    while (controlNameSurname(name)) {
        cout << "Please Enter a Name" << endl;
        getline(cin, name);
    }
    personName = name;
}

void bankAcc::setPersonSurname(string surname) {
    while (controlNameSurname(surname)) {
        cout << "Please enter a Surname" << endl;
        getline(cin, surname);
    }
    personSurname = surname;
}

void bankAcc::setPersonPhone(string phoneNum) { personPhone = phoneNum; }

void bankAcc::setPersonBalance(float balance) {
    balance < 0 ? accountBalance = 0 : accountBalance = balance;
}

string bankAcc::getPersonName() const { return personName; }

string bankAcc::getPersonSurname() const { return personSurname; }

string bankAcc::getPersonPhone() const { return personPhone; }

int bankAcc::getPersonBalance() const { return accountBalance; }

bankAcc::~bankAcc() {}