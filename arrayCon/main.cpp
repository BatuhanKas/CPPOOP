/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:23:44 by bkas              #+#    #+#             */
/*   Updated: 2024/05/24 16:00:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main() {
    // Array mainArr(5);

    // Array secondArr(mainArr);

    // cout << "Capapacity: " << mainArr.getCapacity() << endl;
    // cout << "Size: " << mainArr.getSize() << endl << endl;

    // cout << "Capapacity: " << secondArr.getCapacity() << endl;
    // cout << "Size: " << secondArr.getSize() << endl << endl;

    // mainArr.AddItem(1);
    // mainArr.AddItem(5);
    // mainArr.AddItem(6);
    // mainArr.AddItem(4);
    // mainArr.AddItem(5);

    // cout << "Capapacity: " << mainArr.getCapacity() << endl;
    // cout << "Size: " << mainArr.getSize() << endl << endl;

    // mainArr.AddItem(6);
    // mainArr.AddItem(7);


    // cout << "Capapacity: " << mainArr.getCapacity() << endl;
    // cout << "Size: " << mainArr.getSize() << endl << endl;
    
    sortedArr s1;
    s1.addItem(1);
    s1.addItem(2);
    s1.addItem(3);
    // s1.addItem(3);
    // s1.addItem(4);
    // s1.printItems();

    cout << "Capapacity: " << s1.getCapacity() << endl;
    cout << "Size: " << s1.getSize() << endl << endl;

    // cout << "main arr:" << endl;
    // mainArr.printItems();

    // Array thirdArr = mainArr;

    // cout << "third arr:" << endl;
    // thirdArr.printItems();
    // thirdArr.AddItem(4);
    // thirdArr.AddItem(5);
    // cout << "added third arr:" << endl;
    // thirdArr.printItems();
    // cout << "Capapacity: " << thirdArr.getCapacity() << endl;
    // cout << "Size: " << thirdArr.getSize() << endl << endl;

    // cout << "deleted third arr:" << endl;
    // thirdArr.removeIndexItem(2);
    // thirdArr.printItems();
    // cout << "Capapacity: " << thirdArr.getCapacity() << endl;
    // cout << "Size: " << thirdArr.getSize() << endl << endl;

    // thirdArr.removeItem(6);
    // thirdArr.printItems();
    // cout << "Capapacity: " << thirdArr.getCapacity() << endl;
    // cout << "Size: " << thirdArr.getSize() << endl << endl;

    // thirdArr.findElement(4);

    // thirdArr.AddItem(7);
    // thirdArr.AddItem(8);
    // thirdArr.AddItem(9);
    // thirdArr.printItems();
    // cout << "Capapacity: " << thirdArr.getCapacity() << endl;
    // cout << "Size: " << thirdArr.getSize() << endl << endl;

    // mainArr.findElement(4, 0);
    // mainArr.findElement(0, 0);
}