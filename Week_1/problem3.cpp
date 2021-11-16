/*
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether a given key element is present in the sorted array or not. For an array
arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. Once the interval (arr[2k]
< key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k
to find the element
key. (Complexity < O(n), where n is the number of elements need to be scanned for searching): 
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        int key;
            cin>>key;
        int count = 0,flag = 0;
        int m = sqrt(n);
        int start = 0;
        while(A[m] <= key && m < n)
        {
            count++;
            start = m;
            m += sqrt(n);
            if(m > n - 1)
            m = n;
        }
        for(int i = start;i < m;i++)
        {
            if(A[i] == key)
            {
                count++;
                flag = 1;
                break;
            }
            count++;
        }
        if(flag == 1)
            cout<<"Present"<<" "<<count<<endl;
        else
            cout<<"Not Present"<<" "<<count<<endl;
    }
    return 0;
}   