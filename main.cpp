#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

float t1,t2;
///Cada vez que recorramos una vuelta en i queremos recorrer una vuelta menos ejn j
vector<int>BubbleSort(vector<int>x)
{
    int aux=0;
    for(int i=1;i<x.size();i++)
    {
        for(int j=0;j<x.size()-i;j++)
        {
            if(x[j]>x[j+1])
            {
                aux=x[j];
                x[j]=x[j+1];
                x[j+1]=aux;
            }
        }

    }

    return x;

}
int main()
{
    vector<int>lista;
    int elemento,size;
    cout<<"Ingrese el Tamanio de su Vector Gracias"<<endl;
    cin>>size;
    elemento=size;
    for(int i=0;i<size;i++)
    {       
        lista.push_back(elemento);
        elemento--;
    }
    t1=clock();
    lista=BubbleSort(lista);
    t2=clock();
    cout<<"tiempo : "<<(t2-t1)/CLK_TCK <<endl;



    return 0;
}
