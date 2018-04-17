#include "sort.h"

void quick_sort(int*A, int N, int l, int r) {

    if (l == r) return;   // ���� ������ ���

    // ������� ������� �������
    int c, ll, rr, mid;
    ll = l;  rr = r;  c = l+1;   mid = A[l];

    // � ��������� ������� �����,
    // ������� ������, � ������ ��� � ��������

    // ���� ������������ ���������:
    // �� [L;LL) - ��, ��� ������ mid
    // �� [LL �� C) - ��, ��� ����� mid
    // �� [RR;R) - ��, ��� ������ mid

    while (c < rr) {
        if (A[c] > mid) {
            swap(A, c, rr-1);
            rr--;
        }
        else if (A[c] == mid) {
            c++;
        }
        else if (A[c] < mid) {
            swap(A, ll, c);
            ll++;
            c++;
        }
    }

    quick_sort(A, N, l, ll);
    quick_sort(A, N, rr, r);
}