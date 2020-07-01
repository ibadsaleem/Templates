//Muhammad Ibad Saleem 19K0220 Task 2


#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

template <class T , class T1>
void swap(T &X , T1 &Y){

    T temp;
    temp = X;
    X = Y;
    Y= temp;

}


int main(){
    int a = 2;
    int b = 3;
    cout << "Before Swapping" << endl;
    cout<<"a = " << a << endl;
    cout <<"b = " << b << endl;
    swap(a , b);
    cout << "After Swapping" << endl;
    cout<<"a = " << a << endl;
    cout <<"b = " << b << endl;
    

}