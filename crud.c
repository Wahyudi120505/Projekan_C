void c_daftar();
void c_login();
void login();
void masuk();
void awal_admin();
void d_user();
void user1();
void edit_1();


char c_username[100][100], c_pass[100][100], c_nama[100][100], c_umur[100][100];
char username[50], pass[50], nama[50], umur[50];
char user_admin[50] = "admin", pass_admin[50] = "admin";
int j = 0;

void c_daftar()
{
    posisi(26, 22);

    v_nama(nama);
    posisi(26, 25);
    v_umur(umur);
    posisi(26, 28);
    v_username_daftar(username);
    posisi(26, 31);
    v_pass_daftar(pass);

    FILE *data_user;
    data_user = fopen("data_user.txt", "a");
    fprintf(data_user, "%s/%s/%s/%s\n", nama, umur, username, pass);
    fclose(data_user);
    loading1();
    Sleep(100);
    system("cls");
    login();
}

void c_login()
{
    int dex = 0, sama = 0;
    posisi(53 - 20 - 2 + 12, 33 - 5 + 3);
    v_daftar(username);
    posisi(104 + 20 - 8, 33 - 5 + 3);
    v_pass_daftar(pass);
    FILE *data_user;
    data_user = fopen("data_user.txt", "r");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        if (strcmp(username, c_username[dex]) == 0 && strcmp(pass, c_pass[dex]) == 0)
        {
            sama++;
        }
        dex++;
    }
    fclose(data_user);
    if(strcmp(username,user_admin) == 0 && strcmp(pass,pass_admin) == 0)
    {
        awal_admin();
    }
    else if (sama != 0)
    {
        masuk();
    }
    else
    {
        posisi(70, 38);
        printf("USERNAME ATAU PASSWORD SALAH !!");
        Sleep(300);
        posisi(70, 38);
        printf("                               ");
        Sleep(300);
        posisi(70, 38);
        printf("USERNAME ATAU PASSWORD SALAH !!");
        Sleep(300);
        posisi(70, 38);
        printf("                               ");
        Sleep(300);
        posisi(70, 38);
        printf("USERNAME ATAU PASSWORD SALAH !!");
        Sleep(300);
        posisi(70, 38);
        printf("                               ");
        login();
    }
}

void d_user()
{
    int dex = 0;
    FILE *data_user;
    data_user = fopen("data_user.txt", "r");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[dex], &c_umur[dex], &c_username[dex], &c_pass[dex]) != EOF)
    {
        if (strcmp(username, c_username[dex]) == 0 && strcmp(pass, c_pass[dex]) == 0)
        {
            posisi(5, 40);
            //printf("                           ");
            bingkaii(48, 20, 100, 16, 2, 7, 219);
            bingkaii(49, 23, 98, 0, 0, 7, 22);
            bingkaii(49, 26, 98, 0, 0, 7, 22);
            bingkaii(49, 29, 98, 0, 0, 7, 22);
            bingkaii(49, 32, 98, 0, 0, 7, 22);

            posisi(50, 22);
            printf("Nama\t\t: %s", c_nama[dex]);
            posisi(50, 25);
            printf("Umur\t\t: %s Tahun", c_umur[dex]);
            posisi(50, 28);
            printf("Username\t: %s", c_username[dex]);
            posisi(50, 31);
            printf("Password\t: %s", c_pass[dex]);
            posisi(53, 35);
            printf("<< PRESS ESC TO RETURN TO THE MENU");
            posisi(53, 37);
            printf("PRESS 'Y' TO EDIT THE DATA  \t\t\t\t\t   PRESS [TAB] TO LOG OUT");
            break;
        }
        dex++;
    }
    fclose(data_user);
    char p;
    int tahan = 0;
    while ((p = getch()) != 13 || tahan == 0)
    {
        if (p == 27)
        {
            masuk();
        }
        else if (p == 'Y' || p == 'y')
        {
            posisi(53, 35);
            printf("                                   ");
            posisi(53, 35);
            printf("PRESS ESC TO SAVE THE DATA");
            edit_1();
        }
        else if(p == 9)
        {
            daftar_login();
        }
    }
}

