#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stack>

using namespace std;

void reset();
string convert(string s);
string append(string s);
string md5(string s);
int main()
{
	string message;
	cout << "input message:\n";
	while (true){
		
		reset();
		cin >> message;

		string _message = convert(message);

		string a_message = append(_message);

		string final = md5(a_message);

		cout << "The encrypted string is:\n";
		cout << final << endl;

		cout << "To continue, input c; or input q\n";
		string cmd;
		cin >> cmd;
		while(!(cmd == "c" || cmd == "q")){
			cout << "Command wrong!\n";
			cout << "To continue, input c; or input q\n";
			cin >> cmd;
		}
		if (cmd == "q")
			break;
		else
			cout << "input message:\n";
	}

	cout << "----------  md5 ---------------\n";
	cout << "Author: Lao Si 11331158\n";
	cout << "Date: 2013-10-22\n";
	cout << "2013 @ All rights reserved\n";
	cout <<"---------------------------------\n";
	return 0;
}
