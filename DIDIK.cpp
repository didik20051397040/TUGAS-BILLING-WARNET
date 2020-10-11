/* Program Billing Warnet */ 
#include <iostream>
#include <stdio.h>


using namespace std;

int main()
    {
    int j1jam,j1menit,j1detik,j2jam,j2menit,j2detik,jumlahdetik,jumlahbayar,selisihjam,selisihmenit,selisihdetik;
    const int tarif = 5000;
     string pagar = "+++++++++++++++++++++++++++++++";
    
   cout <<">>>>>***************** SELAMAT DATANG DI WARNET AING *****************<<<<<"<<endl<<endl;

    cout << "MASUKKAN WAKTU AWAL PEMAKAIAN" << endl;
    cout << "JAM   : "; cin >>j1jam;
    cout << "MENIT : "; cin >>j1menit;
    cout << "DETIK : "; cin >>j1detik;
    cout << endl;
    
    cout << pagar << endl;
    
    cout << "MASUKKAN WAKTU AKHIR PEMAKAIAN" << endl;
    cout << "JAM   : "; cin >>j2jam;                                    
    cout << "MENIT : "; cin >>j2menit;                                  
    cout << "DETIK : "; cin >>j2detik;
    
    cout << pagar << endl;
    
    selisihjam = j2jam - j1jam;
    selisihmenit = j2menit - j1menit;
    selisihdetik = j2detik - j1detik;
    
    jumlahdetik = (selisihjam * 3600) + (selisihmenit * 60) + selisihdetik;
    jumlahbayar = jumlahdetik * tarif / 3600;
    
    cout << pagar << endl;
    cout << endl;
    cout << "lama pemakaian anda adalah " << selisihjam << " jam " << selisihmenit << " menit " << selisihdetik << " detik " << endl;
    cout << "Jumlah pembayaran Rp. " << jumlahbayar << " ,-" << endl;
    cout << pagar << endl;
    cout << ">>>>>********** TERIMA KASIH SUDAH BERKUNJUNG DI WARNET AING *********<<<<<" << endl;
    
    return 0;
    
    
}
