/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:29:48 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 12:41:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

/*
    Calculator Easy

    int main() {
        int n1, n2;
        char op;

        cin >> n1 >> op >> n2;

        switch (op) {
            case '+':
                cout << n1 + n2 << endl;
                break;
            case '-':
                cout << n1 - n2 << endl;
                break;
            case '/':
                cout << n1 / n2 << endl;
                break;
            case '*':
                cout << n1 * n2 << endl;
                break;
            default:
                cout << "False parameter" << endl;
                break;
        }
    }

*/

int main() {
    int num = 1;

    for (num = 1; num < 10; num++) {
        if (num == 3) continue;
        if (num == 5) {
            break;
        }
        cout << num << endl;
    }
}
