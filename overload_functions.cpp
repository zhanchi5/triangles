#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <math.h>

// Проверим, есть ли изменения при добавлении кода
using namespace std;

class Areas
{

float a,b,c,S;   // длины сторон
int q;    // угол в градусах
public:

float Triangle(a,b,q)
{
        S = 1/2 * a * b*sin(q);
        return S;

}
void Triangle(a,b,c)
{
        p = 1/2*(a+b+c);
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        return S;

}

}

Triangle(float a, float b,float c);
Triangle(float a, float b, int q);

int main()
{
        float a,b,c,S;
        int q;

        cout << "Введите длины стороны: "<< endl;
        cout << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        cout << "c= ";
        cin >> c;

        cout << "Введите угол между сторонами a и b в градусах" << endl;
        cout << "q= ";
        cin >> q;
        cout << "S1= " << Triangle(a,b,c) << endl;
        cout << "S2= " << Triangle(a,b,q) << endl;



        cin.get();
        return 0;
}
