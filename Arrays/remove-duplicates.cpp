#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int a[],int n){
        // vector<int>v;
        // v.push_back(a[0]);
        int ind=0;
        for(int i=0;i<n;i++){
            
            if(a[ind]!=a[i]){
                ind++;
                a[ind]=a[i];
                
            }
        }
        return ind+1;;
    }