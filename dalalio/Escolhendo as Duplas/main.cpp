#include <cstdio>



int main()
{
    unsigned int n;

    while(scanf("%u",&n) != EOF){
        unsigned int v[n];

        for(int i = 0; i < n; i++){
            scanf("%d",&v[i]);
        }

        if(n%2 != 0) puts("IMPOSSIBLE");
    }
    return 0;
}
