#include<iostream>
using namespace std;
void merge_two_sorted_arrays(int arr1[],int arr2[],int m,int n)
{
   int idx = m+n-1,i=m-1,j=n-1;
   while(i>=0 && j>=0){
    if(arr1[i]>=arr2[j]){
        arr1[idx--]=arr1[i--];
    }else{
        arr1[idx--]=arr2[j--];
    }
   }
   while(j>=0){
    arr1[idx--]=arr2[j--];
   }
}
int main()
{
    int m;
    cout<<"Enter number of elements in array 1\n";
    cin>>m;
    cout<<"Enter "<< m <<" elements in sorted order\n";
    int arr1[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    int n;
    cout<<"Enter number of elements in array 2\n";
    cin>>n;
    cout<<"Enter "<<n<<" elements in sorted order\n";
    int arr2[n];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    merge_two_sorted_arrays(arr1,arr2,m,n);
    cout<<"The sorted array is : ";
    for(int i=0;i<m+n;i++){
        cout<<arr1[i];
        cout<<" ";
    }
}
