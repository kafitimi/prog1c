#include "sort.h"

void selection_sort(int *a, int n) {
    int min, min_here, imin, i, ops;

    // ���������: ����� �� min_here - ������������� �����.
    // ��������: �������� � ��������������� ����� ������� � 
    //           ������ ��� � ����� min_here
    //           ������������� ����� �������������
    
    for (min_here = 0; min_here < n-1; min_here++) {
        // ���� ������� �� min_here �� ����� �������
        // min - ��������� �������, imin - �������
        min = a[min_here];
        imin = min_here;
        for (i = min_here+1; i < n; i++)
            if (a[i] < min) {
                min = a[i];
                imin = i;
            }
        swap(a, min_here, imin);

        // -> ���� �������� ���������� ������� ����� �������� �������.
        // if(...) print(...);
    }
}
