/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:10:15 by bkas              #+#    #+#             */
/*   Updated: 2024/05/24 18:13:16 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int Array::getSize() { return size; }

int Array::getCapacity() { return capacity; }

Array::Array(int user_capacity) {
    this->capacity = user_capacity;
    this->data = new int[capacity];
    size = 0;
    cout << "Array created with " << capacity << " capacity" << endl;
}

Array::~Array() {
    delete[] data;
    cout << "Array destroyed" << endl;
}

Array::Array(const Array &oth) {
    this->size = oth.size;
    this->capacity = oth.capacity;
    data = new int[capacity];
    for (int i = 0; oth.data[i]; i++) {
        data[i] = oth.data[i];
    }
    cout << "Array copied to target!" << endl << endl;
}

void Array::AddItem(int number) {
    int i = 0;
    if (size >= capacity) {
        capacity *= 2;
        int *tmp = new int[capacity];
        while (i < size) {
            tmp[i] = data[i];
            i++;
        }
        delete[] data;
        data = new int[capacity];
        i = 0;
        while (i < size) {
            data[i] = tmp[i];
            i++;
        }
        data[i] = number;
        size++;
        delete[] tmp;
    } else {
        while (data[i]) i++;
        if (!data[i]) {
            data[i] = number;
            size++;
        }
    }
}

void Array::printItems() {
    for (int i = 0; i < size; i++) {
        cout << "data[" << i << "]: " << data[i] << " " << endl << endl;
    }
}

void Array::findElement(int number, int b) {
    bool flag = false;
    while (b < size && data[b]) {
        if (data[b] == number) {
            cout << "Here's your number: " << "index[" << b << "]: " << data[b]
                 << endl;
            flag = true;
        }
        b++;
    }
    if (!flag) cout << "Sorry! We didn't find your number " << number << endl;
}

void Array::removeIndexItem(int index) {
    if (index < 0 || index >= size) {
        cout << "--False index ! --" << endl;
        return;
    }
    int a = index;
    int b = data[index];
    for (int i = index; i < size; i++) {
        data[i] = data[i + 1];
    }
    cout << "--data[" << a << "]: " << b << " is deleted.--" << endl << endl;
    size--;
}

void Array::removeItem(int number) {
    int sizeRemove = 0;
    int j = 0;
    bool flag = false;
    for (int i = 0; data[i]; i++) {
        if (data[i] == number) {
            j = i;
            while (data[i + 1] == number) i++;
            data[j] = data[i + 1];
            sizeRemove++;
            flag = true;
            i -= 1;
        }
    }
    while (sizeRemove) {
        size--;
        sizeRemove--;
    }

    // int counter = 0;

    // for (int i = 0; i <= size; i++) {
    //     if(data[i] == number) {
    //         for (int j = 0; j < size; j++) {
    //             data[j] = data[j+1];
    //         }
    //         counter++;
    //         flag = true;
    //     }
    // }
    if (flag) cout << "--Number " << number << " is Removed!--" << endl;
    // size -= counter;

    return;
}

/**
 * @brief unsorted Arr
 * Functions Down Below
 */

unsortedArr::unsortedArr(int user_capacity) : Array(user_capacity) {}

unsortedArr::unsortedArr(unsortedArr &oth) : Array(oth) {}

void unsortedArr::printItems() {
    cout << "Unsorted Array" << endl;
    Array::printItems();
}

/**
 * @brief sorted Arr
 * Functions Down Below
 */

sortedArr::sortedArr(int user_capacity) : Array(user_capacity) {}

sortedArr::sortedArr(sortedArr &oth) : Array(oth) {}

void sortedArr::printItems() {
    cout << "Sorted Array: ";
    Array::printItems();
}

/**
 * @brief addItem override yapacagiz
 * Cunku numarayi nereye ekleyecegimi bulup
 * o araliktaki indexe eklememiz gerekiyor.
 *
 * @param number
 */

/**
 * @brief YAPAMADIM ANASINI SATAYIM KAFAYI YEDIM BURADA AKSAM BAKICAM
 *
 * @param number
void sortedArr::addItem(int number) {
    int i = 0;
    int flag = 1;
    if (size < capacity) {
        int *tmp = new int[capacity];
        for (size_t i = 0; data[i]; i++) tmp[i] = data[i];
        delete[] data;
        data = new int[capacity];
        while (tmp[i]) {
            if (tmp[i] < number && tmp[i + 1] > number && flag) {
                data[i] = number;
                size++;
                flag = 0;
            } else {
                data[i] = tmp[i];
            }
            i++;
        }
        delete[] tmp;
    } else {
        capacity *= 2;
        int *tmp = new int[capacity];
        for (size_t i = 0; data[i]; i++) tmp[i] = data[i];
        delete[] data;
        data = new int[capacity];
        while (tmp[i]) {
            if (tmp[i] < number && tmp[i + 1] > number && flag) {
                data[i] = number;
                size++;
                flag = 0;
            } else {
                data[i] = tmp[i];
            }
            i++;
        }
        delete[] tmp;
    }
}
 */

void sortedArr::addItem(int number) {
    int i = 0;
    if (size >= capacity) {
        capacity *= 2;
        int *tmp = new int[capacity];
        for (int i = 0; i < size; i++) tmp[i] = data[i];
        delete[] data;
        data = tmp;
    }
    for (i = size - 1; i >= 0 && data[i] > number; i++) {
        data[i + 1] = data[i];
    }
    data[i + 1] = number;
    size++;
}

// 1 2 4 5

// 3