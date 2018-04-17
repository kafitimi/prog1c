// utils.cpp : ��� ��������������� �������

#include <iostream>

// ������ ������� A ����� N
void print(int *A, int N) {
    for (int i = 0; i < N; i++) std::cout << A[i] << " "; 
    std::cout << "\n";
}

// ������������ i-�� � j-����������� � ������� A
void swap(int*A, int i, int j) {
    int buf = A[i];
    A[i] = A[j];
    A[j] = buf;
}

