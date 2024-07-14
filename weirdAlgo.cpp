#include<iostream>
#include<algorithm>
using namespace std;
void algo(int n){
    while(n!=1){

        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n=3*n+1;
            cout<<n<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    algo(n);
    return 0;
} 