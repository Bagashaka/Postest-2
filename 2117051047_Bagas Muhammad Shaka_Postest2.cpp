#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/*POST TEST 2	
	  Nama:Bagas Muhammad Shaka
	  Npm :2117051047
	  Kelas :DDP A 2021*/
	
	cout << "Program menghitung nilai fungsi kuadrat" << endl;
	cout << "=======================================" << endl;
	
	//Tipe Data//
	int a;
	int b;
	int c;
	int x;
	int fungsi;
	
	//output//
	cout << "Masukkan nilai a, b, c, dan x : ";
	cin >> a >> b >> c >> x;
	
	//rumus//
	fungsi= (a* pow(x,2)) + (b*x) + c;
	
	//input//
	cout << "Nilai fungsi : " << fungsi << endl;
	
	
	return 0;
	
	
	
	
}
