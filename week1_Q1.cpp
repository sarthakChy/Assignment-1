#include <bits/stdc++.h>
using namespace std;

int average(vector<int> &arr,int n)
{
    float avg;
    float sum = 0.0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }

    avg = sum/n;
    return avg;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>> n;

    vector<int> arr;

    for(int i=0;i<n;i++)
    {   int num;
        cout<<"Enter number: ";
        cin>>num;
        arr.push_back(num);
    }

    cout<<"average : "<<average(arr,n);
}
