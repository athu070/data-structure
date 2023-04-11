#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int l, int r, int k) {
    if (l < r) {
        int i;
        int n = r-l+1;
        for(i=0;i<k;i++)
        {
            mergeSort(arr, l + i*n/k, min(l + (i+1)*n/k - 1,r), 1);
        }
        for(i=0;i<k-1;i++)
        {
            merge(arr,l+i*n/k,l+i*n/k+n/k-1,min(l+(i+1)*n/k-1,r));
        }
    }
}

int main() {
    int k,n;
    vector<int> arr;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Enter the number of partitions: ";
    cin >> k;
    mergeSort(arr, 0, n - 1, k);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}






