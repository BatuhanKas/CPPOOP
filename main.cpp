/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:28:35 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 11:04:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class X {
   public:
    int a;
    void f(int b) { cout << "The value of b is " << b << endl; }
    void x(int d) { cout << "The value of c is " << d << endl; }

    void fa() { cout << "The value of b is " << endl; }
    void xe() { cout << "The value of c is " << endl; }
};

int main() {
    // declare pointer to data member
    // int X::*ptiptr = &X::a;
    // int *ptr = &a;
    // Class eklenmis hali = int X::*ptr = &X::a;

    // string array tanimladim
    string sarr[] = {"fa", "xe", "f", "x"};

    // declare a pointer to member function
    // void (X::*ptfptr)(int) = &X::f;

    // void (X::*ptr)(int) = &X::x;

    // yukarida anlattigimin aynisi sadece basina classname gelmis birde
    // pointer array tanimlamis zor bisi degil.
    void (X::*parr[])() = {&X::fa, &X::xe};

    void (X::*arr1[])(int) = {&X::f, &X::x};

    // create an object of class type X
    X xobject;

    for (size_t i = 0; i < sizeof(sarr) / sizeof(sarr[0]); i++) {
        if (sarr[i] == "xe") {
            // hangi objeden gonderdiyse onun pointeri oldugu icin
            // objeden gonderiyoruz. eger mainden gonderseydik
            // this pointer kullanmak zorunda kalirdik.
            // cunku mainde objeler tanimlaniyor zaten adam direkt objeyi
            // gonderiyor. sen objeden islem yapacaksin.
            (xobject.*parr[i])();
        } else if (sarr[i] == "f") {
            (xobject.*arr1[i])(i);
        }
    }
    // cout << "Error" << endl;

    // (xobject.*parr[0])();

    // initialize data member
    // xobject.*ptiptr = 10;

    // cout << "The value of a is " << xobject.*ptiptr << endl;

    // call member function
    // (xobject.*ptfptr)(20);
    // (xobject.*ptr)(35);
}
