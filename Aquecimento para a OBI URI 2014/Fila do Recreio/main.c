#include <stdio.h>
#include <stdlib.h>
/*
void bubble(long int v[] , int tam){
    int i , j , aux;
    for(j = 0; j < tam ; j++){
        for (i = 0 ; i < tam; i++){
            if(v[i]>v[i+1]){
                    aux = v[i];
                    v[i] = v[i+1];
                    v[i+1] =  aux;
            }
        }
    }
}*/
int main()
{
    int i;
    unsigned int n,m;

    scanf("%u",&n);

    while(n){
        scanf("%u",&m);
        unsigned int v[m];
                for(i = 0 ;i < m ; i++ ){
                    scanf("%u",&v[i]);
                }
            int veses =0,i,j,aux;
             for(j = 0; j < m ; j++){
                for (i = 0 ; i < m; i++){
                    if(v[i] > v[i+1]){
                            aux = v[i];
                            v[i] = v[i+1];
                            v[i+1] =  aux;
                            veses++;
                    }
                }
            }
                printf("%d\n",veses);
                for(i = 0 ;i < m ; i++ ){
                    printf("%d ",v[i]);
                    if (i>=m-1){
                        printf("\n");
                    }
                }
        n--;
        veses=0;
    }

    return 0;
}
