#include <bits/stdc++.h>

using namespace std;

void insertionSort1(int n, vector <int> arr) {
    // Complete this function
    int i,j,k;
    int hold;
    i = n-1;
    j = i;
    hold = arr[i];
    while(j>0 && arr[j-1]>hold){
      arr[j] = arr[j-1];
      j--;
      for(k = 0; k < n; k++){
         cout<< arr[k] << " ";
      }
      cout<<endl;
    }
    arr[j] = hold;
    for(k = 0; k < n; k++){
       cout<< arr[k] << " ";
    }
    cout<<endl;
  }


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort1(n, arr);
    return 0;
}
