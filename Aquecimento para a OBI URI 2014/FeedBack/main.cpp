#include <iostream>

using namespace std;

int main()
{
    int n,f;

    cin>>n;

    while(n){
        cin>>f;
        int caso[f];
        for(int i = 0; i < f ;i ++){
            cin>>caso[i];
        }
        for(int i = 0; i < f ;i ++){
                if(caso[i]==1){
                    cout<<"Rolien"<<endl;
                }else if(caso[i]==2){
                    cout<<"Naej"<<endl;
                }else if(caso[i]==3){
                    cout<<"Elehcim"<<endl;
                }else if(caso[i]==4){
                    cout<<"Odranoel"<<endl;
                }

        }

        n--;
    }

    return 0;
}
