void daftar_login();
void posisi(int kolom, int baris);
void warna_text(int color);
void warna_background(int color);
void bingkaii(int kolom, int baris, int panjang, int lebar, int color, int bg, int ascii);
void bingkaiA();
void text_judul();
void bingkai_awal();
void a();
void login();
void daftar();
void masuk();
void waktu();
void comedy();
void action();
void cartoon();
void vip();
void user1();
void d_user();
void v_pilih();
void metode();
void no_hp();

char j_film[100][100], fillm[100][100];
char c_username[100][100], c_pass[100][100], c_nama[100][100], c_umur[100][100];
int harga, pili;
int hari, bulan, tahun, jam, menit;

void daftar_login()
{
    bingkai_awal();
    char p;
    int pilih = 1;
    while ((p = getch()) != 13)
    {
        if (p == 27)
        {
            printf("\a\a\a");
            exit(0);
        }
        else if (p == 75)
        {
            if (pilih == 1)
            {
                pilih = 2;
                bingkaii(71, 32, 30, 4, 3, 7, 219);
                bingkaii(109, 32, 30, 4, 0, 7, 219);
                posisi(84, 34);
                warna_text(0);
                printf("LOGIN");
                posisi(122, 34);
                warna_text(0);
                printf("DAFTAR");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                bingkaii(71, 32, 30, 4, 0, 7, 219);
                bingkaii(109, 32, 30, 4, 3, 7, 219);
                posisi(84, 34);
                warna_text(0);
                printf("LOGIN");
                posisi(122, 34);
                warna_text(0);
                printf("DAFTAR");
            }
        }
        else if (p == 77)
        {
            if (pilih == 2)
            {
                pilih = 1;
                bingkaii(71, 32, 30, 4, 0, 7, 219);
                bingkaii(109, 32, 30, 4, 3, 7, 219);
                posisi(84, 34);
                warna_text(0);
                printf("LOGIN");
                posisi(122, 34);
                warna_text(0);
                printf("DAFTAR");
            }
            else if (pilih == 1)
            {
                pilih = 2;
                bingkaii(71, 32, 30, 4, 3, 7, 219);
                bingkaii(109, 32, 30, 4, 0, 7, 219);
                posisi(84, 34);
                warna_text(0);
                printf("LOGIN");
                posisi(122, 34);
                warna_text(0);
                printf("DAFTAR");
            }
        }
    }

    if (pilih == 1)
    {
        system("CLS");
        login();
    }
    else if (pilih == 2)
    {
        system("CLS");
        daftar();
    }
}

