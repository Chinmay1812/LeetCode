// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int s, int e)
    {
        if(s>=e)
        {
            return;
        }
        int pi=partition(a,s,e);
        quickSort(a,s,pi-1);
        quickSort(a,pi+1,e);
    }
    
    public:
    int partition(int a[], int s, int e)
    {
        int pi=a[e];
        int k=s;
        for(int i=s;i<=e;i++)
        {
            if(a[i]<=pi)
            {
                swap(a[i],a[k]);
                k++;
            }
        }
        
       return k-1;
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends