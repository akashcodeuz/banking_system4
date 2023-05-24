#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s1="akash";
    string s2="akash";
    int n=s1.size();
    vector<int> f1(26),f2(26);
    for(int i=0;i<n;i++){
        f1[s1[i]-'a']+=1;
        f2[s2[i]-'a']+=1;
        
    }
    for(int i=0;i<n;i++){
        cout<<f1[s1[i]-'a']++<<endl;
    }
    


    return 0;
}
