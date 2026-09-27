#include <iostream>
using namespace std;

int main(){
    int i;
    int searchnumber;
    int arr[100];
    int size;
    bool flag = false;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    cout << "Enter " << size << " elements in the array: ";

    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> searchnumber;

    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == searchnumber){
            flag = true;
            break;
        }
        else if(arr[mid] < searchnumber){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    if(flag){
        cout << searchnumber << " is present in the array." << endl;
    }
    else{
        cout << searchnumber << " is not present in the array." << endl;
    }
}