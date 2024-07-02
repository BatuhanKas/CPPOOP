/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tekcift.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:41:18 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 13:32:34 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main() {
    int num = 0;
    do {
        cout << "Num is:" << num << endl;
        int mod = num % 2;
        if (mod == 0) {
            cout << "Cift Sayi: " << mod << endl;
        } else if (mod == 1) {
            cout << "Tek Sayi: " << mod << endl;
        }
    } while (num < 10 && ++num);
}