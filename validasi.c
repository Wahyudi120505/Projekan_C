void v_nama(char *nama);
void daftar_login();
void v_umur(char *umur);
char *v_username_daftar(char *username);
void v_pass_daftar(char *pass);
void v_pilih();
void v_bayar(char *uang, char *filee);
void upload_1();
void awal_admin();
void masuk();
// void piil();
void *pilih_a(int piil, int panjang_n, char *notif);
void delet_akun();
void delet();
// void pilih_akun(char *minn);
void no_hp();
void waktu();
void min_judul();
void min_file();
void banfil();
void vip_film();
int pili = 0, no = 4;
char film_tamp[100][100], judul_f[100], f_baru[100][100];

void v_nama(char *nama)
{

    char p;
    int dex = 0;
    while ((p = getch()) != 13 || dex < 5 || nama[dex - 1] == ' ')
    {
        if (((islower(p) && dex > 0 && nama[dex - 1] != ' ' && (nama[dex - 1] != p || nama[dex - 2] != p)) || (isupper(p) && (dex == 0 || nama[dex - 1] == ' ')) || (nama[dex - 1] != ' ' && p == ' ' && dex != 0 && (islower(nama[dex - 1])))) && dex < 25)
        {
            printf("%c", p);
            nama[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            nama[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            daftar_login();
        }
    }
    nama[dex] = '\0';
}

void v_umur(char *umur)
{
    char p;
    int dex = 0;
    while ((p = getch()) != 13 || dex < 1)
    {
        if ((p >= '1' && p <= '9' && dex == 0) || (p >= '0' && p <= '9' && dex != 0) && dex < 2)
        {
            printf("%c", p);
            umur[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            umur[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            daftar_login();
        }
    }
    umur[dex] = '\0';
    int batas;
    batas = atoi(umur);
    if (batas <= 17)
    {
        for (int i = 1; i <= 3; i++)
        {

            posisi(50, 25);
            printf("(Anda Belum Cukup Umur)");
            Sleep(100);
            posisi(50, 25);
            printf("                       ");
            Sleep(100);
        }
        posisi(26, 25);
        printf("  ");
        posisi(26, 25);
        v_umur(umur);
    }
    else if (batas >= 70)
    {
        for (int i = 1; i <= 3; i++)
        {

            posisi(50, 25);
            printf("(UMUR MELEBIHI KETENTUAN)");
            Sleep(100);
            posisi(50, 25);
            printf("                         ");
            Sleep(100);
        }
        posisi(26, 25);
        printf("  ");
        posisi(26, 25);
        v_umur(umur);
    }
}

void v_daftar(char *username)
{
    char p;
    int dex = 0;

    while (((p = getch()) != 13 || dex < 5))
    {
        if (((p >= '0' && p <= '9' && dex != 0) || (p >= 'a' && p <= 'z')) && dex < 15)
        {
            printf("%c", p);
            username[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            username[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            daftar_login();
        }
    }
    username[dex] = '\0';
}

char *v_username_daftar(char *username)
{
    char c_username[100][100], c_pass[100][100], c_nama[100][100], c_umur[100][100];
    char user_admin[50] = "admin";
    char p;
    int dex = 0;

    while (((p = getch()) != 13 || dex < 5))
    {
        if (((p >= '0' && p <= '9' && dex != 0) || (p >= 'a' && p <= 'z')) && dex < 15)
        {
            printf("%c", p);
            username[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            username[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            daftar_login();
        }
    }
    username[dex] = '\0';
    int cek = 0, sama = 0;
    FILE *data_user;
    data_user = fopen("data_user.txt", "r");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[cek], &c_umur[cek], &c_username[cek], &c_pass[cek]) != EOF)
    {
        if (strcmp(username, c_username[cek]) == 0 || strcmp(username, user_admin) == 0)
        {
            sama++;
        }
        cek++;
    }
    fclose(data_user);

    if (sama != 0)
    {
        posisi(70, 38);
        printf("USERNAME/PASSWORD SUDAH ADA !!");
        Sleep(300);
        posisi(70, 38);
        printf("                               ");
        Sleep(300);
        posisi(70, 38);
        printf("USERNAME/PASSWORD SUDAH ADA !!");
        Sleep(300);
        posisi(70, 38);
        printf("                               ");
        Sleep(300);
        posisi(70, 38);
        printf("USERNAME/PASSWORD SUDAH ADA !!");
        Sleep(300);
        posisi(70, 38);
        printf("                               ");
        posisi(26, 28);
        printf("                               ");
        posisi(26, 28);
        v_username_daftar(username);
    }
}

void v_pass_daftar(char *pass)
{
    char p;
    int dex = 0;
    while (((p = getch()) != 13 || dex < 5))
    {
        if (((p >= '0' && p <= '9' && dex != 0) || (p >= 'A' && p <= 'z') || (p >= 'a' && p <= 'z')) && dex < 15)
        {

            printf("*");
            pass[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            pass[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            daftar_login();
        }
    }
    pass[dex] = '\0';
}

void e_nama(char *nama)
{
    char p;
    int dex = 0;
    while ((p = getch()) != 13 || dex < 6 || nama[dex - 1] == ' ')
    {
        if (((islower(p) && dex > 0 && nama[dex - 1] != ' ' && (nama[dex - 1] != p || nama[dex - 2] != p)) || (isupper(p) && (dex == 0 || nama[dex - 1] == ' ')) || (nama[dex - 1] != ' ' && p == ' ' && dex != 0 && (islower(nama[dex - 1])))) && dex < 25)
        {
            printf("%c", p);
            nama[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            nama[dex] = '\0';
            dex--;
        }
    }
    nama[dex] = '\0';
}

void e_umur(char *umur)
{
    char p;
    int dex = 0;
    while ((p = getch()) != 13 || dex < 1)
    {
        if ((p >= '1' && p <= '9' && dex == 0) || (p >= '0' && p <= '9' && dex != 0) && dex < 2)
        {
            printf("%c", p);
            umur[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            umur[dex] = '\0';
            dex--;
        }
    }
    umur[dex] = '\0';
    int batas;
    batas = atoi(umur);
    if (batas <= 17)
    {
        for (int i = 1; i <= 3; i++)
        {
            posisi(105, 25);
            printf("(Anda Belum Cukup Umur)");
            Sleep(100);
            posisi(105, 25);
            printf("                       ");
            Sleep(100);
        }
        posisi(66, 25);
        printf("  ");
        posisi(66, 25);
        e_umur(umur);
    }
}

char *e_username(char *change_username)
{
    char c_username[100][100], c_pass[100][100], c_nama[100][100], c_umur[100][100];
    char p;
    int dex = 0;

    while (((p = getch()) != 13 || dex < 5))
    {
        if (((p >= '0' && p <= '9' && dex != 0) || (p >= 'A' && p <= 'z')) && dex < 15)
        {
            printf("%c", p);
            change_username[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            change_username[dex] = '\0';
            dex--;
        }
    }
    change_username[dex] = '\0';
    int index = 0;
    boolean sama = false;
    FILE *data_user;
    data_user = fopen("data_user.txt", "r");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[index], &c_umur[index], &c_username[index], &c_pass[index]) != EOF)
    {
        if (strcmp(change_username, c_username[index]) == 0)
        {
            sama = true;
            break;
        }
        index++;
    }
    fclose(data_user);

    if (sama)
    {
        posisi(105, 28);
        printf("USERNAME SUDAH ADA !!");
        Sleep(300);
        posisi(105, 28);
        printf("                               ");
        Sleep(300);
        posisi(105, 28);
        printf("USERNAME SUDAH ADA !!");
        Sleep(300);
        posisi(105, 28);
        printf("                               ");
        Sleep(300);
        posisi(105, 28);
        printf("USERNAME SUDAH ADA !!");
        Sleep(300);
        posisi(105, 28);
        printf("                               ");
        posisi(66, 28);
        printf("                               ");
        posisi(66, 28);
        e_username(change_username);
    }
}

void e_pass(char *pass)
{
    char p;
    int dex = 0;
    while (((p = getch()) != 13 || dex < 5))
    {
        if (((p >= '0' && p <= '9' && dex != 0) || (p >= 'A' && p <= 'z') || (p >= 'a' && p <= 'z')) && dex < 15)
        {
            printf("*");
            pass[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            pass[dex] = '\0';
            dex--;
        }
    }
    pass[dex] = '\0';
}

void v_pilih(int pilih, int index)
{
    char p, uang[100];
    int dex = 0;
    while ((p = getch()) != 13 || dex == 0)
    {
        if ((p >= '1' && p <= '9' && dex == 0) || (p == '0' && dex != 0) && dex < 1)
        {
            pilih = p - '0';
            printf("%d", pilih);
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");

            dex--;
        }
        else if (p == 27)
        {
            masuk();
        }
    }
    if (pilih > index)
    {
        posisi(90, 37);
        warna_text(4);
        printf("PILIHAN TIDAK ADA");
        Sleep(1000);
        posisi(90, 37);
        printf("                    ");
        posisi(138, 21);
        printf("     ");
        posisi(138, 21);
        warna_text(0);
        v_pilih(pilih, index);
    }
    else
    {
        pili = pilih;
        metode();
    }
}

void v_bayar(char *uang, char *filee)
{
    char p;
    int dex = 0, index = 0;
    while ((p = getch()) != 13 || dex < 3)
    {
        if ((p >= '1' && p <= '9' && dex == 0) || (p >= '0' && p <= '9' && dex != 0) && dex < 7)
        {
            printf("%c", p);
            uang[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            uang[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            awal_admin();
        }
        else if(p == 9)
        {
            upload_1();
        }
    }
    uang[dex] = '\0';
    int bayyar = atoi(uang);
    FILE *film = fopen("tamp_film.txt", "r");
    FILE *upload = fopen("film.txt", "a");
    while (fscanf(film, "%[^\n]\n", &film_tamp[index]) != EOF)
    {
        if (strcmp(filee, film_tamp[index]) == 0)
        {
            fprintf(upload, "%d/%s/%d/%s\n", no, judul_f, bayyar, filee);
            posisi(99, 38);
            printf("FILM BERHASIL DI TAMBAH");
            no++;
            break;
        }
        index++;
    }
    fclose(film);
    fclose(upload);
    Sleep(3000);
    upload_1();
}


void no_hp(char *noo)
{
    char p;
    int index = 0;
    while ((p = getch()) != 13 || index < 12)
    {
        if (index < 12 && (p == '0' && index == 0 || p == '8' && index == 1 && noo[0] == '0' || p >= '1' && p <= '9' && p != '4' && p != '6' && index == 2 ||
                           p >= '1' && p <= '9' && p != '4' && p != '6' && noo[2] == '1' && index == 3 || p >= '1' && p <= '2' && noo[2] == '2' && index == 3 ||
                           p >= '2' && p <= '3' && noo[2] == '3' && index == 3 || p >= '2' && p <= '3' && noo[2] == '5' && index == 3 || p >= '6' && p <= '7' && p == '9' && noo[2] == '5' && index == 3 ||
                           p >= '7' && p <= '8' && noo[2] == '7' && index == 3 || p >= '1' && p <= '9' && noo[2] == '8' && index == 3 || p >= '5' && p <= '9' && noo[2] == '9' && index == 3 ||
                           p >= '0' && p <= '9' && index > 3))
        {
            printf("%c", p);
            noo[index] = p;
            index++;
        }
        else if (p == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            noo[index] = '\0';
        }
        else if (p == 27)
        {
            masuk();
        }
    }
    noo[index] = '\0';

    int dex = 0, no, cek = 0;
    FILE *filmm = fopen("film.txt", "r");
    FILE *data_user = fopen("data_user.txt", "r");
    FILE *income = fopen("income.txt", "a");
    while (fscanf(filmm, "%d/%[^/]/%d/%[^\n]\n", &no, &j_film[dex], &harga, &fillm[dex]) != EOF)
    {

        if (pili - 1 == dex)
        {
            waktu();
            char waktuu[100];
            snprintf(waktuu, sizeof(waktuu), "%02d:%02d/%02d.%02d.%02d", jam, menit, hari, bulan, tahun);
            fprintf(income, "%s/%s/%s/%d/%s\n", c_nama[cek], c_username[cek], j_film[dex], harga, waktuu);

            char sys[100];
            char com[100];
            snprintf(sys, sizeof(sys), "START film/%s.mp4", fillm[dex]);
            system(sys);
        }
        dex++;
    }
    fclose(filmm);
    fclose(data_user);
    fclose(income);
    vip();
}

void min_judul(char *judul)
{
    char p, filee[100];
    int dex = 0, halman = 1;
    while ((p = getch()) != 13 || dex < 6 || judul[dex - 1] == ' ')
    {
        if (((islower(p) && dex > 0 && judul[dex - 1] != ' ' && (judul[dex - 1] != p || judul[dex - 2] != p)) || (isupper(p) && (dex == 0 || judul[dex - 1] == ' ')) || (judul[dex - 1] != ' ' && p == ' ' && dex != 0 && (islower(judul[dex - 1])))) && dex < 25)
        {
            printf("%c", p);
            judul[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            judul[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            awal_admin();
        }
        else if(p == 9)
        {
            upload_1();
        }
    }
    judul[dex] = '\0';
    strcpy(judul_f, judul);
    posisi(105, 34);
    min_file(filee);
}

void min_file(char *filee)
{
    char p, uang[100];
    int dex = 0, halman = 1;

    while ((p = getch()) != 13 || dex < 6 || filee[dex - 1] == '_')
    {
        if (((islower(p) && dex > 0 && filee[dex - 1] != '_' && (filee[dex - 1] != p || filee[dex - 2] != p)) || (isupper(p) && (dex == 0 || filee[dex - 1] == '_')) || (filee[dex - 1] != '_' && p == '_' && dex != 0 && (islower(filee[dex - 1])))) && dex < 25)
        {
            printf("%c", p);
            filee[dex] = p;
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");
            filee[dex] = '\0';
            dex--;
        }
        else if (p == 27)
        {
            awal_admin();
        }
        else if (p == 9)
        {
            upload_1();
        }
    }
    filee[dex] = '\0';

    int i = 0, no, sam = 0;
    FILE *banding = fopen("film.txt", "r");
    while (fscanf(banding, "%d/%[^/]/%d/%[^\n]\n", &no, &j_film[i], &harga, &fillm[i]) != EOF)
    {
        if (strcmp(filee, fillm[i]) == 0)
        {
            sam++;
            break;
        }
        i++;
    }
    fclose(banding);
    if (sam != 0)
    {
        for (int a = 0; a < 5; a++)
        {
            Sleep(100);
            posisi(77, 29);
            printf("FILE SUDAH ADA");
            Sleep(100);
            posisi(77, 29);
            printf("              ");
            Sleep(100);
            posisi(77, 29);
            printf("FILE SUDAH ADA");
            Sleep(100);
            posisi(77, 29);
            printf("              ");
            Sleep(100);
            posisi(77, 29);
            printf("FILE SUDAH ADA");
            Sleep(100);
            posisi(77, 29);
            printf("              ");
        }
        posisi(105, 34);
        printf("                     ");
        posisi(105, 34);
        min_file(filee);
    }
    else
    {
        int index = 0, sama = 0;
        FILE *film = fopen("tamp_film.txt", "r");
        while (fscanf(film, "%[^\n]\n", &film_tamp[index]) != EOF)
        {
            if (strcmp(filee, film_tamp[index]) == 0)
            {
                sama++;
                break;
            }
            index++;
        }
        fclose(film);
        if (sama != 0)
        {
            posisi(105, 36);
            v_bayar(uang, filee);
        }
        else
        {
            for (int a = 0; a < 5; a++)
            {
                Sleep(100);
                posisi(77, 29);
                printf("FILE TIDAK DI TEMUKAN");
                Sleep(100);
                posisi(77, 29);
                printf("                      ");
                Sleep(100);
                posisi(77, 29);
                printf("FILE TIDAK DI TEMUKAN");
                Sleep(100);
                posisi(77, 29);
                printf("                      ");
                Sleep(100);
                posisi(77, 29);
                printf("FILE TIDAK DI TEMUKAN");
                Sleep(100);
                posisi(77, 29);
                printf("                      ");
            }
            posisi(105, 34);
            printf("                     ");
            posisi(105, 34);
            min_file(filee);
        }
    }
}

void *pilih_a(int piil, int panjang_n, char *notif)
{
    char p;
    int dex = 0;
    while ((p = getch()) != 13 || dex == 0)
    {
        if ((p >= '1' && p <= '9' && dex == 0) || (p == '0' && dex != 0) && dex < 2)
        {
            piil = p - '0';
            printf("%d", piil);
            dex++;
        }
        else if (p == 8 && dex != 0)
        {
            printf("\b \b");

            dex--;
        }
    }

    FILE *cek;
    cek = fopen("data_user.txt", "r");
    while (fscanf(cek, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        dex++;
    }
    fclose(cek);

    if (piil > dex || piil == 0)
    {
        posisi(115, 34);
        warna_text(12);
        printf("AKUN DENGAN NO %d TIDAK DI TEMUKAN", piil);
        Sleep(300);
        posisi(115, 34);
        printf("                                  ");
        Sleep(300);
        posisi(115, 34);
        warna_text(12);
        printf("AKUN DENGAN NO %d TIDAK DI TEMUKAN", piil);
        Sleep(300);
        posisi(115, 34);
        printf("                                  ");
        Sleep(300);
        posisi(115, 34);
        warna_text(12);
        printf("AKUN DENGAN NO %d TIDAK DI TEMUKAN", piil);
        Sleep(300);
        posisi(115, 34);
        printf("                                  ");
        delet();
    }
    else
    {
        for (int b = 0; b < panjang_n; b++)
        {
            Sleep(50);
            // warna_background(15);
            warna_text(12);
            posisi(111 + b, 34);
            printf("%c", notif[b]);
        }
        char p;
        int pilih = 1;
        posisi(113, 36);
        warna_text(12);
        printf(">>     <<");
        posisi(115, 36);
        warna_text(0);
        printf("TIDAK");
        warna_text(0);
        posisi(143, 36);
        printf("YAKIN");
        while ((p = getch()) != 13)
        {
            if (p == 75)
            {
                if (pilih == 1)
                {
                    pilih = 2;
                    posisi(113, 36);
                    warna_text(12);
                    printf("          ");
                    posisi(115, 36);
                    warna_text(0);
                    printf("TIDAK");
                    posisi(141, 36);
                    warna_text(12);
                    printf(">>     <<");
                    warna_text(0);
                    posisi(143, 36);
                    printf("YAKIN");
                }
                else if (pilih == 2)
                {
                    pilih = 1;
                    posisi(113, 36);
                    warna_text(12);
                    printf(">>     <<");
                    posisi(115, 36);
                    warna_text(0);
                    printf("TIDAK");
                    posisi(141, 36);
                    warna_text(12);
                    printf("          ");
                    warna_text(0);
                    posisi(143, 36);
                    printf("YAKIN");
                }
            }
            else if (p == 77)
            {
                if (pilih == 2)
                {
                    pilih = 1;
                    posisi(113, 36);
                    warna_text(12);
                    printf(">>     <<");
                    posisi(115, 36);
                    warna_text(0);
                    printf("TIDAK");
                    posisi(141, 36);
                    warna_text(12);
                    printf("          ");
                    warna_text(0);
                    posisi(143, 36);
                    printf("YAKIN");
                }
                else if (pilih == 1)
                {
                    pilih = 2;
                    posisi(113, 36);
                    warna_text(12);
                    printf("          ");
                    posisi(115, 36);
                    warna_text(0);
                    printf("TIDAK");
                    posisi(141, 36);
                    warna_text(12);
                    printf(">>     <<");
                    warna_text(0);
                    posisi(143, 36);
                    printf("YAKIN");
                }
            }
        }
        if (pilih == 1)
        {
            awal_admin();
        }
        else if (pilih == 2)
        {
            delet_akun(piil);
        }
    }
}