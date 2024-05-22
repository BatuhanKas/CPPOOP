/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:35:50 by bkas              #+#    #+#             */
/*   Updated: 2024/05/22 13:05:09 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"

Matrix::Matrix(int r, int c) {
    if (r > 0 && c > 0) {
        row = r;
        col = c;
    } else {
        row = 5;
        col = 5;
    }

    /**
     * @brief C version of dynamic memory allocation for
     * --> 2 Dimensional Array matrix[3][5] <- Like this.

    int i = 0;
    int j = 0;
    matrix = (int **)malloc(sizeof(int *) * (row));
    for (i = 0; i < row; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * (col));
        for (j = 0; j < col; j++) {
            matrix[i][j] = i * 10 + j + 1;
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
     */

    /**
     * @brief CPP version of memory Allocation for
     * 2 Dimensional Array
     */

    matrix = new int *[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }
    cout << setw(3) << "Row: " << row << " Col: " << col << endl;
    cout << "------Def Const------" << endl;
}

Matrix::~Matrix() {
    /**
     * @brief free functions we're usually use in c

    for (int i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);
     */

    for (int i = 0; i < row; i++)
        delete[] matrix[i];
    delete[] matrix;
    cout << "-----Destr------" << endl;
}

Matrix::Matrix(const Matrix &oth) {
    row = oth.row;
    col = oth.col;
    matrix = new int *[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++) matrix[i][j] = oth.matrix[i][j];

    cout << "------Copy Const------" << endl;
}

void Matrix::randomSet() {
    // srand(time(NULL));
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 9);
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            setVal(i, j, dis(gen));
        }
    }
}

void Matrix::identityMatrixSet() {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            i == j ? setVal(i, j, 1) : setVal(i, j, 0);
        }
    }
}

void Matrix::setVal(int r, int c, int val) { matrix[r - 1][c - 1] = val; }

void Matrix::display() {
    cout << "Matrix" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
}
/**
 * @brief Sum of the 2 of matrixes;
 *
 * 1 2 3   4 3 2   5  5 5
 * 4 5 6 + 3 6 1 = 7 11 7
 * 3 1 0   5 3 1   8  4 4
 *
 * @param oth
 */
Matrix Matrix::addMatrix(const Matrix &oth) {
    if (row != oth.row || col != oth.col) {
        cout << "False Row or Column!" << endl;
        return 0;
    } else {
        Matrix sumMatrix(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                sumMatrix.matrix[i][j] = matrix[i][j] + oth.matrix[i][j];
            }
        }
        cout << "---Addition Succesfull!---" << endl;
        return sumMatrix;
    }
}

int Matrix::getRowNum() { return row; }

int Matrix::getColNum() { return col; }
