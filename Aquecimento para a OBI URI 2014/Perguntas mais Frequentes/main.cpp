#include <cstdio>

int main()
{
    unsigned int n,k;

    while(1){
        scanf("%u %u",&n,&k);
            if(n == 0) return 0;

        int p[1001] = {0},a,z=n,pr[n];

           while(z--){
                scanf("%d", &a);
                    p[a]++;
                }

            int maior = p[0] , pos = 0, nk=0;
             for(int i = 0; i < n; i++){
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
