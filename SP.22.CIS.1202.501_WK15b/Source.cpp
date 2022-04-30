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
	stash = mash / 2;
	round(static_cast<int>(stash));
	return stash;

}

int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3; 

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}