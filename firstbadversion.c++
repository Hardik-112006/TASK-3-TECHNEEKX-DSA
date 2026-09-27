#include <iostream>
using namespace std;

int main(){
    int i;

    int n;

    cout << "Enter the number of versions: ";
    cin >> n;



    int start,mid,end;
     start = 1;
    end = n;
    int answer;

    while(start <= end){
        mid = start + (end - start) / 2;

        bool isBadVersion;
        cout << "Is version " << mid << " a bad version? (1 for yes, 0 for no): ";
        cin >> isBadVersion;

        if(isBadVersion){
            answer = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }


    cout << "The first bad version is: " << answer << endl;
}