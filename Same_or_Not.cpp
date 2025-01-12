#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>n;
    queue<int>m;
    int s1,s2;
    cin>>s1>>s2;
    for(int i = 0;i<s1;i++){
        int x;
        cin>>x;
        n.push(x);
    }
    for(int i = 0;i<s2;i++){
        int x;
        cin>>x;
        m.push(x);

    }
    bool check = true;
    if(s1!=s2){
        cout<<"NO";
        return 0;
    }
    else{
        while(!n.empty() && !m.empty()){
            int x,y;
            x = n.top();
            y = m.front();
            n.pop();
            m.pop();
            if(x!=y){
                check = false;
                break;
            }
            
        }
    }
    if(check){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}