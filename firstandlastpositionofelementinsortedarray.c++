#include <iostream>
using namespace std;

int main(){
    int i;
    int arr[100];
    int size;
    int first = -1;
    int last = -1;

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

    start = 0;
    end = size - 1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    start = 0;
    end = size - 1;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(arr[mid] == target){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    if(first != -1 && last != -1){
        cout << "The first occurrence of the target element " << target << " is at index: " << first << endl;
        cout << "The last occurrence of the target element " << target << " is at index: " << last << endl;
    }
    else{
        cout << "The target element " << target << " is not found in the array." << endl;
    }
}