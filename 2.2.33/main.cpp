#include <iostream>

using namespace std;

int suma_pieciu(void);
int main()
{
    cout<<"Podaj do 5 nieujemnych liczb calkowitych, a ja policze ich sume. Jeœli chcesz zakoñczyæ program wczesniej, wpisz q: ";
    cout<<"Wynik to: "<<suma_pieciu();
    return 0;
}

int suma_pieciu(void){
    int suma=0;
    unsigned int n=0;
    for (int i=0;i<5;i++){
        cin>>n;
        suma+=n;
        if (n=='q')
            return suma;
    }
    return suma;
}
