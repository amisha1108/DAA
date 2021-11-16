/*
Given an unsorted array of integers, design algorithm and implement it using a
program to an find Kth smallest or largest element in the array.(Worst case Time
Complexity = O(n))
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        int k;
        cin>>k;
        set<int> s(arr, arr + n);
        set<int>::iterator itr = s.begin();
        advance(itr, k - 1); 
        cout << *itr << "\n";
    }
    return 0;
}