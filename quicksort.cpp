#include<bits/stdc++.h>
using namespace std;
int pivot(int a[],int low,int high)
{int pivot=a[low],i=low+1,j=high,temp;
    while(i<=j)
    {
        while (a[i] < pivot&&i<high)
            i++;
        while (a[j] > pivot)
            j--;
        if (i < j)
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            i++;
            j--;
        }
        else
            i++;
    }
    a[low]=a[j];
    a[j]=pivot;
    return j;

}
void quicksort(int a[],int low,int high)
{
    if(low>=high)
        return;
       int j=pivot(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
}
int main()
{
    int a[]={5,7,3,8,9,0,2,1},low=0,high=7;
    quicksort(a,low,high);
    for(int i=0;i<8;i++)
        cout<<a[i]<<" ";
}