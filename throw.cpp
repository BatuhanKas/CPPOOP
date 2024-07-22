/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:54:40 by bkas              #+#    #+#             */
/*   Updated: 2024/07/19 14:54:44 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void islem(int x, int y) throw(logic_error, runtime_error) {
    if (x == 0) {
        throw logic_error("Bir sayi sifir olamaz");
    }
    if (x < 0 || y < 0) {
        throw runtime_error("bir sayi neg olamaz.");
    }
    cout << "Result: " << x / y << endl;
}

int main() {
    try {
        int x = 12, y = -3;

        islem(x, y);
    } catch (logic_error &le) {
        cout << "logic err: " << le.what() << endl;
    } catch (runtime_error &re) {
        cout << "runtime err: " << re.what() << endl;
    } catch (string errmsg) {
        cout << "hata :>" << errmsg << endl;
    }
}