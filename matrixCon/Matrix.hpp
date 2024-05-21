/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:29:32 by bkas              #+#    #+#             */
/*   Updated: 2024/05/21 14:17:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <iomanip>

using namespace std;

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
    void addMatrix(Matrix &oth);
};

#endif