//Muhammad Ibad Saleem 19K0220 Task 5



#include<iostream>
#include <conio.h>
using namespace std;

template<class T>

void bubble(T arr[] , int size){

    for(int i = 0 ; i <  size ; i++)
    {
        for(int j = 0 ; j < size-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                T temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;


            }

        }


    }

}

int main()
{
    int arr1[7] = {7, 5, 4, 3, 9, 8, 6};
    float arr2[5] = {4.3, 2.5, -0.9, 100.2, 3.0};
    //for int (i)
    bubble(arr1, 7);
    //for float (ii)
    for (int i = 0; i<7;i++)
    {
        cout << arr1[i] << "  ";
    }
    cout << "\n\n\n";
    getch();
    bubble(arr2, 5);
        for (int i = 0; i<5;i++)
    {
        cout << arr2[i] << "  ";
    }


}
