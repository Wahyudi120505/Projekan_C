// #include "setting/setting.h"
void awal_admin();
void data_user2();
void *pilih_a(int piil, int panjang_n, char *notif);
void back_delet();
void delet();
void delet_akun();
void upload_1();
void film_baru();
void pembayaran();

char c_nama[100][100], c_umur[100][100], c_username[100][100], c_pass[100][100];
int min;

void awal_admin()
{
    bingkaiA();
    bingkaii(48, 1, 123, 38, 2, 7, 219);
    bingkaii(5, 4, 40, 4, 0, 7, 219);   
    bingkaii(5, 11, 40, 4, 3, 7, 219);  
    bingkaii(5, 18, 40, 4, 3, 7, 219);  
    bingkaii(5, 32, 40, 4, 3, 7, 219); 
    posisi(21, 6);
    warna_text(0);
    printf("DATA USER");
    posisi(21, 13);
    warna_text(0);
    printf("UPLOAD FILM");
    posisi(22, 20);
    warna_text(0);
    printf("INCOME");
    posisi(24, 34);
    warna_text(0);
    printf("LOGOUT");
    layar();

    int pilih = 1, tamp = 1;
    char p;
    while ((p = getch()) != 13)
    {
        if (p == 80)
        {
            if (pilih == 1)
            {
                pilih = 2;
                tamp = 2;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 0, 7, 219); 
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
            else if (pilih == 2)
            {
                pilih = 3;
                tamp = 3;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 0, 7, 219); 
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
            else if (pilih == 3)
            {
                pilih = 4;
                tamp = 4;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 0, 7, 219); 
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
            else if (pilih == 4)
            {
                pilih = 1;
                tamp = 1;
                bingkaii(5, 4, 40, 4, 0, 7, 219); 
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
        }
        else if (p == 72)
        {
            if (pilih == 4)
            {
                pilih = 3;
                tamp = 3;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 0, 7, 219); 
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
            else if (pilih == 3)
            {
                pilih = 2;
                tamp = 2;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 0, 7, 219); 
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                tamp = 1;
                bingkaii(5, 4, 40, 4, 0, 7, 219); 
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
            else if (pilih == 1)
            {
                pilih = 4;
                tamp = 4;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 0, 7, 219); 
                posisi(21, 6);
                warna_text(0);
                printf("DATA USER");
                posisi(21, 13);
                warna_text(0);
                printf("UPLOAD FILM");
                posisi(22, 20);
                warna_text(0);
                printf("INCOME");
                posisi(24, 34);
                warna_text(0);
                printf("LOGOUT");
            }
        }
    }

    if (pilih == 1)
    {
        data_user2();
    }
    else if (pilih == 2)
    {
        upload_1();
    }
    else if (pilih == 3)
    {
        pembayaran();
    }
    else if (pilih == 4)
    {
        daftar_login();
    }
}

