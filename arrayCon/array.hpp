/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:06:33 by bkas              #+#    #+#             */
/*   Updated: 2024/05/24 15:14:53 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
using namespace std;

class Array {
   protected:
    int *data, size, capacity;
    // int findIndex(int number, int b = 0);

   public:
    Array(int user_capacity = 5);
    ~Array();
    Array(const Array &oth);
    int getSize();
    int getCapacity();
    void AddItem(int number);
    void printItems();
    void removeIndexItem(int index);
    void removeItem(int number);
    void findElement(int number, int b = 0);
};

class unsortedArr : public Array {
   public:
    unsortedArr(int user_capacity = 5);
    unsortedArr(unsortedArr &oth);
    void printItems();
};

class sortedArr : public Array {
   public:
    sortedArr(int user_capacity = 5);
    sortedArr(sortedArr &oth);
    void addItem(int number);
    void printItems();
};
