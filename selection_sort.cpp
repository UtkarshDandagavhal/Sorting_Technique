#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
  for(int i=0;i<=n-2;i++){
      int min = i;
      for(int j=i;j<=n-1;j++){
        if(arr[j] < arr[min]){
          min = j;
        }
      }
      swap(arr[i],arr[min]);
  }
}

int main() {
  int arr[] = {12,3,1,18,25,16};

  int n = sizeof(arr)/sizeof(arr[0]);

  selectionsort(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

// TIME COMPLEXITY - O(N)2
