#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 100;
int arrayData[100];
int jumlah = 0;

void info(){
  system("cls");
  cout<<"Indonesia Hebat, Poliban Juara";
getch();  
}

void dMenu(){
  system("cls");
  cout<<"Aplikasi Tampilan Menu"<<"\n";       
  cout<<"1. Memasukkan Nilai ke Array"<<"\n";            
  cout<<"2. Menampilkan Array"<<"\n";            
  cout<<"3. Menyortir Array"<<"\n";           
  cout<<"4. info"<<"\n";            
  cout<<"5. Exit"<<"\n";           
  cout<<"Masukan angka :";        
}

void inputArray(){
  system("cls");
  cout << "Berapa banyak data yang ingin dimasukkan? (max " << MAX << "): ";
    cin >> jumlah;

    if (jumlah > MAX || jumlah < 1) {
        cout << "Jumlah tidak valid!";
        getch();
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> arrayData[i];
    }
    cout << "Data berhasil disimpan!";
    getch();
}

void tampilArray() {
  system("cls");
  if (jumlah == 0) {
      cout << "Array masih kosong!";
  } else {
      cout << "Isi Array:\n";
      for (int i = 0; i < jumlah; i++) {
          cout << arrayData[i] << " ";
      }
  }
  getch();
}

void sortArray() {
    system("cls");
    if (jumlah == 0) {
        cout << "Array masih kosong!";
        getch();
        return;
    }

    char pilihan;
    cout << "Ingin mengurutkan array:\n";
    cout << "A. Dari terkecil ke terbesar (Ascending)\n";
    cout << "D. Dari terbesar ke terkecil (Descending)\n";
    cout << "Masukkan pilihan (A/D): ";
    cin >> pilihan;

    if (pilihan == 'A' || pilihan == 'a') {
        // Bubble Sort Ascending (Versi 1)
        for (int i = 1; i < jumlah; i++) {
            for (int j = jumlah - 1; j >= i; j--) {
                if (arrayData[j] < arrayData[j - 1]) {
                    tukar(&arrayData[j], &arrayData[j - 1]);
                }
            }
        }
    } else if (pilihan == 'D' || pilihan == 'd') {
        // Bubble Sort Descending (Versi 2)
        for (int i = 1; i < jumlah; i++) {
            for (int j = 0; j < jumlah - i; j++) {
                if (arrayData[j] < arrayData[j + 1]) {
                    tukar(&arrayData[j], &arrayData[j + 1]);
                }
            }
        }
    } else {
        cout << "Pilihan tidak valid!";
        getch();
        return;
    }

    cout << "\nArray setelah diurutkan:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << arrayData[i] << " ";
    }
    getch();
}

void mPertama(string pesan){
  system("cls");
  cout<<"hallo saya menu "<<pesan;
getch();
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
   inputArray();
   /* code */
    break;
   case '2':
   tampilArray();
    /* code */ 
    break;  
   case '3':
   sortArray();
    /* code */
    break;  
   case '4':
   info();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}