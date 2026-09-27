#include <iostream>
using namespace std;

int main(){
    int i;
   

    int start,mid,end;
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

     start = 1;
     end = target;
     int answer;

     if(target<2){
        cout << "The square root of " << target << " is: " << target << endl;
        return 0;
     }

    while(start <= end){
        mid = start + (end - start) / 2;

        if(mid  == target / mid){
            answer = mid;
            break;
        }
        else if(mid < target / mid){
            answer = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }


}

 cout << "The square root of " << target << " is: " << answer << endl;


}