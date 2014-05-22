#include <iostream>
#include <math.h>

using namespace std;

double rafael(double a, double b){

    return pow(a*3,2)+ pow(b,2);
}

double beto(double a, double b){

   return 2*pow(a,2) + pow(5*b,2);

}
double carlos(double a, double b){
    return (-100*a) + pow(b,3);
}


int main()
{
    unsigned int n,x,y;
    long int a,b,c,vet[3];


    cin>>n;

    while(n){

            cin>>x>>y;

        a = rafael(x,y);
        b = beto(x,y);
        c = carlos(x,y);


       if(a > b && a > c){
            cout<<"Rafael ganhou"<<endl;
       }else if (b > a && b > c){
            cout<<"Beto ganhou"<<endl;
       }else {
           cout<<"Carlos ganhou"<<endl;
       }

        n--;

    }

    return 0;
}
