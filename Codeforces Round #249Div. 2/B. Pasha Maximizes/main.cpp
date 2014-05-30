#include<cstdio>
#include<cstring>


int min(int a,int b){
     if(a<b)
        return a;
        return b;
}
int main()
{
	int l,k;
	char s[20],b;
	scanf("%s",s);
	scanf("%d",&k);
	l=strlen(s);

	if(k==0 || l==1){
		out: ;
		printf("%s",s);
		return 0;
	}

	int j,x1,x2,x,i;
	for(j = 0; j < l; j++){
        int x1=-1;
            for(i = j; i <= min(k+j,l-1); i++){
                x=s[i]-'0';
                if(x>x1)
                {
                    x1=x,x2=i;
                }
            }
            while(x2>j){
                b=s[x2-1];
                s[x2-1]=s[x2];
                s[x2]=b;
                k--;
                x2--;
            }
    }
        printf("%s",s);
	return 0;
}
