#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main()
{
    int n,cont=0;

    cin>>n;

    string a;

    while(n){

        cin>>a;
        cin.get();
        for(int i=0 ; i <sizeof(a)+1 ;i++){
            if(a[i]== 'a'){
                cont++;
            }else if(a[i]== 'b'){
                cont++;
            }else if(a[i]== 'c'){
                cont++;
            }else if(a[i]== 'd'){
                cont++;
            }else if(a[i]== 'e'){
                cont++;
            }else if(a[i]== 'f'){
                cont++;
            }else if(a[i]== 'g'){
                cont++;
            }else if(a[i]== 'h'){
                cont++;
            }else if(a[i]== 'i'){
                cont++;
            }else if(a[i]== 'j'){
                cont++;
            }else if(a[i]== 'l'){
                cont++;
            }else if(a[i]== 'k'){
                cont++;
            }else if(a[i]== 'm'){
                cont++;
            }else if(a[i]== 'n'){
                cont++;
            }else if(a[i]== 'o'){
                cont++;
            }else if(a[i]== 'p'){
                cont++;
            }else if(a[i]== 'q'){
                cont++;
            }else if(a[i]== 'r'){
                cont++;
            }else if(a[i]== 's'){
                cont++;
            }else if(a[i]== 't'){
                cont++;
            }else if(a[i]== 'u'){
                cont++;
            }else if(a[i]== 'v'){
                cont++;
            }else if(a[i]== 'z'){
                cont++;
            }else if(a[i]== 'z'){
                cont++;
            }else if(a[i]== 'w'){
                cont++;
            }else if(a[i]== 'y'){
                cont++;
            }

        }
       if(cont >= 26){
            cout<<"frase completa"<<endl;
            getchar();
        }else if(cont >= 13 && cont < 26){
            cout<<"frase quase completa"<<endl;
            getchar();
        }else{
           cout<<"frase mal elaborada"<<endl;
           getchar();
        }

        n--;
    }
    cout<<cont;
    return 0;
}
