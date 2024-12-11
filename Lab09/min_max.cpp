#include <iostream>

int check(int x, int a[], int n){
    // Function to count the number of local min/max
    int cnt=0;
    for(int i=x-1; i<=x+1; i++){
        if(!(i==0 || i==n-1)){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                cnt++;
            }
            if(a[i] < a[i-1] && a[i] < a[i+1]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        std::cin >> a[i];
    }
    int v[2*n]; // to store the idxs of local min/max which must be <= 2n in number
    int nn = 0;
    for(int i=1; i<n-1; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            v[nn++] = i;
        }
        if(a[i]<a[i-1] && a[i]<a[i+1]){
            v[nn++] = i;
        }
    }
    int ans = nn;
    int maxDiff = 0;
    for(int ii=0; ii<nn; ii++){
        // It's optimal to modify one of the local min/max to be equal to its neighbour.
        int i = v[ii];
        int temp = a[i];
        int c1 = check(i, a, n); // initial count
        a[i] = a[i-1];
        int c2 = check(i, a, n); // count after a[i] = a[i-1]
        a[i] = a[i+1];
        int c3 = check(i, a, n); // count after a[i] = a[i+1]
        int m = std::min(c2,c3);
        if(m < c1 && maxDiff < c1-m){
            maxDiff = c1-m;
        }
        a[i] = temp; // set a[i] back to its original value stored in temp variable
    }
    std::cout << ans-maxDiff << std::endl;
}