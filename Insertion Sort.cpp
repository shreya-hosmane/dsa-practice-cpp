#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n-1;i++){
        int j=i-1;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements\n";
    cin>>n;
    cout<<"Enter "<< n <<" elements\n";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insertion_sort(arr,n);
    cout<<"The sorted array is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }

}