void data_user2()
{
    bingkaii(48, 1, 123, 38, 2, 7, 219);
    bingkaii(54, 4, 111, 18, 0, 7, 35);
    posisi(57, 5);
    printf("  NO.   NAMA \t\t\t UMUR \t\t\t USERNAME \t\t\t PASSWORD");
    int dex = 0, i = 0;
    min = 0;
    char p;
    char bintang[100];
    FILE *data;
    data = fopen("data_user.txt", "r");
    while (fscanf(data, "%[^/]/%[^/]/%[^/]/%[^\n]\n", c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        min++;
        dex++;
    }
    fclose(data);
    while (i < min)
    {
        posisi(57, 7 + i);
        printf("  %-4d  %-23s  %-21s  %-30s  ", i + 1, c_nama[i], c_umur[i], c_username[i]);
        for (int a = 0; a < 15 && c_pass[i][a] != '\0'; a++)
        {
            if (a < 3)
            {
                printf("%c", c_pass[i][a]);
            }
            else
            {
                printf("*");
            }
        }
        i++;
    }
    back_delet();
}
void back_delet()
{

    bingkaii(50, 26, 40, 4, 0, 7, 219);
    bingkaii(50, 32, 40, 4, 3, 7, 219);

    posisi(68, 34);
    warna_text(0);
    printf("BACK");
    posisi(63, 28);
    warna_text(0);
    printf("DELETE ACCOUNT");
    int pilih = 1, tampB = 1;
    char p;
    while ((p = getch()) != 13)
    {
        if (p == 80)
        {
            if (pilih == 1)
            {
                pilih = 2;
                tampB = 2;

                bingkaii(50, 26, 40, 4, 3, 7, 219);
                bingkaii(50, 32, 40, 4, 0, 7, 219);

                posisi(68, 34);
                warna_text(0);
                printf("BACK");
                posisi(63, 28);
                warna_text(0);
                printf("DELETE ACCOUNT");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                tampB = 1;

                bingkaii(50, 26, 40, 4, 0, 7, 219);
                bingkaii(50, 32, 40, 4, 3, 7, 219);

                posisi(68, 34);
                warna_text(0);
                printf("BACK");
                posisi(63, 28);
                warna_text(0);
                printf("DELETE ACCOUNT");
            }
        }
        else if (p == 72)
        {
            if (pilih == 1)
            {
                pilih = 2;
                tampB = 2;

                bingkaii(50, 26, 40, 4, 3, 7, 219);
                bingkaii(50, 32, 40, 4, 0, 7, 219);

                posisi(68, 34);
                warna_text(0);
                printf("BACK");
                posisi(63, 28);
                warna_text(0);
                printf("DELETE ACCOUNT");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                tampB = 1;

                bingkaii(50, 26, 40, 4, 0, 7, 219);
                bingkaii(50, 32, 40, 4, 3, 7, 219);

                posisi(68, 34);
                warna_text(0);
                printf("BACK");
                posisi(63, 28);
                warna_text(0);
                printf("DELETE ACCOUNT");
            }
        }
    }
    if (pilih == 1)
    {
        delet();
    }
    else if (pilih == 2)
    {
        awal_admin();
    }
}

void delet()
{
    char hapus[] = "AKUN AKAN TERHAPUS SECARA PERMANEN DAN TIDAK DAPAT DI AKSES LAGI";
    char notif[] = "APAKAH ANDA YAKIN INGIN MENGHAPUS AKUN INI";
    int panjang_h = strlen(hapus), pus;
    int panjang_n = strlen(notif), delt = 0, dex = 0;
    bingkaii(92, 26, 79, 13, 2, 7, 219);
    for (int a = 0; a < panjang_h; a++)
    {
        Sleep(50);
        warna_text(12);
        posisi(100 + a, 28);
        printf("%c", hapus[a]);
    }

    bingkaii(98, 30, 67, 7, 0, 7, 35);
    posisi(125, 32);
    printf("PILIH NO AKUN : ");
    int piil;
    pilih_a(piil, panjang_n, notif);
}

void delet_akun(int piil)
{
    int dex = 0;
    FILE *delet = fopen("data_user.txt", "r");
    FILE *tamp_delet = fopen("delet.txt", "w");
    while (fscanf(delet, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        if (piil - 1 != dex)
        {
            fprintf(tamp_delet, "%s/%s/%s/%s\n", c_nama[dex], c_umur[dex], c_username[dex], c_pass[dex]);
        }
        dex++;
    }
    fclose(delet);
    fclose(tamp_delet);
    remove("data_user.txt");
    rename("delet.txt", "data_user.txt");
    data_user2();
}

void upload_1()
{

    posisi(99, 38);
    printf("                            ");
    posisi(6, 27);
    printf("                                         ");
    bingkaii(60, 13, 99, 15, 0, 7, 35);
    posisi(8, 27);
    warna_text(4);
    printf("PRESS [TAP] TO VIEW NEW MOVIE FILES");
    bingkaii(75, 30, 69, 7, 0, 7, 219);
    posisi(63, 14);
    printf("NO \t\t\t\t JUDUL FILM \t\t\t\t HARGA");
    char dex = 0;
    int no = 1;
    FILE *film = fopen("film.txt", "r");
    while (fscanf(film, "%d/%[^/]/%d/%[^\n]\n", &no, &j_film[dex], &harga, &fillm[dex]) != EOF)
    {
        posisi(63, 16 + dex);
        printf("%-32d  %-38s  %d  ", no, j_film[dex], harga);
        dex++;
    }
    char p;
    int tahan = 1;
    while ((p = getch()) != 13 || tahan == 1)
    {
        if (p == 9)
        {
            film_baru();
        }
        else if(p == 27)
        {
            awal_admin();
        }
    }
}

void film_baru()
{
    char judul[100];
    posisi(8, 27);
    printf("                                       ");
    posisi(6, 27);
    warna_text(4);
    printf("PRESS [TAP] TO RETURN TO VIP MOVIE LIST");
    bingkaii(60, 13, 99, 15, 0, 7, 35);
    bingkaii(75, 30, 69, 7, 0, 7, 219);
    posisi(50, 38);
    printf("<< PRESS ESC TO GO BACK");
    posisi(77, 32);
    printf("MASUKKAN JUDUL FILM BARU  : ");
    posisi(77, 34);
    printf("MASUKKAN FILE FILM        : ");
    posisi(77, 36);
    printf("HARGA                     : ");

    char dex = 0;
    FILE *film_baru = fopen("tamp_film.txt", "r");
    while (fscanf(film_baru, "%[^\n]\n", &f_baru[dex]) != EOF)
    {
        posisi(63, 16 + dex);
        printf(" -   %s", f_baru[dex]);
        dex++;
        posisi(105, 32);
    }
    fclose(film_baru);

    posisi(105, 32);
    min_judul(judul);
}

void pembayaran()
{
    char name[100][100], yuser[100][100], jurdul[100][100], waaktuu[100][100];
    int i = 0;
    int pendapatan = 0;

    bingkaii(48, 1, 123, 38, 2, 7, 219);
    bingkaii(90, 30, 31, 6, 0, 7, 219);
    posisi(101, 32);
    printf("PENDAPATAN");
    posisi(50, 38);
    printf("<< PRESS ESC TO GO BACK");
    bingkaii(51, 2, 117, 18, 0, 7, 35);
    posisi(100, 22);
    warna_text(4);
    printf("<< 1");
    posisi(110, 22);
    warna_text(0);
    printf("2 >>");
    posisi(53, 3);
    warna_text(4);
    printf("   NAMA \t\t USERNAME \t\t JUDUL FILM \t\t\t HARGA \t\t   JAM/WAKTU");
    int dex = 0;
    FILE *income = fopen("income.txt", "r");
    while (fscanf(income, "%[^/]/%[^/]/%[^/]/%d/%[^\n]\n", name[dex], yuser[dex], jurdul[dex], &harga, waaktuu[dex]) != EOF)
    {
        if (dex > 14)
        {
            break;
        }
        else
        {
            posisi(55, 5 + dex);
            warna_text(0);
            printf("%-15s   %-21s   %-29s   %-12d   %s", name[dex], yuser[dex], jurdul[dex], harga, waaktuu[dex]);
            dex++;
            pendapatan += harga;
        }
    }
    fclose(income);
    posisi(100, 34);
    printf(">> %d <<", pendapatan);
    char p;
    int hal = 1, tahan = 0;
    while ((p = getch()) != 13 || tahan == 0)
    {
        if (p == 77)
        {
            if (hal == 1)
            {
                hal = 2;
                bingkaii(51, 2, 117, 18, 0, 7, 35);
                posisi(100, 22);
                warna_text(0);
                printf("<< 1");
                posisi(110, 22);
                warna_text(4);
                printf("2 >>");
                posisi(53, 3);
                printf("   NAMA \t\t USERNAME \t\t JUDUL FILM \t\t\t HARGA \t\t   JAM/WAKTU");
                int b = 0, a = 0;
                FILE *halaman1 = fopen("income.txt", "r");
                while (fscanf(halaman1, "%[^/]/%[^/]/%[^/]/%d/%[^\n]\n", name[b], yuser[b], jurdul[b], &harga, waaktuu[b]) != EOF)
                {
                    if (b > 14 && b < 30)
                    {
                        posisi(55, 5 + a);
                        warna_text(0);
                        printf("%-15s   %-21s   %-30s   %-10d   %s", name[b], yuser[b], jurdul[b], harga, waaktuu[b]);
                        a++;
                    }
                    b++;
                }
            }
            else if (hal == 2)
            {
                hal = 3;
                bingkaii(51, 2, 117, 18, 0, 7, 35);
                posisi(100, 22);
                warna_text(0);
                printf("<< 2");
                posisi(110, 22);
                warna_text(4);
                printf("3 >>");
                posisi(53, 3);
                printf("   NAMA \t\t USERNAME \t\t JUDUL FILM \t\t\t HARGA \t\t   JAM/WAKTU");
                int b = 0, a = 0;
                FILE *halaman1 = fopen("income.txt", "r");
                while (fscanf(halaman1, "%[^/]/%[^/]/%[^/]/%d/%[^\n]\n", name[b], yuser[b], jurdul[b], &harga, waaktuu[b]) != EOF)
                {
                    if (b > 30 && b < 45)
                    {
                        posisi(55, 5 + a);
                        warna_text(0);
                        printf("%-15s   %-21s   %-30s   %-10d   %s", name[b], yuser[b], jurdul[b], harga, waaktuu[b]);
                        a++;
                    }
                    b++;
                }
            }
        }
        else if (p == 75)
        {
            if (hal == 3)
            {
                hal = 2;
                bingkaii(51, 2, 117, 18, 0, 7, 35);
                posisi(100, 22);
                warna_text(4);
                printf("<< 2");
                posisi(110, 22);
                warna_text(0);
                printf("3 >>");
                posisi(53, 3);
                warna_text(4);
                printf("   NAMA \t\t USERNAME \t\t JUDUL FILM \t\t\t HARGA \t\t   JAM/WAKTU");
                int b = 0, a = 0;
                FILE *halaman1 = fopen("income.txt", "r");
                while (fscanf(halaman1, "%[^/]/%[^/]/%[^/]/%d/%[^\n]\n", name[b], yuser[b], jurdul[b], &harga, waaktuu[b]) != EOF)
                {
                    if (b > 14 && b < 30)
                    {
                        posisi(55, 5 + a);
                        warna_text(0);
                        printf("%-15s   %-21s   %-30s   %-10d   %s", name[b], yuser[b], jurdul[b], harga, waaktuu[b]);
                        a++;
                    }
                    b++;
                }
            }
            else if (hal == 2)
            {
                hal = 1;
                bingkaii(51, 2, 117, 18, 0, 7, 35);
                posisi(100, 22);
                warna_text(4);
                printf("<< 1");
                posisi(110, 22);
                warna_text(0);
                printf("2 >>");
                posisi(53, 3);
                warna_text(4);
                printf("   NAMA \t\t USERNAME \t\t JUDUL FILM \t\t\t HARGA \t\t   JAM/WAKTU");
                char dex = 0;
                float pendapatan = 0;
                FILE *income = fopen("income.txt", "r");
                while (fscanf(income, "%[^/]/%[^/]/%[^/]/%d/%[^\n]\n", name[dex], yuser[dex], jurdul[dex], &harga, waaktuu[dex]) != EOF)
                {
                    if (dex > 14)
                    {
                        break;
                    }
                    else
                    {
                        posisi(55, 5 + dex);
                        warna_text(0);
                        printf("%-15s   %-21s   %-30s   %-10d   %s", name[dex], yuser[dex], jurdul[dex], harga, waaktuu[dex]);
                        dex++;
                    }
                }
            }
        }
        else if (p == 27)
        {
            awal_admin();
        }
    }
}