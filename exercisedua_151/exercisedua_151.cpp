#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;

	pengarang(string pNama) :nama(pNama) {

	}

	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class buku {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;

	buku(string pNama) :nama(pNama) {
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakPengarang() {
	cout << "Daftar penerbit yang diikuti\"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}
void pengarang::cetakPenerbit() {
	cout << "Daftar pengarang pada penerbit\"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void buku::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void buku::cetakPengarang() {
	cout << "Daftar buku yang dikarang\"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
int main() {
	pengarang* varPengarang1 = new pengarang("Gama Pres");
	pengarang* varPengarang2 = new pengarang("Intan Pariwara");
	pengarang* varPengarang3 = new pengarang("Fisika\n""Algoritma\n");
	pengarang* varPengarang4 = new pengarang("Basisdata");
	pengarang* varPengarang5 = new pengarang("Dasar Pemrograman");
	pengarang* varPengarang6 = new pengarang("Matematika\n""Multimedia 1\n");
	pengarang* varPengarang7 = new pengarang("Gama Pres\n""Intan Pariwara\n");

	penerbit* varPenerbit1 = new penerbit("Joko\n""Lia\n""Giga\n");
	penerbit* varPenerbit2 = new penerbit("Asroni\n""Giga\n");
	penerbit* varPenerbit3 = new penerbit("Giga");


	buku* varBuku1 = new buku("Joko");
	buku* varBuku2 = new buku("Lia");
	buku* varBuku3 = new buku("Asroni");
	buku* varBuku4 = new buku("Giga");
	
	varPengarang1->tambahPenerbit(varPenerbit1);
	varPengarang2->tambahPenerbit(varPenerbit2);


	varPengarang1->cetakPenerbit();
	varPengarang2->cetakPenerbit();

	varPenerbit3->tambahPengarang(varPengarang7);
	varPenerbit3->cetakPengarang();


	varBuku1->tambahPengarang(varPengarang3);
	varBuku2->tambahPengarang(varPengarang4);
	varBuku3->tambahPengarang(varPengarang5);
	varBuku4->tambahPengarang(varPengarang6);


	varBuku1->cetakPengarang();
	varBuku2->cetakPengarang();
	varBuku3->cetakPengarang();
	varBuku4->cetakPengarang();


	return 0;
}
