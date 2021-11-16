/*
Given a sorted array of positive integers containing few duplicate elements, design an
algorithm and implement it using a program to find whether the given key element is
present in the array or not. If present, then also find the number of copies of given
key. (Time Complexity = O(log n))
*/

#include<iostream>

using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int start = 0,end = n-1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main(void){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        int index = binarySearch(arr,n,key);
        int count = 0;
        if(index == -1)
            cout<<"Key Not present"<<endl;
        else
        {
            for(int i = 0;i < n;i++)
            {
                if(arr[i] == key)
                    count++;
            }
            cout<<arr[index]<<" - "<<count<<endl;
        }
    }
}