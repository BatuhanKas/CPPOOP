/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   referance_gecirme.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:41:56 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 17:45:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void printValue(int& ref) {
    cout << "Value: " << ref << endl;
}

void modifyAndPass(int& ref, void (*func)(int&)) {
    ref += 10; // Referansın gösterdiği değeri değiştir
    func(ref); // Referansı başka bir fonksiyona geçir
}

void edf(char *e);

void asd(char *str) {
    edf(str);
}

int main() {
    int x = 5;

    char *s;

    asd(s);

    cout << "Initial value: " << x << endl;

    // modifyAndPass fonksiyonuna x'in referansını ve printValue fonksiyonunu geçir
    modifyAndPass(x, printValue);

    cout << "Final value: " << x << endl;

    return 0;
}
