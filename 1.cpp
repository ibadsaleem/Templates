//Muhammad Ibad Saleem 19K0220 Task 1


#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

template <class T,class T1>
class Calculate 
{
    T a;
    T1 b;

public:

    Calculate(){}
    Calculate(T i, T1 j)
    {
        a = i;
        b = j;
    }
    float add()
    {
        T sum;
        sum = a + b;
        return sum;
    }

    float subract()
    {
        T difference;
        difference = b - a;
        return difference;
    }

    float divide()
    {
        T quotient;
        quotient = float(a) / float(b);
        return quotient;
    }
    float multiply()
    {
        T product;
        product = a * b;
        return product;
    }
};

int main()
{
    Calculate <int,float> C (100,21.25);
    cout << C.add()<<endl;
    cout << C.subract()<<endl;
    cout << C.divide() << endl;
    cout << C.multiply() << endl;
    // getch();
    //     Calculate <int,int> C1 (100,25);
    //     cout << C.add()<<endl;
    //     cout << C.subract()<<endl;
    //     cout << C.divide() << endl;
    //     cout << C.multiply() << endl;
    // getch();
    //     Calculate <float,float> C2 (100.25,25.5);
    //     cout << C.add()<<endl;
    //     cout << C.subract()<<endl;
    //     cout << C.divide() << endl;
    //     cout << C.multiply() << endl;
    // }
}
