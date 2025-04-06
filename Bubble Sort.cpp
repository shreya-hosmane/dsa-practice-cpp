#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms \n";
    cin>>n;
    cout<<"Enter "<<n<<" terms\n";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bubble_sort(arr,n);
    cout<<"Sorted Array is as follows: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}
