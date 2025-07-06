#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
void createMemory(T**& m, int row, int col) {
    m = new T* [row];
    for (int i = 0; i < row; i++) {
        m[i] = new T[col];
    }
}
    
template <typename T>
void randArray(T** m, int row, int col, int a=1, int b=10) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m[i][j] = rand() % (b - a +1) + a;
        }
    }
}

template <typename T>
void printArray(T** m, int row, int col, int w=4) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout.width(4);
            cout << m[i][j];
        }
        cout << endl;
    }
}

template <typename T>
void deleteArray(T**& m, int row) {
    for (int i = 0; i < row; i++) {
        delete[] m[i];
    }
    delete[] m;
    m = nullptr;
}

template <typename T>   
void calcSum_Mult(T** m, int row, int col, int k, int& sum, T& mult) {
    if (k <= 0 || k > row) {
        cout << "Error" << endl;
 
    }
    sum = 0; mult = 1;

    for (int i = 0; i < col; i++) {
        sum += m[k][i];
        mult *= m[k][i];
    }
}

template <typename T>
void addNewRow(T**& m, int& row, int col, int k, T value) {
    T* temp = new T[col];

    for (int i = 0; i < col; i++)
    {
        temp[i] = value;
    }
    
    T** tempM = new T* [++row];
    for (int i = 0; i < row; i++) {
        if (i < k) {
            tempM[i] = m[i];
        }
        else if (i == k) {
            tempM[i] = temp;
        }
        else {
            tempM[i] = m[i - 1];
        }
    }

    if (m != nullptr) {
        delete[] m;
    }
    m = tempM;
}

template <typename T>
void addNewCol(T**& m, int row, int& col, int k, T value) {
    T** tempM = nullptr;
    col++;
    createMemory(tempM, row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            if (j < k) {
                tempM[i][j] = m[i][j];
            }
            else if (j == k) {
                tempM[i][j] = value;
            }
            else {
                tempM[i][j] = m[i][j-1];
            }
        }

    }

    deleteArray(m, row);
    m = tempM;
}