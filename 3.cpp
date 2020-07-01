//Muhammad Ibad Saleem 19K0220 Task 3

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

template <class T>
class mycontainer{
    T x;
    public:
    mycontainer(){}
    mycontainer(T a)
    {
        x = a;
    }
     T increase(T a)
     {
         if (sizeof(a)==1)
         {
             uppercase(a);
         }
     else{
         a++;
         return a;
     }
     }

    

     char uppercase( char a)
     {
         a++;
         return toupper(a);
     }

};
template <> 
class mycontainer <char>{
    char a;
    public:
         mycontainer(){}
        mycontainer(char b)
        {
            a = b;
        } 
        char uppercase()
        {
            return toupper(a);
        }
};


int main()
{
    mycontainer<int> m(1);
    cout<<m.increase(1);
    mycontainer<float> m1(1.33);
    cout<<m.increase(1.33);
    mycontainer <char> m2('a');
    cout << m2.uppercase();
}


