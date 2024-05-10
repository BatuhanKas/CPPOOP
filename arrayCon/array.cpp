/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:10:15 by bkas              #+#    #+#             */
/*   Updated: 2024/05/10 16:36:14 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int Array::getSize() { return size; }

int Array::getCapacity() { return capacity; }

int Array::AddItem(int number) {}

Array::Array(int user_capacity) {
    this->capacity = user_capacity;
    this->data = new int[capacity];
    size = 0;
    cout << "Array created with capacity" << endl;
}

Array::~Array() {}

Array::Array(const Array &oth) {
    this->size = oth.size;
    this->capacity = oth.capacity;
    data = oth.data;
}