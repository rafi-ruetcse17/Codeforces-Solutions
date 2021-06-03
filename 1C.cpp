#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
double eps = 1e-4;
double gcd(double x, double y) {
    while (fabs(x) > eps && fabs(y) > eps) {
        if (x > y)
                x -= floor(x / y) * y;
        else
                y -= floor(y / x) * x;
    }
    return x + y;
}
int main()
{
    double a[3],b[3];

    for(int i=0;i<3;i++)
    {
        cin >> a[i] >> b[i];
    }

    double ab= sqrt((a[0]-a[1])*(a[0]-a[1])+(b[0]-b[1])*(b[0]-b[1]));
    double bc= sqrt((a[1]-a[2])*(a[1]-a[2])+(b[1]-b[2])*(b[1]-b[2]));
    double ca= sqrt((a[0]-a[2])*(a[0]-a[2])+(b[0]-b[2])*(b[0]-b[2]));

    double s = (ab+bc+ca)/2.0;

    double area_traingle = sqrt(s*(s-ab)*(s-bc)*(s-ca));

    double r = (ab*bc*ca)/(4*area_traingle); // circum_circle_radius
    //cout << ab << " " << bc << " " << ca << endl;
    double A = acos((bc*bc+ca*ca-ab*ab)/(2*bc*ca));
    double B = acos((ab*ab+ca*ca-bc*bc)/(2*ab*ca));
    double C = acos((ab*ab+bc*bc-ca*ca)/(2*ab*bc));
    //cout << A << " " << B << " " << C << endl;
    double n = pi/gcd(gcd(A,B),C);

    //cout << r << endl;

    double area = (n*r*r*sin(2*pi/n))/2.0;

    printf("%.10lf\n",area);

}
