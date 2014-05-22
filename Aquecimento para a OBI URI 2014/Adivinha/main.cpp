#include <iostream>

using namespace std;



int main()
{
    unsigned long int n,qt,s;

    cin>>n;


    while(n){
        inicio:
        cin>>qt>>s;

        int v[qt],vet[qt],vet2[qt];
            for(int i=0; i< qt; i++){
                cin>>v[i];
                vet[i]=0;
                vet2[i]=0;
            }
                for(int i=0; i< qt; i++){
                    if(v[i]==s){
                        cout<<i+1<<endl;
                        n--;
                        goto inicio;
                    }else if(s+v[i] > s+s){
                        vet[i]=v[i];
                    }else if(s+v[i] < s+s){
                        vet2[i]=v[i];
                    }
                }
            unsigned long int maior = vet[0],maior2 = vet2[0];
                for(int i=0; i< qt; i++){
                    if(maior < vet[i]){
                        maior = vet[i];
                    }
                     if(maior2 < vet2[i]){
                        maior2 = vet2[i];
                    }
                }

            unsigned long int menor = maior, menor2 = maior2;
                for(int i=0; i< qt; i++){
                    if(menor > vet[i] && vet[i] != 0){
                        menor = vet[i];
                    }
                    if(menor2 < vet2[i] && vet2[i] != 0){
                        menor2 = vet2[i];
                    }

                }


            for(int i = 0; i< qt; i++){
                if(menor == v[i] && menor > menor2){
                    cout<<i+1<<endl;
                }
            }
            for(int i = 0; i < qt; i++){
                if(menor2 == v[i] && menor2 > menor){
                    cout<<i+1<<endl;
                }
            }

        n--;

    }


    return 0;
}
