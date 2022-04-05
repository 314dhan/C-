#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string pasien, input;
	int uang, pendaftaran, bPemeriksaan, obat = 20000;
	double pajak, tBiaya;
	string nama;
	
	
	while(true){
	
	cout << "masukan nama anda: ";
	cin >> nama;
	cout << "masukan jenis pasien (bpjs/umum/asuransi): ";
	cin >> pasien;
	
		if(pasien == "bpjs"){
			pendaftaran = 0;
			cout << "biaya pendaftaran: " << pendaftaran << endl;
			bPemeriksaan = 50000;
			cout << "biaya Pemeriksaan: " << bPemeriksaan << endl;
			obat = obat / 2;
			cout << "biaya obat: " << obat << endl;
			pajak = (bPemeriksaan + obat) * 0.05;
			cout << "biaya pajak: " << pajak << endl;
			tBiaya = pendaftaran + bPemeriksaan + obat + pajak;
			cout << "jumlah yang harus di bayar: " << tBiaya << endl;
			cout << "anda menggunakan bpjs tidak perlu membayar\n" << endl;
		}else if(pasien == "umum"){
			cout << "masukan jumlah uang: ";
			cin >> uang;
			pendaftaran = 15000;
			cout << "biaya pendaftaran: " << pendaftaran << endl;
			bPemeriksaan = 50000;
			cout << "biaya Pemeriksaan: " << bPemeriksaan << endl;
			cout << "biaya obat: " << obat << endl;
			pajak = (bPemeriksaan + obat) * 0.05;
			cout << "biaya pajak: " << pajak << endl;
			tBiaya = pendaftaran + bPemeriksaan + obat + pajak;
			cout << "jumlah yang harus di bayar: " << tBiaya << endl;
			if(uang > tBiaya){
				cout << "kembalian anda: " << uang - tBiaya << "\n\n";
			}else{
				cout << "uang anda tidak cukup \n\n";
			}
		}else if(pasien == "asuransi"){
			pendaftaran = 20000;
			cout << "biaya pendaftaran: " << pendaftaran << endl;
			bPemeriksaan = 50000;
			cout << "biaya Pemeriksaan: " << bPemeriksaan << endl;
			cout << "biaya obat: " << obat << endl;
			pajak = (bPemeriksaan + obat) * 0.05;
			cout << "biaya pajak: " << pajak << endl;
			tBiaya = pendaftaran + bPemeriksaan + obat + pajak;
			cout << "jumlah yang harus di bayar: " << tBiaya << endl;
			cout << "anda menggunakan asuransi tidak perlu membayar\n" << endl;
		}else{
			cout << "anda salah memasukkan input \n\n";
		}
		cout << "lanjut?(masukan 'tidak' untuk keluar aplikasi) : ";
		cin >> input;
		if(input == "tidak"){
			break;
		}
	}
		
	cout << "keluar aplikasi";
		
	cin.get();
	return 0;
}
