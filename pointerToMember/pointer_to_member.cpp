/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_to_member.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:43:37 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 16:43:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class MyClass {
   public:
    int myDataMember;

    void myMemberFunction(int x) {
        std::cout << "myMemberFunction: " << x << std::endl;
    }
};

void printnum(int x) {
    cout << "num x: " << x << endl;
}

int main() {
    MyClass obj;
    obj.myDataMember = 42;  // Üye veri elemanına erişim

    void (MyClass::*funcPtr)(int) =
        &MyClass::myMemberFunction;  // Üye işlevin işaretçisi

    void (*ptr)(int) = &printnum;

    (obj.*funcPtr)(10);

    (*ptr)(42);

    return 0;
}