void masuk()
{
    system("cls");
    bingkaiA();
    bingkaii(48, 1, 123, 38, 2, 7, 219);
    bingkaii(5, 4, 40, 4, 0, 7, 219);  // film populer
    bingkaii(5, 11, 40, 4, 3, 7, 219); // genre film
    bingkaii(5, 18, 40, 4, 3, 7, 219); // film vip
    bingkaii(5, 32, 40, 4, 3, 7, 219); // user
    posisi(20, 6);
    warna_text(0);
    printf("FILM POPULER");
    posisi(21, 13);
    warna_text(0);
    printf("GENRE FILM");
    posisi(22, 20);
    warna_text(0);
    printf("FILM VIP");
    posisi(24, 34);
    warna_text(0);
    printf("PROFIL");
    a();

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
                bingkaii(5, 11, 40, 4, 0, 7, 219); // genre film
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
            }
            else if (pilih == 2)
            {
                pilih = 3;
                tamp = 3;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 0, 7, 219); // film vip
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
            }
            else if (pilih == 3)
            {
                pilih = 4;
                tamp = 4;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 0, 7, 219); // PROFIL
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
            }
            else if (pilih == 4)
            {
                pilih = 1;
                tamp = 1;
                bingkaii(5, 4, 40, 4, 0, 7, 219); // film populer
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
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
                bingkaii(5, 18, 40, 4, 0, 7, 219); // film vip
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
            }
            else if (pilih == 3)
            {
                pilih = 2;
                tamp = 2;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 0, 7, 219); // genre film
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                tamp = 1;
                bingkaii(5, 4, 40, 4, 0, 7, 219); // film popular
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 3, 7, 219);
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
            }
            else if (pilih == 1)
            {
                pilih = 4;
                tamp = 4;
                bingkaii(5, 4, 40, 4, 3, 7, 219);
                bingkaii(5, 11, 40, 4, 3, 7, 219);
                bingkaii(5, 18, 40, 4, 3, 7, 219);
                bingkaii(5, 32, 40, 4, 0, 7, 219); // PROFIL
                posisi(20, 6);
                warna_text(0);
                printf("FILM POPULER");
                posisi(21, 13);
                warna_text(0);
                printf("GENRE FILM");
                posisi(22, 20);
                warna_text(0);
                printf("FILM VIP");
                posisi(24, 34);
                warna_text(0);
                printf("PROFIL");
            }
        }
    }

    if (tamp == 1)
    {
        // FILM POPULER
        bingkaii(50, 20, 40, 4, 0, 7, 219);
        bingkaii(50, 26, 40, 4, 3, 7, 219);
        bingkaii(50, 32, 40, 4, 3, 7, 219);
        posisi(62, 22);
        warna_text(0);
        printf("The Unforgivable");
        posisi(65, 28);
        warna_text(0);
        printf("Extraction");
        posisi(63, 34);
        warna_text(0);
        printf("Don't Look Up");
        posisi(27, 26);
        warna_text(0);
        printf("^");
        posisi(7, 27);
        warna_text(0);
        printf("PRESS ESC TO RETURN TO THE MENU ABOVE");
        posisi(25, 30);
        warna_text(0);
        printf("PILIH JUDUL FILM >>");

        int pilih = 1, tampA = 1;
        char p;
        while ((p = getch()) != 13)
        {
            if (p == 80)
            {
                if (pilih == 1)
                {
                    pilih = 2;
                    tampA = 2;
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 0, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(62, 22);
                    warna_text(0);
                    printf("The Unforgivable");
                    posisi(65, 28);
                    warna_text(0);
                    printf("Extraction");
                    posisi(63, 34);
                    warna_text(0);
                    printf("Don't Look Up");
                }
                else if (pilih == 2)
                {
                    pilih = 3;
                    tampA = 3;
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 0, 7, 219);
                    posisi(62, 22);
                    warna_text(0);
                    printf("The Unforgivable");
                    posisi(65, 28);
                    warna_text(0);
                    printf("Extraction");
                    posisi(63, 34);
                    warna_text(0);
                    printf("Don't Look Up");
                }
                else if (pilih == 3)
                {
                    pilih = 1;
                    tampA = 1;
                    bingkaii(50, 20, 40, 4, 0, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(62, 22);
                    warna_text(0);
                    printf("The Unforgivable");
                    posisi(65, 28);
                    warna_text(0);
                    printf("Extraction");
                    posisi(63, 34);
                    warna_text(0);
                    printf("Don't Look Up");
                }
            }
            else if (p == 72)
            {
                if (pilih == 3)
                {
                    pilih = 2;
                    tampA = 2;
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 0, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(62, 22);
                    warna_text(0);
                    printf("The Unforgivable");
                    posisi(65, 28);
                    warna_text(0);
                    printf("Extraction");
                    posisi(63, 34);
                    warna_text(0);
                    printf("Don't Look Up");
                }
                else if (pilih == 2)
                {
                    pilih = 1;
                    tampA = 1;
                    bingkaii(50, 20, 40, 4, 0, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(62, 22);
                    warna_text(0);
                    printf("The Unforgivable");
                    posisi(65, 28);
                    warna_text(0);
                    printf("Extraction");
                    posisi(63, 34);
                    warna_text(0);
                    printf("Don't Look Up");
                }
                else if (pilih == 1)
                {
                    pilih = 3;
                    tampA = 3;
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 0, 7, 219);
                    posisi(62, 22);
                    warna_text(0);
                    printf("The Unforgivable");
                    posisi(65, 28);
                    warna_text(0);
                    printf("Extraction");
                    posisi(63, 34);
                    warna_text(0);
                    printf("Don't Look Up");
                }
            }
            else if (p == 27)
            {
                masuk();
            }
        }

        int dex = 0, harga = 0;
        FILE *data_user = fopen("data_user.txt", "r");
        FILE *income = fopen("income.txt", "a");
        while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
        {
            if (tampA == 1)
            {
                waktu();
                char waktuu[100];
                snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
                char judul_pop[100] = "The Unforgivable";
                fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
                system("START film/The_Unforgivable.mp4");
            }
            else if (tampA == 2)
            {
                waktu();
                char waktuu[100];
                snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
                char judul_pop[100] = "Extraction";
                fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
                system("START film/Extraction.mp4");
            }
            else if (tampA == 3)
            {
                waktu();
                char waktuu[100];
                snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
                char judul_pop[100] = "Don`t Look Up";
                fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
                system("START film/Don`t_Look_Up.mp4");
            }
            dex++;
            break;
        }

        fclose(data_user);
        fclose(income);
        masuk();
    }
    else if (tamp == 2)
    {
        // GENRE FILM
        bingkaii(50, 20, 40, 4, 0, 7, 219);
        bingkaii(50, 26, 40, 4, 3, 7, 219);
        bingkaii(50, 32, 40, 4, 3, 7, 219);
        posisi(68, 22);
        warna_text(0);
        printf("COMEDY");
        posisi(68, 28);
        warna_text(0);
        printf("ACTION");
        posisi(68, 34);
        warna_text(0);
        printf("CARTOON");
        posisi(27, 26);
        warna_text(0);
        printf("^");
        posisi(7, 27);
        warna_text(0);
        printf("PRESS ESC TO RETURN TO THE MENU ABOVE");
        posisi(25, 30);
        warna_text(0);
        printf("PILIH GENRE FILM >>");

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
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 0, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(68, 22);
                    warna_text(0);
                    printf("COMEDY");
                    posisi(68, 28);
                    warna_text(0);
                    printf("ACTION");
                    posisi(68, 34);
                    warna_text(0);
                    printf("CARTOON");
                }
                else if (pilih == 2)
                {
                    pilih = 3;
                    tampB = 3;
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 0, 7, 219);
                    posisi(68, 22);
                    warna_text(0);
                    printf("KOMEDY");
                    posisi(68, 28);
                    warna_text(0);
                    printf("ACTION");
                    posisi(68, 34);
                    warna_text(0);
                    printf("CARTOON");
                }
                else if (pilih == 3)
                {
                    pilih = 1;
                    tampB = 1;
                    bingkaii(50, 20, 40, 4, 0, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(68, 22);
                    warna_text(0);
                    printf("COMEDY");
                    posisi(68, 28);
                    warna_text(0);
                    printf("ACTION");
                    posisi(68, 34);
                    warna_text(0);
                    printf("CARTOON");
                }
            }
            else if (p == 72)
            {
                if (pilih == 3)
                {
                    pilih = 2;
                    tampB = 2;
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 0, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(68, 22);
                    warna_text(0);
                    printf("COMEDY");
                    posisi(68, 28);
                    warna_text(0);
                    printf("ACTION");
                    posisi(68, 34);
                    warna_text(0);
                    printf("CARTOON");
                }
                else if (pilih == 2)
                {
                    pilih = 1;
                    tampB = 1;
                    bingkaii(50, 20, 40, 4, 0, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 3, 7, 219);
                    posisi(68, 22);
                    warna_text(0);
                    printf("COMEDY");
                    posisi(68, 28);
                    warna_text(0);
                    printf("ACTION");
                    posisi(68, 34);
                    warna_text(0);
                    printf("CARTOON");
                }
                else if (pilih == 1)
                {
                    pilih = 3;
                    tampB = 3;
                    bingkaii(50, 20, 40, 4, 3, 7, 219);
                    bingkaii(50, 26, 40, 4, 3, 7, 219);
                    bingkaii(50, 32, 40, 4, 0, 7, 219);
                    posisi(68, 22);
                    warna_text(0);
                    printf("COMEDY");
                    posisi(68, 28);
                    warna_text(0);
                    printf("ACTION");
                    posisi(68, 34);
                    warna_text(0);
                    printf("CARTOON");
                }
            }
            else if (p == 27)
            {
                masuk();
            }
        }
        if (tampB == 1)
        {
            comedy();
        }
        else if (tampB == 2)
        {
            action();
        }
        else if (tampB == 3)
        {
            cartoon();
        }
    }
    else if (tamp == 3)
    {
        vip();
    }
    else if (tamp == 4)
    {
        d_user();
    }
}

