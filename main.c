#include "setting/setting.h"

int hari, bulan, tahun, jam, menit;                         

void waktu()
{
    time_t Time;                          // Variabel untuk menyimpan waktu saat ini
    time(&Time);                          // Mendapatkan waktu saat ini dan menyimpannya di Time
    struct tm *myTime = localtime(&Time); // Mengonversi waktu saat ini ke struct tm

    hari = myTime->tm_mday;         
    bulan = myTime->tm_mon + 1;     // (ditambah 1 karena bulan dimulai dari 0)
    tahun = myTime->tm_year + 1900; 
    jam = myTime->tm_hour;
    menit = myTime->tm_min;
    
}

void main()
{
    system("pause>0");
    daftar_login();
}