#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            for(int j=n-1; j>=i+1; j--){
                if(arr[j] > arr[i]){
                    swap(arr[i], arr[j]);
                    int start = i+1, end = n-1;
                    while (start < end) {
                        swap(arr[start], arr[end]);
                        start++;
                        end--;
                    }               
                    break;
                }
            }
            break;
        }

        if(i == 0){
            int start = 0, end = n-1;
            while (start < end) {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }  
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}