void comedy()
{
    system("cls");
    bingkaiA();
    text_judul();
    bingkaii(10, 22, 40, 4, 0, 7, 219);
    bingkaii(64, 22, 40, 4, 3, 7, 219);
    bingkaii(117, 22, 40, 4, 3, 7, 219);
    posisi(27, 24);
    warna_text(0);
    printf("COMIC 8");
    posisi(79, 24);
    warna_text(0);
    printf("MY STUPID BOS");
    posisi(130, 24);
    warna_text(0);
    printf("CEK TOKO SEBELAH");
    posisi(5, 37);
    warna_text(0);
    printf("<< PRESS ESC TO BACK ");

    int pilih = 1, tampa = 1;
    char p;
    while ((p = getch()) != 13)
    {
        if (p == 77)
        {
            if (pilih == 1)
            {
                pilih = 2;
                tampa = 2;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 0, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(27, 24);
                warna_text(0);
                printf("COMIC 8");
                posisi(79, 24);
                warna_text(0);
                printf("MY STUPID BOS");
                posisi(130, 24);
                warna_text(0);
                printf("CEK TOKO SEBELAH");
            }
            else if (pilih == 2)
            {
                pilih = 3;
                tampa = 3;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 0, 7, 219);
                posisi(27, 24);
                warna_text(0);
                printf("COMIC 8");
                posisi(79, 24);
                warna_text(0);
                printf("MY STUPID BOS");
                posisi(130, 24);
                warna_text(0);
                printf("CEK TOKO SEBELAH");
            }
            else if (pilih == 3)
            {
                pilih = 1;
                tampa = 1;
                bingkaii(10, 22, 40, 4, 0, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(27, 24);
                warna_text(0);
                printf("COMIC 8");
                posisi(79, 24);
                warna_text(0);
                printf("MY STUPID BOS");
                posisi(130, 24);
                warna_text(0);
                printf("CEK TOKO SEBELAH");
            }
        }
        else if (p == 75)
        {
            if (pilih == 3)
            {
                pilih = 2;
                tampa = 2;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 0, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(27, 24);
                warna_text(0);
                printf("COMIC 8");
                posisi(79, 24);
                warna_text(0);
                printf("MY STUPID BOS");
                posisi(130, 24);
                warna_text(0);
                printf("CEK TOKO SEBELAH");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                tampa = 1;
                bingkaii(10, 22, 40, 4, 0, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(27, 24);
                warna_text(0);
                printf("COMIC 8");
                posisi(79, 24);
                warna_text(0);
                printf("MY STUPID BOS");
                posisi(130, 24);
                warna_text(0);
                printf("CEK TOKO SEBELAH");
            }
            else if (pilih == 1)
            {
                pilih = 3;
                tampa = 3;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 0, 7, 219);
                posisi(27, 24);
                warna_text(0);
                printf("COMIC 8");
                posisi(79, 24);
                warna_text(0);
                printf("MY STUPID BOS");
                posisi(130, 24);
                warna_text(0);
                printf("CEK TOKO SEBELAH");
            }
        }
        else if (p == 27)
        {
            masuk();
        }
    }

    int dex = 0, harga = 0;
    FILE *data_user = fopen("data_user.txt", "r");
    FILE *income = fopen("income.txt", "a");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        if (tampa == 1)
        {
            waktu();
            char judul_pop[100] = "Comic";
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/Comic.mp4");
        }
        else if (tampa == 2)
        {
            waktu();
            char judul_pop[100] = "My Stuoid Boss";
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/My_Stupid_Boss.mp4");
        }
        else if (tampa == 3)
        {
            waktu();
            char judul_pop[100] = "Cek Toko Sebelah";
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/Cek_Toko_Sebelah.mp4");
        }
        dex++;
    }
    fclose(data_user);
    fclose(income);
    comedy();
}

