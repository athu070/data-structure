#include <bits/stdc++.h>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << A[i];
    cout << endl;
}

int partition(int A[], int p, int q)
{
    int pivot = A[p];
    int i = p + 1;
    int j = q;
    int temp;

    do
    {
        while (A[i] <= pivot)
            i++;
        while (A[j] > pivot)
            j--;
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[p];
    A[p] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int l, int h)
{
    int pivot;
    if (l < h)
    {
        pivot = partition(A, l, h);
        quickSort(A, l, pivot - 1);
        quickSort(A, pivot + 1, h);
    }
}

int main()
{
    cout << "Enter Array Length: " << endl;
    int n;
    cin >> n;
    cout << "Enter Array Elements to Sort: ";
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Unsorted Array: " << endl;
    printArray(A, n);
    quickSort(A, 0, n - 1);
    cout << "Sorted Array: " << endl;
    printArray(A, n);

    return 0;
}

// 11 13 7 12 16 9 24 5 10 3