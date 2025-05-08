#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 100;
int data[MAX];
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
  cout<<"===================="<<"\n" ;          
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
        cin >> data[i];
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
          cout << data[i] << " ";
      }
  }
  getch();
}
void sortArray() {
  system("cls");
  if (jumlah == 0) {
      cout << "Array masih kosong!";
  } else {
      // Bubble Sort
      for (int i = 0; i < jumlah - 1; i++) {
          for (int j = 0; j < jumlah - i - 1; j++) {
              if (data[j] > data[j + 1]) {
                  int temp = data[j];
                  data[j] = data[j + 1];
                  data[j + 1] = temp;
              }
          }
      }
      cout << "Array berhasil diurutkan!";
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
   mPertama("ke- satu");
   /* code */
    break;
   case '2':
   tampilArray();
    mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
   sortArray();
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
   info();
    mPertama("ke- empat");
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