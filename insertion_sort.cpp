#include <iostream>
using namespace std;

void Insertionsort(int arr[],int n){
  for(int i=0;i<n;i++){
      int j = i;
      while(j > 0 && arr[j-1] > arr[j]){
        // swapping
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
      }
  }
}

int main() {
  int arr[] = {6,5,4,3,2,1};

  int n = sizeof(arr)/sizeof(arr[0]);

  Insertionsort(arr,n);
  cout<<"The Sorted Insertion sort is: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
  return 0;
}

// TIME COMPLEXITY: O(N^2)
