/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slack.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:18:06 by bkas              #+#    #+#             */
/*   Updated: 2024/07/22 13:31:17 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct type {
    int i;
    int x;

    type() : i(3), x(10) {}

    void f(int v) const {
        // this->i = v;                 // compile error: this is a pointer to
        // const
        const_cast<type*>(this)->i =
            v;  // OK as long as the type object isn't const
        cout << "value: " << this->i << endl;
    }
};
int main() {
    type
        t;  // if this was const type t, then t.f(4) would be undefined behavior

    int i = 3;  // i is not declared const
    const int& rci = i;
    // std::cout << "i = " << i << '\n';
    std::cout << "type::i = " << t.i << '\n';
    const_cast<int&>(rci) = 4;  // OK: modifies i
    std::cout << "i = " << i << '\n';

    t.f(4);
    std::cout << "type::i = " << t.i << '\n';

    const int j = 3;  // j is declared const

    int* pj = const_cast<int*>(&j);
    // *pj = 4;      // undefined behavior

    void (type::*pmf)(int) const = &type::f;  // pointer to member function
    // const_cast<void(type::*)(int)>(pmf);   // compile error: const_cast does
    // not work on function pointers
}
