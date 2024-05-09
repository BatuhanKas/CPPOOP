/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:21:20 by bkas              #+#    #+#             */
/*   Updated: 2024/05/08 12:23:44 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "MerhabaDunya!";

    // İlk 7 karakterden oluşan bir alt dize alınır
    std::string altDize1 = str.substr(0, 8);
    std::cout << "Alt dize 1: " << altDize1 << std::endl;

    // 8. karakterden sonraki kalan kısmı içeren bir alt dize alınır
    std::string altDize2 = str.substr(7);
    std::cout << "Alt dize 2: " << altDize2 << std::endl;

    return 0;
}
