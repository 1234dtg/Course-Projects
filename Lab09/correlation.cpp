#include <math.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double x[n], y[n];
    
    for(int i=0; i<n; i++){
        cin >> x[i];
    }

    for(int i=0; i<n; i++){
        cin >> y[i];
    }
    
    double num=0, denom=0;

    double sig_xy=0, sig_x=0, sig_y=0, sig_x2=0, sig_y2=0;

    for(int i=0; i<n; i++){
        sig_xy += x[i]*y[i];
        sig_x += x[i];
        sig_y += y[i];
        sig_x2 += x[i]*x[i];
        sig_y2 += y[i]*y[i];
    }

    num = double(n) * sig_xy - sig_x * sig_y;
    denom = sqrt(double(n) * sig_x2 - sig_x * sig_x) * sqrt(double(n) * sig_y2 - sig_y * sig_y);
    if(abs(denom) < 1e-9){
        cout << "-1" << endl;
        return 0;
    }
    cout.precision(2);
    cout << fixed << num / denom << endl;
}