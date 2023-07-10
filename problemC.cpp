#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin >> s;
    int len = 0;
    for (int i = 0 ; i<s.size(); i++){
        if(s[i] == 'A' || len == 0 ){
            ++len;
        }
        else{
            --len;
        }
    }
    cout << len << "\n";
}
int main (){
    int x;
    scanf("%d", &x);
    while(x--){
        soln();
    }
    return 0;
}
