#include<bits/stdc++.h>
using namespace std;
void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> res;
        for(int i=0;i<n;i++){
            if(arr[i]>=0) res.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0) res.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=res[i];
        }
        // return arr;
    }