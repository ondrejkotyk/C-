#include <iostream>
#include <windows.h>

using namespace std;

void funkce(int klic)
{
    int delka;
    cout << "Zadejte slovo/vetu: \n";
    char pismenka[100];
    cin.ignore();
    cin.getline (pismenka,100);
    string lol = pismenka;
    delka = lol.size() - 1;

    char sifra[delka];
    for (int a = 0; a<=delka; a++)
    {
        sifra[a] = pismenka[a] + klic ;
    }
    cout << ">>  ";
    for (int i = 0; i<=delka; i++)
    {
        cout <<sifra[i];
    }
    cout << "  <<";
    cout << "\n";
}


int main()
{
    int rozhodnuti;
    int placeholder;
    cout << "Caesarova sifra\n";
    cout << "1. Zakodovat zpravu\n"
         << "2. Dekodovat zpravu\n";
    cout << ">> ";
    while (rozhodnuti != 1 && rozhodnuti != 2)
    {
        cin >>rozhodnuti;
    }

    if (rozhodnuti == 1)
    {
        funkce(3);

    }

    if (rozhodnuti == 2)
    {
        funkce(-3);
    }
    system("pause");
}
