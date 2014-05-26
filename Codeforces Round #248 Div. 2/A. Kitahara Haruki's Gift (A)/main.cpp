#include <cstdio>



int n,x,c[2];

int main(){

        for(scanf("%d",&n);n--;scanf("%d",&x),c[x==200]++);
            puts(c[0]&1||!c[0]&&c[1]&1?"NO":"YES");
    return 0;
}
