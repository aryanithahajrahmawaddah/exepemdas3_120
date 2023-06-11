#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar(int x) {
		x = 0;
	}

	virtual void input() {
		cout << "\nLingkaran dibuat: " << endl;
		cout << "\n"
	}
	virtual float Luas(int a) {
		cout << "Masukan Luas Lingkaran :";
		
		return 0; 
	}
	virtual float Keliling(int a) {
		
		return 0; }
	virtual setX(int a) {
		this->x = a;
	}
	int getX(int K, int L) {
		return K + L;
	}
};

class Lingkaran:public bidangDatar{
public:
	int x;

	Lingkaran(int keliling);

};

class Bujursangkar:public bidangDatar{
public:
	int x;

	Bujursangkar(int x);
};

int main() {
}