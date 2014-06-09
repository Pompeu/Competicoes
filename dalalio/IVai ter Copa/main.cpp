#include <cstdio>

int main()
{
    unsigned int n;

    while(scanf("%u",&n) != EOF){

        if(n == 0){
            puts("vai ter copa!");
        }else{
            puts("vai ter duas!");
        }
    }
    return 0;
}
