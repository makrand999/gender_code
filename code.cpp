#include <bits/stdc++.h>

using namespace std;

int main (){
string a,b;
while(1){
cin >> a;
int i=a[a.size()-1];
if(i==105||(i==97&&!(a[2]==105||a[2]==117)||a[2]==106))cout << "girl"<<endl;
else cout<<"boy"<<endl;
}

return 0;
}