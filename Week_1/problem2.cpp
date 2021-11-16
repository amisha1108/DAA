/*
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input)
*/

#include<iostream>

using namespace std;

int main()
{
    int n,i,key,c=0,mid,low,high,flag=-1;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>*(arr+i);
    cin>>key;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        c++;
        if(arr[mid]==key){
            cout<<"present"<<c;
            flag=1;
            break;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
            c++;
            continue;
        }
        else{
            low=mid+1;
            c++;
            continue;
        }
        if(flag<0)
            cout<<"Not Found"<<c<<endl;
    }
    return 0;
}
