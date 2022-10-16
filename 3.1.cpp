#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	string result;

	if (str.length() % 2 != 0){
		result = str.substr(str.length()/2, 1);
	}
	else {
		result = str.substr((str.length()-1)/2, 2);
	}
	cout << result << endl;
	
	return 0;
}
