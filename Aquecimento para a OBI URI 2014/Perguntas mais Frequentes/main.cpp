#include <cstdio>

int main( )
{
    unsigned int n,k;

    while(scanf("%u %u",&n,&k), n+k > 0){

        int p[1001]={0},a;

        //FILE *f = fopen("arquivo.txt","r");

           while(n--){

                scanf("%d", &a);
                    p[a]++;
                }
            /*for(int i = 0;i < 101; i++)
                printf("%i ",p[i]);*/

            int maior = 0 , pos = 0, nk=0;

             for(int i = 0; i < 1001; i++){
                        if(maior <= p[i]){
                            maior = p[i];
                            pos = i;
                            nk = p[i];
                        }

            }
           if(nk >= k){
                printf("%i\n",pos);
           }else{
                    puts("0");
                }
    }

    return 0;
}
