/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:06:33 by bkas              #+#    #+#             */
/*   Updated: 2024/05/13 14:58:54 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
using namespace std;

class Array {
   private:
    int *data, size, capacity;
    int findIndex(int number, int b = 0);

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