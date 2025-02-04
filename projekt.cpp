#include<iostream>
using namespace std;

bool czy_pierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
	int liczba;
	cin>>liczba;
	
    	if (liczba <= 0) {
        	cout << "Blad: liczba musi byc dodatnia" << endl;
        	return 1;
    	}
	cout << liczba << " jest " << (czy_pierwsza(liczba) ? "pierwsza" : "zlozona") << endl;
	return 0;
}
