#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter number to find it's binary form: ";
    cin>>n;
    int i=0, ans=0;
    while(n!=0){
        int rem=n%2;
        ans=(rem*pow(10,i))+ans;
        i++;
        n=n/2;
    }
    cout<<"Required binary number is: "<<ans;
}