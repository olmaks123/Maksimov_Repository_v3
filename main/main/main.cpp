// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int EnterNumberA()
{
    int num_a;
    std::cin >> num_a;
    return num_a;
}

int EnterNumberB()
{
    int num_b;
    std::cin >> num_b;
    return num_b;
}

int EnterNumberC()
{
    
}

int Ostatok(int num_a,int num_b,int num_c)
{

}

int CelayaChast(int num_a, int num_b, int num_c)
{

}

int main()
{
    int i,a1,b1,c1;
    std::cout << "1.Enter a number A";
    std::cout << "2.Enter a number B";
    std::cout << "3.Enter a number C";
    std::cout << "4.Ostatok ot (A+B)/C";
    std::cout << "5.Celaya chast ot (A+B)/C";
    std::cout << "Please enter the number of the desired function or 0 if you want to close the app";
    i = 1;
    while ((i != 0) & (i <= 5))
    {
        std::cin >> i;
        switch (i)
        {
        case 1:
        {
            a1 = EnterNumberA();
            break;
        }
        case 2:
        {
            b1 = EnterNumberB();
            break;
        }
        case 3:
        {
            c1 = EnterNumberC();
            break;
        }
        case 4:
        {
            Ostatok(a1, b1, c1);
            break;
        }
        case 5:
        {
            CelayaChast(a1, b1, c1);
            break;
        }
        default:
        {
            break;
        }
        }
    } 
}


