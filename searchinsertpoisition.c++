#include <iostream>
using namespace std;

int main(){
    int i;
    int arr[100];
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    cout << "Enter " << size << " elements in the array: ";
    for(i=0;i<size;i++){
        cin >> arr[i];
    }
    
    int start,mid,end;
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    int index = 0;

    start = 0;
    end = size - 1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(arr[mid] == target){
          index = mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    if(index != 0){
        cout << "The target element " << target << " is found at index: " << index << endl;
    }
    else{
        cout << "The target element " << target << " will be inserted at index: " << start << endl;
    }
}