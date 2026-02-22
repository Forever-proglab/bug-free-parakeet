#include <iostream>;
using namespace std;

int main(){
	int i;
	int p;
	cout << "Kelvins or Celsius?";
	cin>>p;
	if(p==1){
	
		cin >> i;
		cout << i-273;
	}
	else{
		cin >> i;
		cout << i+273;
	}
}