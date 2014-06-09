#include <cstdio>
#include <cmath>

int main()
{
    unsigned int n,i,j,n1,n2;

    while(scanf("%u",&n) != EOF){
         i = j = 1;

         while(1){
            n1 = pow(i,2);
            n2 = pow (j,2);
            if(n1 > n){puts("NO");break;}
            if(n1 + n2 == n){ puts("YES"); break;}

            else{
                j++;
                if(j*j >= n){
                    i++;
                    j = 1;
                }
            }
         }
    }
    return 0;
}
