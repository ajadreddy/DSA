#include<bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count =0;
       int arr[m+n];
       int s;
       for (s=0; s<n; s++)
       {
           arr[s] = a[s];
       }
       int j, k;
       for (j=s, k=0; k<m; k++, j++ )
       {
           arr[j]= b[k];
       }
       sort(arr, arr+m+n);
       
       //now compare 
       for (int i=0; i<m+n; i++)
       {
           if (arr[i]!= arr[i+1])
           {
               count++;
           }

      }

return count ;
        }