#include <iostream>
#include <iomanip>
 
using namespace std;
char ulang;
 
int main()
{
	do{ 
	system ("cls");
	cout << "##  Program C++ Input Matriks 2 Dimensi ##" << endl;
  	cout << "==========================================" << endl;
  	cout << endl;
 
  	int matriks[100][100];
  	int jum_baris, jum_kolom, i, j;
 
  	cout << "Input jumlah baris matriks: ";
  	cin >> jum_baris;
 
 	cout << "Input jumlah kolom matriks: ";
  	cin >> jum_kolom;
  	cout << endl;
  
  system("cls");
 
  // proses input array
  for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }
 
  cout << "Hasil matriks: " << endl;
 
  // menampilkan array
  for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
    	
      cout <<"|"<< setw(1) << matriks[i][j] << " \n"<<"|";
	  cout <<"--------------------------------------\n";
    }
    cout <<endl;
  }
  cout <<"\nApakah Anda Ingin Mengulangi program Tersebut? Y/N :";
  cin>>ulang;
}while ((ulang=='Y')||(ulang!='n'));
system ("cls");
cout <<"Rawrrr"<<endl;
return 0;	
}
 
