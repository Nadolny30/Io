#include<iostream>
using namespace std;
int main()
{
	int liczba;
	cin>>liczba;
	if (liczba <= 0) {
        cout << "Blad: liczba musi byc dodatnia" << endl;
        return 1;
   	 }
	cout<<liczba<<endl;
	return 0;
}
