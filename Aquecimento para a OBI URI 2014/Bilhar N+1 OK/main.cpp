#include <cstdio>
#include <cmath>

int main()
{
  int c,n;

    scanf("%i ",&c);

  while(c--){

    scanf("%i",&n);
    int vx,vy,c1[n],c2[n];
    float v[n];


    scanf("%i %i",&vx,&vy);
    for(int i = 0 ; i < n;i++){
        scanf("%i %i",&c1[i],&c2[i]);
    }
     for(int i = 0 ; i < n;i++){
        c1[i] -=  vx;
        c2[i] -=  vy;
        c1[i] = c1[i] * c1[i];
        c2[i] = c2[i] * c2[i];
        v[i] = sqrt(c1[i]+c2[i]);
     }

    float menor = v[0];

    int pos = 1;

        for(int i = 0 ; i < n;i++){
            if(menor > v[i]){
                menor = v[i];
                pos = i+1;
            }
        }

        printf("%i\n",pos);

  }

    return 0;
}
