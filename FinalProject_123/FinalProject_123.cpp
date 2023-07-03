#include<iostream>
using namespace std;

class matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() {
		return 0;
	}
	virtual void cekKelulusan() {
		return 0;
	}
	virtual void input() { 
		return 0;
	}


	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}

	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}
	
	void setE(float nilai) {
		this->exercise = nilai;
	}
	float getE() {
		return exercise;
	}
	
	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getUA() {
		return tugasAkhir;
	}
	
};

class pemograman :public matakuliah {
public: 
	
	void input() {
		cout << "Program dibuat" << endl;
		cout << "Masukan nilai presensi: ";
		int p;
		cin >> p;
		setPresensi(p);
		cout << "Masukan nilai Activity: ";
		int a;
		cin >> a;
		setA(a);
		cout << "Masukan nilai Exercise: ";
		int e;
		cin >> e;
		setE(e);
		cout << "Masukan nilai Tugas Akhir: "; 
		int ua;
		cin >> ua;
		setUA(ua);
	}
	
	string kelulusan(float nilaiAkhir) {
		if (nilaiAkhir > 75)
			return "selamaat, Anda Lulus dimata kuliah pemograman";
		else
			return "Tidak lulus";
	}
};

int main() {

	matakuliah* mk;
	pemograman pmgrm;


	mk = &pmgrm;
	mk->input();

	return 0;

}