void edit_1()
{
    char change_username[50] = "", change_pass[50] = "", change_nama[50] = "", change_umur[50] = "";
    posisi(100, 22);
    printf("%c", 17);
    char q;
    int a = 1;
    while ((q = getch()) != 13)
    {
        if (q == 80)
        {
            if (a == 1)
            {
                a = 2;
                posisi(100, 22);
                printf("    ");
                posisi(100, 25);
                printf("%c", 17);
            }
            else if (a == 2)
            {
                a = 3;
                posisi(100, 22);
                printf("    ");
                posisi(100, 25);
                printf("    ");
                posisi(100, 28);
                printf("%c", 17);
            }
            else if (a == 3)
            {
                a = 4;
                posisi(100, 22);
                printf("    ");
                posisi(100, 25);
                printf("    ");
                posisi(100, 28);
                printf("    ");
                posisi(100, 31);
                printf("%c", 17);
            }
            else if (a == 4)
            {
                a = 1;
                posisi(100, 22);
                printf("%c", 17);
                posisi(100, 25);
                printf("    ");
                posisi(100, 28);
                printf("    ");
                posisi(100, 31);
                printf("    ");
            }
        }
        else if (q == 72)
        {
            if (a == 4)
            {
                a = 3;
                posisi(100, 22);
                printf("    ");
                posisi(100, 25);
                printf("    ");
                posisi(100, 28);
                printf("%c", 17);
                posisi(100, 31);
                printf("    ");
            }
            else if (a == 3)
            {
                a = 2;
                posisi(100, 22);
                printf("    ");
                posisi(100, 25);
                printf("%c", 17);
                posisi(100, 28);
                printf("    ");
                posisi(100, 31);
                printf("    ");
            }
            else if (a == 2)
            {
                a = 1;
                posisi(100, 22);
                printf("%c", 17);
                posisi(100, 25);
                printf("    ");
                posisi(100, 28);
                printf("    ");
                posisi(100, 31);
                printf("    ");
            }
            else if (a == 1)
            {
                a = 4;
                posisi(100, 22);
                printf("    ");
                posisi(100, 25);
                printf("    ");
                posisi(100, 28);
                printf("    ");
                posisi(100, 31);
                printf("%c", 17);
            }
        }
        else if (q == 27)
        {
            d_user();
        }
    }
    if (a == 1)
    {
        posisi(66, 22);
        printf("                         ");
        posisi(66, 22);
        e_nama(change_nama);
    }
    else if (a == 2)
    {
        posisi(66, 25);
        printf("  ");
        posisi(66, 25);
        e_umur(change_umur);
        posisi(100, 25);
        printf("    ");
    }
    else if (a == 3)
    {
        posisi(66, 28);
        printf("                         ");
        posisi(66, 28);
        e_username(change_username);
        posisi(100, 28);
        printf("    ");
    }
    else if (a == 4)
    {
        posisi(66, 31);
        printf("                         ");
        posisi(66, 31);
        e_pass(change_pass);
        posisi(100, 31);
        printf("    ");
    }
    int index = 0;
    FILE *data_user;
    data_user = fopen("data_user.txt", "r");
    while (fscanf(data_user, "%[^/]/%[^/]/%[^/]/%[^\n]\n", &c_nama[index], &c_umur[index], &c_username[index], &c_pass[index]) != EOF)
    {
        if (strcmp(username, c_username[index]) == 0)
        {
            if (strcmp(change_username, "") != 0)
            {
                strcpy(c_username[index], change_username);
                strcpy(username, change_username);
                //getch();
            }
            else if (strcmp(change_nama, "") != 0)
            {
                strcpy(c_nama[index], change_nama);
            }
            else if (strcmp(change_umur, "") != 0)
            {
                strcpy(c_umur[index], change_umur);
            }
            else if (strcmp(change_pass, "") != 0)
            {
                strcpy(c_pass[index], change_pass);
                strcpy(pass, change_pass);
            }
        }
        index++;
    }
    fclose(data_user);

    FILE *update;
    update = fopen("data_user.txt", "w");
    for (int i = 0; i < index; i++)
    {
        fprintf(update, "%s/%s/%s/%s\n", c_nama[i], c_umur[i], c_username[i], c_pass[i]);
    }
    fclose(update);
    edit_1();
}



