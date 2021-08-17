#include <iostream>
#include <string>

using namespace std;

void solve(){
    
       string mystr="";
       
        cin>>mystr;
        int n=mystr.length();
        int i=0;
        while (i<=n){
            
            if (mystr.substr(i,4)=="xxxx")
            {
                mystr.replace(i,4,"1010");
           }i++;
        }
        cout<<mystr<<endl;
        
    }


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}