/*
Given an unsorted array of integers, design an algorithm and implement it using a
program to find whether two elements exist such that their sum is equal to the given
key element. (Time Complexity = O(n log n)).
*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int flag = 0,n,key;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        cin>>key;
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++)
            {
                if(arr[i] + arr[j] == key)
                {
                    flag = 1;
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
            }
        }
        if(flag == 0)
            cout<<"No such elements exist"<<endl;
    }
    return 0;
}