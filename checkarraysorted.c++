#include <iostream>
using namespace std;

int main(){
    int i;
    int flag = 1;

    int arr[100];
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

     cout << "Enter " << size << " elements in the array: ";
    for(i=0;i<size;i++){
        cin >> arr[i];  
    }

    for(i=0;i<size-1;i++){
        if(arr[i] > arr[i+1]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        cout << "The array is sorted in ascending order." << endl;
    }
    else{
        cout << "The array is not sorted in ascending order." << endl;
    }
}