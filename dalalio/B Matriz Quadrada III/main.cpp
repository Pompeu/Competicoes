#include <cstdio>
#include <cmath>

int main()
{
    unsigned int n;

       while(scanf("%u",&n), n > 0){

       if(n == 1)
            puts("1");
            else if(n == 2){
                    puts("1 2");
                    puts("2 4");
            }
            else{
                int mat[n][n];
                    for(int i = 0 ; i < n; i++){
                        for(int j = 0; j < n; j++){
                            if( i == 0 && j == 0){
                                mat[i][j] =  1;
                            }
                            if(j > 0 ){
                                    mat[i][j] = 2 * mat[i][j-1];
                            }
                            if(i > 0 ){
                                    mat[i][j] = 2 * mat[i-1][j];
                            }
                        }
                    }
                    int t;
                    if(n <= 4)t = 2;
                    else if(n == 5) t = 3;
                    else if(n >= 6 && n <= 7)t = 4;
                    else if(n >= 8 && n <= 9)t = 5;
                    else if(n == 10)t = 6;
                    else if(n >= 11 && n <= 12)t = 7;
                    else if(n >= 13 && n <= 14)t = 8;
                    else if(n = 15 )t = 9;

                        for(int i = 0 ; i < n; i++){
                            for(int j = 0; j < n; j++){
                                    if (j < n-1)printf("%*d ",t,mat[i][j]);
                                    else printf("%*d",t,mat[i][j]);
                            }
                            printf("\n");
                        }
            }
            printf("\n");
        }
    return 0;
}
