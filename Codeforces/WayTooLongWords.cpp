#include <iostream>
using namespace std;

int main(){
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		string s;
		cin >> s;
		if(s.length() > 10){
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}
	return 0;
}
