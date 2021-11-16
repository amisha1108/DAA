/*
I. Given an array of nonnegative integers, design a linear algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
*/

#include<iostream>

using namespace std;

int main()
{
    int testcases;
    cout<<"Enter Nunmber of Test cases:"<<endl;
    cin>>testcases;
    while(testcases--)
    {
        int n,i;
        cout<<"Enter limit of array:"<<endl;
        cin>>n;
        int *arr = new int[n];
        cout<<"Enter only nonnegative integers:"<<endl;
        for(int i=0;i<n;i++)
            cin>>*(arr+i);
        int ele;
        cout<<"Enter Element to search:"<<endl;
        cin>>ele;
        for (i = 0; i < n; i++)
        {
            if(*(arr+i)==ele)
            {
                cout<<"Present "<<i+1<<endl;
                break;
            }
        }
        if(i>=n)
            cout<<"Not Present "<<n<<endl;
    }
    return 0;
}
