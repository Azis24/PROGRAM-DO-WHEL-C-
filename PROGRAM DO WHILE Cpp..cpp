#include<iostream>
using namespace std;
int main(){
	system ("color E");
	int i,g,r;
	cout<<"PERULANGAN BILANGAN GANJIL"<<endl<<"Masukan Jumlah Yang Ingin Ditampilkan : ";
	cin>>g;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	r=1;
	i=1;
	do{ //jika kita menggunakan DO WHILE maka statment akan dijalankan 
	    // terlebih dahulu dan pengecekan kondisi dilakukan di akhir perulangan;
	    //pada Do WHILE statement pasti akan dijalankan satu kali walaupun kondisinya 
	    // salah berbeda dengan FOR dan WHILE yang statment Dijalankan apabila Benar Atau True.
	cout<<r<<" ";
	r=r+2;
	i=i+1;
	}while(i<=g);
	cout<<endl<<endl<<"-----------------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<"Programnya Udah Selesai MAS BROOOOOOO !!!!"<<endl<<endl;
	return 0;
}
