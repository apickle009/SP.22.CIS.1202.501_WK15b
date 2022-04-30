//Tony Pickle
//SP.22.CIS.1202.501
//4.30.2022

#include <iostream>
#include <cmath>	

using namespace std;

template <typename T>
T half (T mush)
{
	T stash;
	stash = mush / 2;
	return stash; 
}

template <>
int half(int mash)
{
	int stash;
	stash = static_cast<int>(round((float)mash / 2));
	return stash;

}

int main() {

	double a = 14.0;
	float b = 10.0f;
	int c = 9; 

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}