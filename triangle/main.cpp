/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:11:42 by bkas              #+#    #+#             */
/*   Updated: 2024/05/03 14:41:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "triangle.hpp"

int main() {
    float a,b,c;
    
    cout << "Lutfen deger giriniz. (a-b-c)" << endl;
    cin >> a >> b >> c;
    Triangle triangle1(a,b,c);
    Triangle triangle2 = triangle1;
}