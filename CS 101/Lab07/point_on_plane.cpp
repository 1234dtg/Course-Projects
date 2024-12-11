#include <simplecpp>
bool point_on_plane(
    double *p1_x, double *p1_y, double *p1_z,
    double *p2_x, double *p2_y, double *p2_z,
    double *p3_x, double *p3_y, double *p3_z,
    double *q_x, double *q_y, double *q_z,
    double *dist)
{
    // vector p1p2
    double v12_x = (*p2_x) - (*p1_x);
    double v12_y = (*p2_y) - (*p1_y);
    double v12_z = (*p2_z) - (*p1_z);
    // vector p1p3
    double v13_x = (*p3_x) - (*p1_x);
    double v13_y = (*p3_y) - (*p1_y);
    double v13_z = (*p3_z) - (*p1_z);
    // equation of plane: ax + by + cz + d = 0
    double a = v12_y * v13_z - v12_z * v13_y;
    double b = v12_z * v13_x - v12_x * v13_z;
    double c = v12_x * v13_y - v12_y * v13_x;
    double d = -(a * (*p1_x) + b * (*p1_y) + c * (*p1_z));
    *dist = fabs(a * (*q_x) + b * (*q_y) + c * (*q_z) + d) / sqrt(a * a + b * b + c * c);
    if (*dist < 1e-6)
        return true;
    return false;
}
main_program
{
    double p1_x, p1_y, p1_z, p2_x, p2_y, p2_z, p3_x, p3_y, p3_z, q_x, q_y, q_z, d;
    cin >> p1_x >> p1_y >> p1_z >> p2_x >> p2_y >> p2_z >> p3_x >> p3_y >> p3_z >> q_x >> q_y >> q_z;
    bool is_on_plane = point_on_plane(&p1_x, &p1_y, &p1_z, &p2_x, &p2_y, &p2_z, &p3_x, &p3_y, &p3_z, &q_x, &q_y, &q_z, &d);
    int result = 0;
    if (is_on_plane)
    {
        result = 1;
    }
    cout << fixed;
    cout.precision(2);
    cout << result << ' ' << d << endl;
}