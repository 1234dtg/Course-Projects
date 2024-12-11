#include <simplecpp>

void print_coordinates(int n);

main_program{
    int n;
    cin >> n;
    print_coordinates(n);
}

void print_coordinates(int n){
    int x=0, y=0, orientation=0;
    char input;
    for(int i=0; i<n; i++){
        cin >> input;
        if(input == 'F'){
            if(orientation == 0) 
                x++;
            else if(orientation == 90) 
                y++;
            else if(orientation == 180)
                x--;
            else
                y--;
        }
        else if(input == 'L')
            orientation = (orientation + 90) % 360;
    }
    cout << x << " " << y << endl;
}