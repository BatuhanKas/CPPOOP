/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:29:32 by bkas              #+#    #+#             */
/*   Updated: 2024/05/22 17:39:11 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <time.h>

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

typedef union s_cast
{
	const char			*ptr;
	unsigned long long	integer;
}	t_cast;

class Matrix {
   private:
    int row, col;
    int **matrix;

   public:
    Matrix(int r = 5, int c = 5);
    ~Matrix();
    Matrix(const Matrix &oth);
    int getRowNum();
    int getColNum();
    void setVal(int r, int c, int val);
    void randomSet();
    void identityMatrixSet();
    void display();
    Matrix addMatrix(const Matrix &oth);
    void setRow(int row2) { row = row2; };
};

#endif