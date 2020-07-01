// Muhammad Ibad Saleem 19K0220 Task 4


#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Inventory
{
    int itemcode;
    char description[100];
    float rateunit;
    int totalunits;
    public:
        Inventory() { itemcode = 0; }
        void getproducts()
        {
            cout << "Enter Code: ";
            cin >> itemcode;
            cin.ignore();
            cout << "Enter Description: ";
            cin.getline(description, 100);
            cin.ignore();
            cout << "Enter Rate Per Unit: ";
            cin >> rateunit;
            cout << "Enter Total Units: ";
            cin >> totalunits;
    }

    void showprod()
    {
        cout << "\nCode: " << itemcode;
        cout << "\tDescription: " << description;
        cout << "\tRate/unit: " << rateunit;
        cout << "\tTotal Units: " << totalunits;
        
    }

int storeprod()
{
    if (itemcode==0 )
    {
        cout << "PRODUCT NOT INITIALISED";
        return 0;
    }
    else
    {
        ofstream fout;
        fout.open("Inventory.dat",ios::app);
        fout.write((char *)this, sizeof(*this));
        //fout << endl;
        fout.close();
        return 1;
    }
    
}

void details()
{
    ifstream fin;
    fin.open("Inventory.dat", ios::in);
    if(!fin)
    {
        cout << "File Not Opened!";
    }
    else
    {
        fin.read((char *)this, sizeof(*this));
        while(!fin.eof())
        {
            showprod();
            cout << endl;
            fin.read((char *)this, sizeof(*this));
        }
        
    }
    fin.close();
}

void details(int code)
{
    ifstream fin;
    int count = 0;
    fin.open("Inventory.dat", ios::in);
    if(!fin)
    {
        cout << "File Not Opened!";
    }
    else
    {
        fin.read((char *)this, sizeof(*this));
        while(!fin.eof())
        {
            if (itemcode==code)
            {
            showprod();
            cout << endl;
            count++;
            }
            fin.read((char *)this, sizeof(*this));
        }
        if (count==0)
        {
            cout << "Record Not Found";
        }
        
    }
    fin.close();
}

void updatepro(int code1)
{
    fstream file;
    file.open("Inventory.dat", ios::in | ios::out | ios::ate);
    file.seekg(0); //used seekg function inorder to bring file pointer to the starting(0th bit)
    file.read((char *)this, sizeof(*this));
    while(!file.eof())
    {
        int a = file.tellp();
        if (itemcode==code1)
        {
            getproducts();
            file.seekp(a - sizeof(*this));   //seekp function to bring back the pointer to 
            file.write((char *)this, sizeof(*this));    //the location where it was being edited
        }                                               //tellp function telling us the current position
        file.read((char *)this, sizeof(*this));
    }

}


};
// void Inventory::updatepro(int code)
// {
//     Inventory temp;
//     fstream file;
//     file.open("Inventory.dat", ios::in | ios::out | ios::ate);
//     file.seekg(0); //used seekg function inorder to bring file pointer to the starting(0th bit)
//     file.read((char *)this, sizeof(this));
//     while(!file.eof())
//     {
//         int a = file.tellp();
//         if (itemcode==code)
//         {
//             getproducts();
//             file.seekp(a- sizeof(this));   //seekp function to bring back the pointer to 
//             file.write((char *)this, sizeof(this));    //the location where it was being edited
//         }       
//         else{}                                        //tellp function telling us the current position
//         file.read((char *)this, sizeof(this));
//     }

// }



int main()
{
    Inventory I1,I2,I3,I4,I5;
    // I1.getproducts();
    // I1.storeprod();
    // getch();
    // cout << endl;
    // I2.getproducts();
    // I2.storeprod();
    // getch();
    // cout << endl;
    // I3.getproducts();
    // I3.storeprod();
    // getch();
    // cout << endl;
    // I4.getproducts();
    // I4.storeprod();
    //     getch();

    // cout << endl;
    // I5.getproducts();
    // I5.storeprod();
    //     getch();

    // cout << endl;
    while(1)
    {
        system("cls");
        char a;
        cout << "Choose Option\n1)Display All Records\n2)Display By ItemCode\n3)Edit Record\nE to Exit! ";
        a = getch();
        if (a=='1')
        {
            system("cls");
            I1.details();
            getch();
                }
        else if (a=='2')
        {
            system("cls");
            int code;
            cout << "Enter Code: ";
            cin >> code;
            I1.details(code);
            getch();
        }
        else if (a=='3')
        {
            system("cls");
            int code1=0;
            cout << "Enter Code: ";
            cin >> code1;
            I1.updatepro(code1);
            getch();
        }
        else if (toupper(a)=='E')
        {
            exit(1);
        }
        else {
            cout << "Wrong Input!!";
        }

    }
    return 0;
 }