void action()
{
    system("cls");
    bingkaiA();
    text_judul();
    bingkaii(10, 22, 40, 4, 0, 7, 219);
    bingkaii(64, 22, 40, 4, 3, 7, 219);
    bingkaii(117, 22, 40, 4, 3, 7, 219);
    posisi(24, 24);
    warna_text(0);
    printf("JOHN WICK");
    posisi(80, 24);
    warna_text(0);
    printf("THE MATRIX");
    posisi(133, 24);
    warna_text(0);
    printf("CREAL STEEL");
    posisi(5, 37);
    warna_text(0);
    printf("<< PRESS ESC TO BACK ");

    int pilih = 1, tampa = 1;
    char p;
    while ((p = getch()) != 13)
    {
        if (p == 77)
        {
            if (pilih == 1)
            {
                pilih = 2;
                tampa = 2;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 0, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(24, 24);
                warna_text(0);
                printf("JOHN WICK");
                posisi(80, 24);
                warna_text(0);
                printf("THE MATRIX");
                posisi(133, 24);
                warna_text(0);
                printf("CREAL STEEL");
            }
            else if (pilih == 2)
            {
                pilih = 3;
                tampa = 3;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 0, 7, 219);
                posisi(24, 24);
                warna_text(0);
                printf("JOHN WICK");
                posisi(80, 24);
                warna_text(0);
                printf("THE MATRIX");
                posisi(133, 24);
                warna_text(0);
                printf("CREAL STEEL");
            }
            else if (pilih == 3)
            {
                pilih = 1;
                tampa = 1;
                bingkaii(10, 22, 40, 4, 0, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(24, 24);
                warna_text(0);
                printf("JOHN WICK");
                posisi(80, 24);
                warna_text(0);
                printf("THE MATRIX");
                posisi(133, 24);
                warna_text(0);
                printf("CREAL STEEL");
            }
        }
        else if (p == 75)
        {
            if (pilih == 3)
            {
                pilih = 2;
                tampa = 2;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 0, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(24, 24);
                warna_text(0);
                printf("JOHN WICK");
                posisi(80, 24);
                warna_text(0);
                printf("THE MATRIX");
                posisi(133, 24);
                warna_text(0);
                printf("CREAL STEEL");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                tampa = 1;
                bingkaii(10, 22, 40, 4, 0, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(24, 24);
                warna_text(0);
                printf("JOHN WICK");
                posisi(80, 24);
                warna_text(0);
                printf("THE MATRIX");
                posisi(133, 24);
                warna_text(0);
                printf("CREAL STEEL");
            }
            else if (pilih == 1)
            {
                pilih = 3;
                tampa = 3;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 0, 7, 219);
                posisi(24, 24);
                warna_text(0);
                printf("JOHN WICK");
                posisi(80, 24);
                warna_text(0);
                printf("THE MATRIX");
                posisi(133, 24);
                warna_text(0);
                printf("CREAL STEEL");
            }
        }
        else if (p == 27)
        {
            masuk();
        }
    }

    int dex = 0, harga = 0;
    FILE *data_user = fopen("data_user.txt", "r");
    FILE *income = fopen("income.txt", "a");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        if (tampa == 1)
        {
            waktu();
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            char judul_pop[100] = "John Wick";
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/John_Wick.mp4");
        }
        else if (tampa == 2)
        {
            waktu();
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            char judul_pop[100] = "The Matrix";
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/The_Matrix.mp4");
        }
        else if (tampa == 3)
        {
            waktu();
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            char judul_pop[100] = "Real Steel";
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/Real_Steel.mp4");
        }
        dex++;
    }
    fclose(data_user);
    fclose(income);
    action();
}

