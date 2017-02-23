#include <iostream>
#include <string>
using namespace std;

bool ifMutant(string s) {
	return true;
}

string calChain(string s) {
	int l = s.length();
	if (l == 1 && s == "A")
		return "SIMPLE";
	else if (l > 1 && s[0] == 'B'&&s[l - 1] == 'A') {
		if (ifMutant(s.substr(0, l - 2)))
			return "MUTAGENIC";
		else
			return "MUTANT";
	}

		
	
		
	
}

int main() {
	int count=0;
	string *out;

	cin >> count;
	
	out = new string[count];

	for (int i = 0; i < count; i++) {
		string s;
		cin >> s;
	
		out[i] = calChain(s);

	}

	for (int i = 0; i < count; i++) {
		cout << out[i]<<endl;
	}

	return 0;
}
