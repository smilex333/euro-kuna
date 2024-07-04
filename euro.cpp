#include<iostream>
using namespace std;

int main()
{
    double kuna, euro=1/7.53450;
    
    cout<<"Upisi kune: ";
    cin>>kuna;
    
    kuna=kuna*0.132722808;

    euro=kuna;
    
    cout<<euro<<" eura"<<endl;
    
    return 0;
}
