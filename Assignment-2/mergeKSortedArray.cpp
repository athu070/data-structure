#include <bits/stdc++.h>
using namespace std;
#define N 105

void printArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

class data
{
public:
    int val, apos, vpos;
    data(int v, int ap, int vp)
    {
        val = v;   
        apos = ap;
        vpos = vp;
    }
};

struct mycomp
{
    bool operator()(data &d1, data &d2)
    {
        return d1.val > d2.val;
    }
};

vector<int> mergeSortedArrays(vector<vector<int>> arr, int K)
{
    priority_queue<data, vector<data>, mycomp> pq;
    vector<int> ans;

    for (int i = 0; i < K; i++)
    {
        data d(arr[i][0], i, 0);
        pq.push(d);
    }

    while (!pq.empty())
    {
        data curr = pq.top();
        pq.pop();
        ans.push_back(curr.val);

        int ap = curr.apos, vp = curr.vpos;

        if (vp + 1 < arr[ap].size())
        {
            data d(arr[ap][vp + 1], ap, vp + 1);
            pq.push(d);
        }
    }
    return ans;
}

int main()
{
    int K;
    cin >> K;
    vector<vector<int>> arr(K, vector<int>(K, 0));
    for(int i=0; i<K; i++)
    {
        for(int j=0; j<K; j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<int>res = mergeSortedArrays(arr, K);
    printArray(res, K*K);
    cout<<endl;
    return 0;
}