void cartoon()
{
    system("cls");
    bingkaiA();
    text_judul();
    bingkaii(10, 22, 40, 4, 0, 7, 219);
    bingkaii(64, 22, 40, 4, 3, 7, 219);
    bingkaii(117, 22, 40, 4, 3, 7, 219);
    posisi(26, 24);
    warna_text(0);
    printf("TOY STORY");
    posisi(78, 24);
    warna_text(0);
    printf("THE LION KING");
    posisi(131, 24);
    warna_text(0);
    printf("SHAUN THE SHEEP");
    posisi(5, 37);
    warna_text(0);
    printf("<< PRESS ESC TO BACK ");

    int pilih = 1, tampa = 1;
    char p;
    while ((p = getch()) != 13)
    {
        if (p == 77)
        {
            if (pilih == 1)
            {
                pilih = 2;
                tampa = 2;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 0, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(26, 24);
                warna_text(0);
                printf("TOY STORY");
                posisi(78, 24);
                warna_text(0);
                printf("THE LION KING");
                posisi(131, 24);
                warna_text(0);
                printf("SHAUN THE SHEEP");
            }
            else if (pilih == 2)
            {
                pilih = 3;
                tampa = 3;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 0, 7, 219);
                posisi(26, 24);
                warna_text(0);
                printf("TOY STORY");
                posisi(78, 24);
                warna_text(0);
                printf("THE LION KING");
                posisi(131, 24);
                warna_text(0);
                printf("SHAUN THE SHEEP");
            }
            else if (pilih == 3)
            {
                pilih = 1;
                tampa = 1;
                bingkaii(10, 22, 40, 4, 0, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(26, 24);
                warna_text(0);
                printf("TOY STORY");
                posisi(78, 24);
                warna_text(0);
                printf("THE LION KING");
                posisi(131, 24);
                warna_text(0);
                printf("SHAUN THE SHEEP");
            }
        }
        else if (p == 75)
        {
            if (pilih == 3)
            {
                pilih = 2;
                tampa = 2;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 0, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(26, 24);
                warna_text(0);
                printf("TOY STORY");
                posisi(78, 24);
                warna_text(0);
                printf("THE LION KING");
                posisi(131, 24);
                warna_text(0);
                printf("SHAUN THE SHEEP");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                tampa = 1;
                bingkaii(10, 22, 40, 4, 0, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 3, 7, 219);
                posisi(26, 24);
                warna_text(0);
                printf("TOY STORY");
                posisi(78, 24);
                warna_text(0);
                printf("THE LION KING");
                posisi(131, 24);
                warna_text(0);
                printf("SHAUN THE SHEEP");
            }
            else if (pilih == 1)
            {
                pilih = 3;
                tampa = 3;
                bingkaii(10, 22, 40, 4, 3, 7, 219);
                bingkaii(64, 22, 40, 4, 3, 7, 219);
                bingkaii(117, 22, 40, 4, 0, 7, 219);
                posisi(26, 24);
                warna_text(0);
                printf("TOY STORY");
                posisi(78, 24);
                warna_text(0);
                printf("THE LION KING");
                posisi(131, 24);
                warna_text(0);
                printf("SHAUN THE SHEEP");
            }
        }
        else if (p == 27)
        {
            masuk();
        }
    }

    int dex = 0, harga = 0;
    FILE *data_user = fopen("data_user.txt", "r");
    FILE *income = fopen("income.txt", "a");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        if (tampa == 1)
        {
            waktu();
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            char judul_pop[100] = "Toy Srory";
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/Toy_Story.mp4");
        }
        else if (tampa == 2)
        {
            waktu();
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            char judul_pop[100] = "The Lion King";
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/The_Lion_King.mp4");
        }
        else if (tampa == 3)
        {
            waktu();
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            char judul_pop[100] = "Shaun The Sheep";
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[dex], c_username[dex], judul_pop, harga, waktuu);
            system("START film/Shaun_The_Sheep.mp4");
        }
        dex++;
    }
    fclose(data_user);
    fclose(income);
    cartoon();
}

