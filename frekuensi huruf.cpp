#include <iostream> //Nama Umar Ibnu Zainal M
using namespace std; //NIM 311810909

void logika()
{
	char kalimat[50], kata;
	int indeks;
	indeks=0;
	cout<<"Masukan sebuah kalimat (maksimal 50 karakter) : ";
	cin>>kalimat;
	cout<<"Masukan huruf yang ingin dicari : ";
	cin>>kata;
	for(int i=1;i<=50;i++)
	{
		if(kalimat[i]==kata)
		indeks=indeks+1;
	}
	cout<<"Huruf "<<kata<<" terdapat pada kalimat sebanyak "<<indeks<<" kali";
}

int main()
{
	logika();
}
