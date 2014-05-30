#include <cstdio>



int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int ar[n];
    int count=1;
    long long int sum=0;

    for(int i = 0; i < n; i++)
        scanf("%i",&ar[i]);

    for(int i = 0; i < n; i++){

        if(sum+ar[i]<=m)
        {
            sum+= ar[i];
        }
        else
        {
            count++;
            sum = ar[i];
        }
    }

        printf("%i",count);



    return 0;
}
