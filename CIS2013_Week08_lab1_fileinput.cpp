#include <fstream>
#include <iostream>
using namespace std;

int main(){

	int number = 0;
	int one, two, three, four;
	char cont = 'y';
	char five;
	ifstream in_a;

	in_a.open("numbers.dat");
	if(in_a.fail()){
		cout<< "Something really awful happened here with numbers.dat";
		exit(1);
	}

	in_a >>one>>two>>three;
	in_a >>four;
	in_a >>five;

	cout << "Add our previous numbers are from" << one << " to " << five << endl;
	cout <<"Number total to: " << (one+two+three+four);
	cout << "And our character is: " << five;

	in_a.close();
	
	return 0;
}