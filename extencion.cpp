#include <iostream>

using namespace std;

int main()
{
    int E,P,A,N,R;
    cout<<"Ingresa la edad: ";
    cin>>E;
    cout<<"\nIngresa el peso: ";
    cin>>P;
    cout<<"\nIngresa la altura en cm: ";
    cin>>A;
    cout<<"\nIngresa el genero: 1/Masculino == 2/Femenino: ";
    cin>>N;
    if(N==1)
    {
        R=66+(13.7*P)+(5*A)-(6.75*E);

        cout<<"\nEl resultado es: "<<R<<"\n";
    }
    else
    {
        R=65+(9.96*P)+(1.8*A)+(4.67*E);

        cout<<"\nEl resultado es: "<<R<<"\n";
    }
	return 0;
}

