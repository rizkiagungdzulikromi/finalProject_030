#include <iostream>
using namespace std;

class Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	Matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	};

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	void setActivity(float nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise = nilai;
	}

	float getExercise() {
		return exercise;
	}

	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}
};

class pemrograman :public Matakuliah {
public:
	void input() {
		int s;
		cout << "Nilai Pemrograman" << endl;
		cout << "Masukkan nilai presensi : ";
		cin >> s;
		setX(s);
	}

	float Luas(int a) {
		return a * a;
	}

	float Keliling(int a) {
		return 4 * a;
	}
};


int main()
{
	Mahasiswa mhs;

	cout << "Masukkan presensi = ";
	cin >> mhs.presensi;
	cout << "Masukkan a tivity = ";

}