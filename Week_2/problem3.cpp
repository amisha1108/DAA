/*
Given an array of non-negative integers, design an algorithm and a program to count
the number of pairs of integers such that their difference is equal to a given key, K.
*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count = 0,n,key;
        cin>>n>>key;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        for(int i = 0;i < n;i++)
        {
            for(int j = i+1;j < n;j++){
                if(abs(arr[i] - arr[j]) == key)
                count++;
            }
        }
    cout<<count<<endl;
    }
    return 0;
}