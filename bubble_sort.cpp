#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i-1;j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}


int main() {
  int arr[] = {4,3,1,2,5};

  int n = sizeof(arr)/sizeof(arr[0]);

  bubblesort(arr,n);
  cout<<"The Sorted Bubble sort is: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
