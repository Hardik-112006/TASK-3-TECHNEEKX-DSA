#include <iostream>
using namespace std;

int main(){
    int i;
    int count = 0;
    int arr[100];

    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    
    cout << "Enter " << size << " elements in the array: ";
    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    for(i=0;i<size;i++){
        int num = arr[i];
        int Digits =0;

      while(num > 0){
        num = num / 10;
        Digits++;
      }

      if(Digits % 2 == 0){
            count++;
        }

    }
    cout << "The number of elements with even digits in the array is: " << count << endl;
}