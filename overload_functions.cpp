#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cmath>


#define PI 3.14159265



using namespace std;


class Areas
{
public:
    double Triangle(float a,float b, float q)
    {
        0.5*a*b*sin(q * PI/180);
        return 0.5 * a * b * sin(q * PI/180);

    }

    double Triangle(float a, float b,float c, float p)
    {
        p = (0.5*(a+b+c));
        sqrt(p*(p-a)*(p-b)*(p-c));
        return sqrt(p*(p-a)*(p-b)*(p-c));

    }

};


int main()
{
   
    float a = 0,b = 0,c = 0, p;
    int q = 0;
    Areas S1,S2;

    cout << "Введите длины стороны: "<< endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    S1.Triangle(a,b,c,p);
    S2.Triangle(a,b,q);

    cout << "Введите угол между сторонами a и b в градусах" << endl;
    cout << "q= ";
    cin >> q;
    cout << "S1= " << S1.Triangle(a,b,c,p) << endl;
    cout << "S2= " << S2.Triangle(a,b,q) << endl;



    cin.get();
    return 0;
}
