/*          A. Black Square
**
**          Codeforces Round #247 (Div. 2)
**
**          Itacir Ferreira Pompeu
**
**          Intituto Federal Goiano Campus morrinhos
**
**          21/05/2014  13 : 45;
*/


#include <cstdio>
#include <cstdlib>
#include <cstring>


int main()
{
    long int a1,a2,a3,a4; //primeira variaves que reber os valores das casas
    long int c1,c2,c3,c4; //contadores que seram incrementados no final
    char s[100000];


    scanf("%li %li %li %li",&a1,&a2,&a3,&a4);

    scanf("%s",s);

    long int n = strlen(s);
    unsigned long long int v[n];//novo ve de interiso longs sem sinais para receber os valores da string

/*crianado o laço que converte os carctes para inteiros*/
    for(char i = 0 ; s[i] != '\0' ; i++ ){
        if(s[i] == 48) v[i] = 0;
        if(s[i] == 49) v[i] = 1;
        if(s[i] == 50) v[i] = 2;
        if(s[i] == 51) v[i] = 3;
        if(s[i] == 52) v[i] = 4;
        if(s[i] == 53) v[i] = 5;
        if(s[i] == 54) v[i] = 6;
        if(s[i] == 55) v[i] = 7;
        if(s[i] == 56) v[i] = 8;
        if(s[i] == 57) v[i] = 9;
    }
    c1=c2=c3=c4=0;// inicializando os contadores
     for(char i = 0 ; s[i] != '\0' ; i++ ){ /*laço que irar incrementar os contadores*/
                if(v[i] == 1)      c1 += a1;
                else if(v[i] == 2) c2 += a2;
                else if(v[i] == 3) c3 += a3;
                else if(v[i] == 4) c4 += a4;
    }
    printf("%li\n",c1+c2+c3+c4);

    return 0;
}
