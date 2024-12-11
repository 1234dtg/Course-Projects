#include <simplecpp>
double dist(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
void draw_circle(int x, int y, int r){
    Circle c(x, y, r);
    wait(10);
}
void get_center_radius(double x1, double y1, double x2, double y2, double x3, double y3, double &xc, double &yc, double &r){
    // radius of centre of circle given three points on its circumference
    double x12 = x1 - x2;
    double x13 = x1 - x3;
    double y12 = y1 - y2;
    double y13 = y1 - y3;
    double y31 = y3 - y1;
    double y21 = y2 - y1;
    double x31 = x3 - x1;
    double x21 = x2 - x1;
    double sx13 = pow(x1, 2) - pow(x3, 2);
    double sy13 = pow(y1, 2) - pow(y3, 2); 
    double sx21 = pow(x2, 2) - pow(x1, 2);
    double sy21 = pow(y2, 2) - pow(y1, 2);
    double f = ((sx13) * (x12) + (sy13) * (x12) + (sx21) * (x13) + (sy21) * (x13)) / (2 * ((y31) * (x12) - (y21) * (x13)));
    double g = ((sx13) * (y12) + (sy13) * (y12) + (sx21) * (y13) + (sy21) * (y13)) / (2 * ((x31) * (y12) - (x21) * (y13)));
    double c = -pow(x1, 2) - pow(y1, 2) - 2 * g * x1 - 2 * f * y1;
    // eqn of circle be x^2 + y^2 + 2*g*x + 2*f*y + c = 0
    // where centre is (h = -g, k = -f) and radius r
    xc = -g;
    yc = -f;
    double r2 = xc*xc + yc*yc - c;
    r = sqrt(r2);
}
bool check_all(double x[], double y[], int n, double cx, double cy, double r){
    for(int i=0; i<n; i++){
        if(dist(x[i], y[i], cx, cy) > r)
            return false;
    }
    return true;
}
main_program{
    int n;
    cin >> n;
    initCanvas();
    double x[n], y[n];
    Rectangle r[n];
    for(int i = 0; i < n; i++){
        int c = getClick();
        x[i] = c / 65536;
        y[i] = c % 65536;
        r[i] = Rectangle(x[i], y[i], 5, 5);
        r[i].setColor(COLOR("Red"));
        r[i].setFill(true);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            double r = dist(x[i], y[i], x[j], y[j])/2;
            double xc = (x[i] + x[j]) / 2;
            double yc = (y[i] + y[j]) / 2;
            if(check_all(x, y, n, xc, yc, r)){
                draw_circle(xc, yc, r);
                return 0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                double xc, yc, r;
                get_center_radius(x[i], y[i], x[j], y[j], x[k], y[k], xc, yc, r);
                // cout << xc << " " << yc << " " << r << "\t";
                // cout << check_all(x, y, n, xc, yc, r) << endl;
                if(check_all(x, y, n, xc, yc, r)){
                    draw_circle(xc, yc, r);
                    return 0;
                }
            }
        }
    }
}