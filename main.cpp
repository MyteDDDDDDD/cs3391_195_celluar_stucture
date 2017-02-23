#include <iostream>
#include <string>
using namespace std;


string calChain(string s) {
	int l = s.length();

	if (l == 1 ) {
		if (s == "A")
			return "SIMPLE";
		else
			return "MUTANT";
	}
	else if (l > 2) {
		if (s[0] == 'B'&&s[l - 1] == 'A') {
			if (calChain(s.substr(1, l - 2)) != "MUTANT")
				return "MUTAGENIC";
			else
				return "MUTANT";
		}
		else if (s[l - 2] == 'A'&&s[l - 1] == 'B') {
			if (calChain(s.substr(0, l - 2)) != "MUTANT")
				return "FULLY-GROWN";
			else
				return "MUTANT";
		}
		else
			return "MUTANT";

	}
	else
		return "MUTANT";
}

int main() {
	int count = 0;
	string *out;

	cin >> count;

	out = new string[count];

	for (int i = 0; i < count; i++) {
		string s;
		cin >> s;

		out[i] = calChain(s);

	}

	for (int i = 0; i < count; i++) {
		cout << out[i] << endl;
	}

	return 0;
}
