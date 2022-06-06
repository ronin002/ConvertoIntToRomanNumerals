// testing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

auto a = 3125;
auto b = 321231231321315;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = 'd';



string ConvertoIntToRomanNumerals(int value) {

    string retorno;

    string unitNumber[] = { "","I","II","III","IV","V","VI","VII","VIII", "IX","X" };
    string tensNumber[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX", "XC","C" };
    string hundNumber[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC", "CM","M" };
    string thouNumber[] = { "","M","MM","MMM","","","","","", "","" };

    int number = 1000;
    int mil = 0;
    int cem = 0;
    int dez = 0;
    int unit = 0;

    if (value > 1000) {
        mil = value / 1000;
        cout << mil << endl;
        value = value - (mil * 1000);
    }

    if (value > 100) {
        cem = value / 100;
        value = value - (cem * 100);
    }

    if (value > 10) {
        dez = value / 10;
        value = value - (dez * 10);
    }
     
    if (value > 0) {
        unit = value;
    }



    retorno = thouNumber[mil] + hundNumber[cem] + tensNumber[dez] + unitNumber[unit];

    cout << ":" << mil << cem << dez << unit << endl;
    cout << retorno;
    return retorno;
}


int main()
{
    string sName;
    int number = 2022;

    ConvertoIntToRomanNumerals(number);

    /*
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    /

    /*
    int a, b = 5;

    a = 3;
    std::cout << "What's your name!\n" << std::endl;
    cin >> sName;
    cout << "Wellcome Mr(s). " << sName << " a:" << a << "!" << endl;
    
    */

    return (0);
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