void vip()
{
    int pilih = 0;
    posisi(12, 28);
    warna_text(0);
    printf("                            ");
    posisi(27, 27);
    warna_text(0);
    printf("^");
    posisi(7, 28);
    warna_text(0);
    printf("PRESS ESC TO RETURN TO THE MENU ABOVE");
    bingkaii(50, 19, 70, 17, 0, 7, 219);
    bingkaii(120, 19, 49, 17, 0, 7, 219);
    bingkaii(120, 23, 49, 13, 0, 7, 219);
    bingkaii(124, 27, 16, 4, 0, 7, 219); 
    bingkaii(150, 27, 16, 4, 0, 7, 219); 
    posisi(130, 29);
    warna_text(0);
    printf("DANA");
    posisi(156, 29);
    warna_text(0);
    printf("GOPAY");
    posisi(52, 21);
    printf("NO \t\t JUDUL FILM \t\t\t HARGA");
    posisi(122, 21);
    printf("PILIH NO FILM  : ");
    posisi(122, 25);
    printf("PILIH METODE PEMBAYARAN    : ");
    char dex = 0;
    int no;
    FILE *film = fopen("film.txt", "r");
    while (fscanf(film, "%d/%[^/]/%d/%[^\n]\n", &no, &j_film[dex], &harga, &fillm[dex]) != EOF)
    {
        posisi(52, 22 + dex);
        printf("%-5d  %-36s  %d  ", no, j_film[dex], harga);
        dex++;
    }
    posisi(138, 21);
    v_pilih(pilih, dex);
}

