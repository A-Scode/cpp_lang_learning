#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    fflush(stdin);
    cin>>n;
    fflush(stdin);
    
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit = n&1;

        ans+=(bit*pow(10,i) );

        n=n>>1;
        i++;
    }

    cout<<"answer is: "<<ans<<endl;
}