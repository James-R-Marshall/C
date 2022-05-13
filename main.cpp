#include <iostream>
#include "sort.h"

using namespace std;

int main(){

	cout<<"hello world" << endl;
	int a[] = {1,4,7,3,5};
	Sort s = Sort();
	s.print(a,5);
	s.bubble(a,5);
	s.print(a,5);
	return 0;
}

