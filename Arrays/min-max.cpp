#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,4,1};
    int min=arr[0];
    int max=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<min+max;
}