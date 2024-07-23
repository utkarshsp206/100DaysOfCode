#include<bits/stdc++.h>
using namespace std;

bool isRotateString(string s, string goal){
    if(s.length()!=goal.length()) return false;
    s+=s;
    if(s.find(goal)<s.length()) return true;
    return false; 
}
 
int main() {
string s = "abcde";
string goal = "cdeab";

cout<<isRotateString(s,goal);

return 0;
}