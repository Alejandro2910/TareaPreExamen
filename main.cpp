#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<class A>
A absoluto(A num)//Este método funciona específicamente con operandos que pueden utilizar el operador '<'
{
    if(num<0)
    {
        return (-1*num);
    }
    return num;
}

template<class A>
int deIdenticos(vector<A> values, A val)//Es completamente necesario darle el tamaño del arreglo.
{
    int cuenta=std::count(values.begin(), values.end(), 12);
    return cuenta;
}

template<class A>
void borreIdenticos(vector<A> &values, A val)
{
    typename vector<A>::iterator it;
    cout<<"Afuera"<<endl;
    for(it=values.begin();it!=values.end();it++)
    {
        cout<<"Adentro"<<endl;
        if((*it)==val)
        {
            cout<<"Comparando"<<endl;
            values.erase(it);
        }
    }
}

template<class A>
A sume(multimap<A,int> valores, A llave)
{
    A suma;
    typename multimap<A,int>::iterator iter;
    for(iter=valores.begin();it!=valores.end();it++)
    {
        suma+=(*iter).second;
    }
    return suma;
}

int main()
{
    double n=0;
    vector<int> vect {1, 10, 12, 23, 21, 12, 15, 12, 18, 12, 9, 12};
    vector<int>::iterator iter;
    //int vect[]= {1, 10, 12, 23, 21, 12, 15, 12, 18, 12, 9, 12};
    cout<<"El numero es: ";
    cin>>n;
    cout<<"El valor absoluto de "<<n<<" es: "<<absoluto<double>(n)<<endl;
    cout<<"La cantidad de veces que 12 se repite es: "<<deIdenticos<int>(vect, 12)<<endl;
    borreIdenticos(vect, 12);
    for(iter=vect.begin();iter!=vect.end();iter++){
        cout<<(*iter)<<endl;
    }
    return 0;
}
