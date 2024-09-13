#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    // hibás név -> N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  // '' karakterek helyett "" karakterek kellenek a string elé és mögé
    for (int i = 0;)    // a for ciklusban mind a 3 ; karaktert ki kell írni, még ha nem is használjuk a többi paramétert
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // az atlag változó adattípusa legyen inkább double a tört átlegértékek miatt + inicializálni is kellene 0-val!
    for (int i = 0; i < N_ELEMENTS, i++)    // N_ELEMENTS után ; a , helyett!
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