void metode()
{
    char p, noo[100];
    int pilih = 1, dex = 0;
    posisi(27, 27);
    warna_text(0);
    printf("    ");
    posisi(7, 28);
    warna_text(0);
    printf("                                     ");
    posisi(12, 28);
    warna_text(0);
    printf("PRESS ESC TO CANCEL PAYMENT");

    bingkaii(124, 27, 16, 4, 0, 7, 219); 
    bingkaii(150, 27, 16, 4, 0, 7, 219); 
    posisi(130, 29);
    warna_text(4);
    printf("DANA");
    posisi(156, 29);
    warna_text(0);
    printf("GOPAY");
    while ((p = getch()) != 13)
    {
        if (p == 27)
        {
            masuk();
        }
        else if (p == 75)
        {
            if (pilih == 1)
            {
                pilih = 2;
                bingkaii(124, 27, 16, 4, 0, 7, 219); // dana
                bingkaii(150, 27, 16, 4, 0, 7, 219); // gopay
                posisi(130, 29);
                warna_text(0);
                printf("DANA");
                posisi(156, 29);
                warna_text(4);
                printf("GOPAY");
            }
            else if (pilih == 2)
            {
                pilih = 1;
                bingkaii(124, 27, 16, 4, 0, 7, 219); // dana
                bingkaii(150, 27, 16, 4, 0, 7, 219); // gopay
                posisi(130, 29);
                warna_text(4);
                printf("DANA");
                posisi(156, 29);
                warna_text(0);
                printf("GOPAY");
            }
        }
        else if (p == 77)
        {
            if (pilih == 2)
            {
                pilih = 1;
                bingkaii(124, 27, 16, 4, 0, 7, 219); // dana
                bingkaii(150, 27, 16, 4, 0, 7, 219); // gopay
                posisi(130, 29);
                warna_text(4);
                printf("DANA");
                posisi(156, 29);
                warna_text(0);
                printf("GOPAY");
            }
            else if (pilih == 1)
            {
                pilih = 2;
                bingkaii(124, 27, 16, 4, 0, 7, 219); // dana
                bingkaii(150, 27, 16, 4, 0, 7, 219); // gopay
                posisi(130, 29);
                warna_text(0);
                printf("DANA");
                posisi(156, 29);
                warna_text(4);
                printf("GOPAY");
            }
        }
    }
    bingkaii(120, 33, 49, 3, 0, 7, 219);
    posisi(122, 35);
    printf("NO HP : ");
    no_hp(noo);
}
