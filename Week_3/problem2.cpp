/*
Given an unsorted array of integers, design an algorithm and implement a program to
sort this array using selection sort. Your program should also find number of
comparisons and number of swaps required.
*/

#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,swap = 0,comp = 0;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        int min,temp;
        for(int i = 0;i < n-1;i++){
            min = i;
            for(int j = i+1;j < n;j++){
                comp++;
                if(arr[j] < arr[min]){
                    min = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            swap++;
        }
        for(int i = 0;i < n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"Comparisions = "<<comp<<endl;
        cout<<"Swaps = "<<swap<<endl;
    }
    return 0;
}