//To check if a given number is palindrome or not
#include<bits/stdc++.h>
using namespace std;

bool PalindromeNum(int n){
    int num=n;
    //Reverse and compare
    int revNum = 0;
    while(num!=0){
        revNum=revNum*10+num%10;
        num=num/10;
    }

    if(revNum==n) return 1;
    else return 0;
}
 
int main() {
int n;
cout<<"Enter a number: ";
cin>>n;
cout<<PalindromeNum(n);

return 0;
}