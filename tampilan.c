 
 void bingkai_awal();
 void login();
 void c_login();
 void daftar();
 void c_daftar();
 void a();
 void text_judul();
 void loading1();
 void mobil1();
 void mobil2();
 void jalan2();
 void jalan1();
 void layar();

 

void bingkai_awal()
{
    bingkaiA();
    warna_text(3);warna_background(7);
    posisi(75, 6 + 1); printf("%c%c%c%c   %c%c%c  %c%c%c%c%c%c%c  %c%c%c%c   %c%c%c %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c%c   %c%c%c", 219, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 187, 219, 219, 187);
    posisi(75, 7 + 1);printf("%c%c%c%c%c  %c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c  %c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c  %c%c%c", 219, 219, 219, 219, 187, 219, 219, 186, 219, 219, 201, 205, 205, 205, 219, 219, 187, 219, 219, 219, 219, 187, 219, 219, 186, 200, 205, 205, 219, 219, 201, 205, 205, 188, 219, 219, 201, 205, 205, 205, 219, 219, 187, 219, 219, 219, 219, 187, 219, 219, 186);
    posisi(75, 8 + 1);printf("%c%c%c%c%c%c %c%c%c %c%c%c   %c%c%c %c%c%c%c%c%c %c%c%c    %c%c%c    %c%c%c   %c%c%c %c%c%c%c%c%c %c%c%c", 219, 219, 201, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 201, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 201, 219, 219, 187, 219, 219, 186);
    posisi(75, 9 + 1);printf("%c%c%c%c%c%c%c%c%c%c %c%c%c   %c%c%c %c%c%c%c%c%c%c%c%c%c    %c%c%c    %c%c%c   %c%c%c %c%c%c%c%c%c%c%c%c%c", 219, 219, 186, 200, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 200, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 200, 219, 219, 187, 219, 219, 186);
    posisi(75, 10 + 1);printf("%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c %c%c%c%c%c%c    %c%c%c    %c%c%c%c%c%c%c%c%c %c%c%c %c%c%c%c%c%c", 219, 219, 186, 200, 219, 219, 219, 219, 186, 200, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 200, 219, 219, 219, 219, 186, 219, 219, 186, 200, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 200, 219, 219, 219, 219, 186);
    posisi(75, 11 + 1);printf("%c%c%c  %c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c  %c%c%c%c%c    %c%c%c     %c%c%c%c%c%c%c  %c%c%c  %c%c%c%c%c", 200, 205, 188, 200, 205, 205, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 205, 205, 188, 200, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 205, 205, 188);

    posisi(90, 15);printf("%c%c%c   %c%c%c %c%c%c   %c%c%c %c%c%c  %c%c%c    ", 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 187);
    posisi(90, 16);printf("%c%c%c%c %c%c%c%c %c%c%c   %c%c%c %c%c%c %c%c%c%c ", 200, 219, 219, 187, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 201, 188);
    posisi(90, 17);printf(" %c%c%c%c%c%c%c  %c%c%c   %c%c%c %c%c%c%c%c%c%c   ", 200, 219, 219, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 201, 188);
    posisi(90, 18);printf("  %c%c%c%c%c   %c%c%c   %c%c%c %c%c%c%c%c%c%c     ", 200, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 201, 205, 219, 219, 187);
    posisi(90, 19);printf("   %c%c%c    %c%c%c%c%c%c%c%c%c %c%c%c  %c%c%c    ", 219, 219, 186, 200, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 219, 219, 187);
    posisi(90, 20);printf("   %c%c%c     %c%c%c%c%c%c%c  %c%c%c  %c%c%c      ", 200, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188);

    warna_text(0);
    posisi(3 + 1, 7 - 3);printf("                   ###                    ###                      ");
    posisi(3 + 1, 8 - 3);printf("                    ####                ####                       ");
    posisi(3 + 1, 9 - 3);printf("                     #####             ####                        ");
    posisi(3 + 1, 10 - 3);printf("                       ####          ####                          ");
    posisi(3 + 1, 11 - 3);printf("                         ####      ####                             ");
    posisi(3 + 1, 12 - 3);printf("                          ####    ####                              ");
    posisi(3 + 1, 13 - 3);printf("                             ######                                 ");
    posisi(3 + 1, 14 - 3);printf("  ##########################- ####- +##########################     ");
    posisi(3 + 1, 15 - 3);printf(" ################################################################   ");
    posisi(3 + 1, 16 - 3);printf("#################################################################  ");
    posisi(3 + 1, 17 - 3);printf("######                                           #######    #####  ");
    posisi(3 + 1, 18 - 3);printf("#####                                             ######      ###  ");
    posisi(3 + 1, 19 - 3);printf("####                                               #####    #####  ");
    posisi(3 + 1, 20 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 21 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 22 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 23 - 3);printf("####                                               ####      ####  ");
    posisi(3 + 1, 24 - 3);printf("####                                               ###        ###  ");
    posisi(3 + 1, 25 - 3);printf("####                                               ####      ####  ");
    posisi(3 + 1, 26 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 27 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 28 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 29 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 30 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 31 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 32 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 33 - 3);printf("####                                               ##############  ");
    posisi(3 + 1, 34 - 3);printf("#####                                             ###############  ");
    posisi(3 + 1, 35 - 3);printf("#####+                                           +###############  ");
    posisi(3 + 1, 36 - 3);printf("#######-                                       -#################  ");
    posisi(3 + 1, 37 - 3);printf("#################################################################  ");
    posisi(3 + 1, 38 - 3);printf("#################################################################  ");
    posisi(3 + 1, 39 - 3);printf(" ###############################################################   ");

    jalan1();
    jalan2();

    bingkaii(71, 32, 30, 4, 0, 7, 219);
    bingkaii(109, 32, 30, 4, 3, 7, 219);
    posisi(84, 34);warna_text(0);printf("LOGIN");
    posisi(122, 34);warna_text(0);printf("DAFTAR");
    posisi(93, 29);warna_text(0);printf("<< PRESS ESC 2X TO EXIT >>");
}

void login()
{
    system("cls");
    bingkaiA();
    bingkaii(6, 6, 130, 30, 2, 7, 219);
    warna_text(3);
    warna_background(7);
    posisi(40 - 7, 15 - 4);printf("%c%c%c       %c%c%c%c%c%c  %c%c%c   %c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c %c%c%c %c%c%c      %c%c%c%c   %c%c%c%c    %c%c%c %c%c%c%c%c%c%c", 219, 219, 187, 219, 219, 219, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 219, 187, 219, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187);
    posisi(40 - 7, 16 - 4);printf("%c%c%c      %c%c%c%c%c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c %c%c%c %c%c%c      %c%c%c%c%c %c%c%c%c%c   %c%c%c%c %c%c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 187, 205, 205, 219, 219, 187, 200, 219, 219, 187, 219, 219, 201, 188, 219, 219, 187, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 205, 205, 188, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 187, 219, 219, 219, 219, 186, 219, 219, 219, 186, 200, 205, 205, 205, 205, 219, 219, 187);
    posisi(40 - 7, 17 - 4);printf("%c%c%c      %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c%c%c%c%c   %c%c%c %c%c%c      %c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c  %c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 186, 200, 219, 219, 219, 219, 201, 188, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 219, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 201, 219, 219, 219, 219, 201, 219, 219, 186, 200, 219, 219, 186, 219, 219, 219, 219, 219, 201, 188);
    posisi(40 - 7, 18 - 4);printf("%c%c%c      %c%c%c%c%c%c%c%c   %c%c%c%c%c   %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c%c%c%c%c   %c%c%c %c%c%c      %c%c%c%c%c%c%c%c%c%c%c    %c%c%c %c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 187, 205, 205, 219, 219, 186, 200, 219, 219, 201, 188, 219, 219, 187, 205, 205, 219, 219, 186, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 188, 219, 219, 186, 219, 219, 186, 219, 219, 186, 200, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 201, 205, 205, 205, 188);
    posisi(40 - 7, 19 - 4);printf("%c%c%c%c%c%c%c%c %c%c%c  %c%c%c    %c%c%c    %c%c%c  %c%c%c %c%c%c  %c%c%c   %c%c%c      %c%c%c %c%c%c%c%c%c%c%c %c%c%c %c%c%c %c%c%c    %c%c%c %c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 186, 200, 205, 188, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 187);
    posisi(40 - 7, 20 - 4);printf("%c%c%c%c%c%c%c%c %c%c%c  %c%c%c    %c%c%c    %c%c%c  %c%c%c %c%c%c  %c%c%c   %c%c%c      %c%c%c %c%c%c%c%c%c%c%c %c%c%c     %c%c%c    %c%c%c %c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 205, 205, 205, 205, 205, 188);

    posisi(62, 15 - 4 + 5 + 3);printf("%c%c%c       %c%c%c%c%c%c%c   %c%c%c%c%c%c%c  %c%c%c %c%c%c%c   %c%c%c", 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 187, 219, 219, 219, 187, 219, 219, 187);
    posisi(62, 16 - 4 + 5 + 3);printf("%c%c%c      %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c  %c%c%c %c%c%c%c%c  %c%c%c", 219, 219, 186, 219, 219, 201, 205, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 205, 205, 188, 219, 219, 186, 219, 219, 219, 219, 187, 219, 219, 186);
    posisi(62, 17 - 4 + 5 + 3);printf("%c%c%c      %c%c%c   %c%c%c %c%c%c  %c%c%c%c %c%c%c %c%c%c%c%c%c %c%c%c", 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 219, 187, 219, 219, 186, 219, 219, 201, 219, 219, 187, 219, 219, 186);
    posisi(62, 18 - 4 + 5 + 3);printf("%c%c%c      %c%c%c   %c%c%c %c%c%c   %c%c%c %c%c%c %c%c%c%c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 200, 219, 219, 187, 219, 219, 186);
    posisi(62, 19 - 4 + 5 + 3);printf("%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c %c%c%c %c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 187, 200, 219, 219, 219, 219, 219, 219, 201, 188, 200, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 200, 219, 219, 219, 219, 186);
    posisi(62, 20 - 4 + 5 + 3);printf("%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c   %c%c%c%c%c%c%c  %c%c%c %c%c%c  %c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 205, 205, 188);

    bingkaii(60 - 30 - 2, 31 - 5 + 3, 40, 4, 3, 7, 219);
    bingkaii(101, 31 - 5 + 3, 40, 4, 3, 7, 219);
    posisi(32 - 18, 33 - 5 + 7);warna_text(0);printf("<< PRESS ESC TO BACK");
    posisi(53 - 20 - 2, 33 - 5 + 3);warna_text(0);printf("Username : ");
    posisi(104, 33 - 5 + 3);warna_text(0);printf("Password : ");
    c_login();
}

void daftar()
{
    bingkaiA();
    bingkaii(9, 6, 150, 30, 2, 7, 219);
    warna_text(3);
    warna_background(7);
    posisi(60, 11);printf("%c%c%c%c%c%c%c   %c%c%c%c%c%c  %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c%c ", 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187);
    posisi(60, 12);printf("%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c", 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 205, 205, 188, 200, 205, 205, 219, 219, 201, 205, 205, 188, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 219, 219, 187);
    posisi(60, 13);printf("%c%c%c  %c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c      %c%c%c    %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 187, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 201, 188);
    posisi(60, 14);printf("%c%c%c  %c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c      %c%c%c    %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 186, 219, 219, 201, 205, 205, 219, 219, 186, 219, 219, 201, 205, 205, 188, 219, 219, 186, 219, 219, 201, 205, 205, 219, 219, 186, 219, 219, 201, 205, 205, 219, 219, 187);
    posisi(60, 15);printf("%c%c%c%c%c%c%c%c %c%c%c  %c%c%c %c%c%c         %c%c%c    %c%c%c  %c%c%c %c%c%c  %c%c%c", 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186);
    posisi(60, 16);printf("%c%c%c%c%c%c%c  %c%c%c  %c%c%c %c%c%c         %c%c%c    %c%c%c  %c%c%c %c%c%c  %c%c%c", 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188);

    bingkaii(20 - 11, 20, 100, 16, 2, 7, 219);
    bingkaii(10, 23, 98, 0, 0, 7, 22);
    bingkaii(10, 26, 98, 0, 0, 7, 22);
    bingkaii(10, 29, 98, 0, 0, 7, 22);
    bingkaii(10, 32, 98, 0, 0, 7, 22);

    posisi(11, 22);printf("Nama\t\t:");
    posisi(11, 25);printf("Umur\t\t:    Tahun");
    posisi(11, 28);printf("Username\t:");
    posisi(11, 31);printf("Password\t:");
    posisi(30, 35);printf("<< PRESS ESC TO BACK");
    c_daftar();
}

void a()
{
     warna_text(3);warna_background(7);
    posisi(87-10, 6 + 1-3); printf("%c%c%c%c   %c%c%c  %c%c%c%c%c%c%c  %c%c%c%c   %c%c%c %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c%c   %c%c%c        ", 219, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 187, 219, 219, 187);
    posisi(87-10, 7 + 1-3);printf("%c%c%c%c%c  %c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c  %c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c  %c%c%c ", 219, 219, 219, 219, 187, 219, 219, 186, 219, 219, 201, 205, 205, 205, 219, 219, 187, 219, 219, 219, 219, 187, 219, 219, 186, 200, 205, 205, 219, 219, 201, 205, 205, 188, 219, 219, 201, 205, 205, 205, 219, 219, 187, 219, 219, 219, 219, 187, 219, 219, 186);
    posisi(87-10, 8 + 1-3);printf("%c%c%c%c%c%c %c%c%c %c%c%c   %c%c%c %c%c%c%c%c%c %c%c%c    %c%c%c    %c%c%c   %c%c%c %c%c%c%c%c%c %c%c%c          ", 219, 219, 201, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 201, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 201, 219, 219, 187, 219, 219, 186);
    posisi(87-10, 9 + 1-3);printf("%c%c%c%c%c%c%c%c%c%c %c%c%c   %c%c%c %c%c%c%c%c%c%c%c%c%c    %c%c%c    %c%c%c   %c%c%c %c%c%c%c%c%c%c%c%c%c       ", 219, 219, 186, 200, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 200, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 200, 219, 219, 187, 219, 219, 186);
    posisi(87-10, 10 + 1-3);printf("%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c %c%c%c%c%c%c    %c%c%c    %c%c%c%c%c%c%c%c%c %c%c%c %c%c%c%c%c%c    ", 219, 219, 186, 200, 219, 219, 219, 219, 186, 200, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 200, 219, 219, 219, 219, 186, 219, 219, 186, 200, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 200, 219, 219, 219, 219, 186);
    posisi(87-10, 11 + 1-3);printf("%c%c%c  %c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c  %c%c%c%c%c    %c%c%c     %c%c%c%c%c%c%c  %c%c%c  %c%c%c%c%c           ", 200, 205, 188, 200, 205, 205, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 205, 205, 188, 200, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 205, 205, 188);

    posisi(103-10, 15-3);printf("%c%c%c   %c%c%c %c%c%c   %c%c%c %c%c%c  %c%c%c    ", 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 187);
    posisi(103-10, 16-3);printf("%c%c%c%c %c%c%c%c %c%c%c   %c%c%c %c%c%c %c%c%c%c ", 200, 219, 219, 187, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 201, 188);
    posisi(103-10, 17-3);printf(" %c%c%c%c%c%c%c  %c%c%c   %c%c%c %c%c%c%c%c%c%c   ", 200, 219, 219, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 201, 188);
    posisi(103-10, 18-3);printf("  %c%c%c%c%c   %c%c%c   %c%c%c %c%c%c%c%c%c%c     ", 200, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 201, 205, 219, 219, 187);
    posisi(103-10, 19-3);printf("   %c%c%c    %c%c%c%c%c%c%c%c%c %c%c%c  %c%c%c    ", 219, 219, 186, 200, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 219, 219, 187);
    posisi(103-10, 20-3);printf("   %c%c%c     %c%c%c%c%c%c%c  %c%c%c  %c%c%c      ", 200, 205, 188, 200, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188);
}

void text_judul()
{
    warna_text(7);warna_background(3);
    posisi(30, 5 + 1-3);printf("                                                                                                                ");
    posisi(30, 6 + 1-3);printf("  ::::::::::: :::    ::: :::::::::  :::    ::: :::             :::::::::: ::::::::::: :::        ::::    :::::  ");  
    posisi(30, 7 + 1-3);printf("      :+:     :+:    :+: :+:    :+: :+:    :+: :+:             :+:            :+:     :+:        +:+:+: :+:+:+  "); 
    posisi(30, 8 + 1-3);printf("      +:+     +:+    +:+ +:+    +:+ +:+    +:+ +:+             +:+            +:+     +:+        +:+ +:+:+ +:+  ");
    posisi(30, 9 + 1-3);printf("      +#+     +#+    +:+ +#+    +:+ +#+    +:+ +#+             :#::+::#       +#+     +#+        +#+  +:+  +#+  ");
    posisi(30, 10 + 1-3);printf("      +#+     +#+    +#+ +#+    +#+ +#+    +#+ +#+             +#+            +#+     +#+        +#+       +#+  ");
    posisi(30, 11 + 1-3);printf("  #+# #+#     #+#    #+# #+#    #+# #+#    #+# #+#             #+#            #+#     #+#        #+#       #+#  ");
    posisi(30, 12 + 1-3);printf("   #####       ########  #########   ########  ##########      ###        ########### ########## ###       ###  ");
    posisi(30, 13 + 1-3);printf("                                                                                                                ");
}

void loading1(){
    posisi(60 - 30 - 8 , 31 - 5 + 3 + 8); printf("please wait");
    for (int i = 0; i <= 100; i++){
        for (int j = 0; j <= 0; j++){
            if (i == 0 || i == 128 || j == 0){
                Sleep(1);
                posisi(i + 60 - 30 - 2 + 6, 31 - 5 + 3 + 8);
                printf("%c", 219);
            }
        }
    }
}

void mobil1(int x, int y)
{

    posisi(x, y);
    printf("     ______\n");
    posisi(x, y + 1);
    printf("    /|_||_\\`.__\n");
    posisi(x, y + 2);
    printf("   (   _    _ _\\\n");
    posisi(x, y + 3);
    printf("...=`-(_)--(_)-'\n");
}
void mobil2(int x, int y)
{
    posisi(x, y);
    printf("     ______     \n");
    posisi(x, y + 1);
    printf(" __.'/_||_|\\   \n");
    posisi(x, y + 2);
    printf("/_ _    _   )   \n");
    posisi(x, y + 3);
    printf("'-(_)--(_)-`=...\n");
}

void jalan2()
{

    int x = 8;
    int scareenWidth = 55 - 16; // lebar consol
    int speed = 1;
    while (x < scareenWidth)
    {
        mobil1(x, 29 - 3);
        Sleep(20);
        x += speed;
    }
}

void jalan1()
{
    int x = 55 - 15 - 2;
    int scareenWidth = 8; // lebar consol
    int speed = 1;        // kecepatan mobil
    while (x > scareenWidth)
    {
        // clearScreen();
        mobil2(x, 20 - 3);
        Sleep(20); // jeda sejenap agar bergerak
        x -= speed;
    }
}

void layar()
{
    posisi(40 - 7 + 28, 15 - 4 - 7);printf("%c%c%c       %c%c%c%c%c%c  %c%c%c   %c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c %c%c%c %c%c%c      %c%c%c%c   %c%c%c%c    %c%c%c %c%c%c%c%c%c%c", 219, 219, 187, 219, 219, 219, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 187, 219, 219, 187, 219, 219, 219, 187, 219, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187);
    posisi(40 - 7 + 28, 16 - 4 - 7);printf("%c%c%c      %c%c%c%c%c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c %c%c%c %c%c%c      %c%c%c%c%c %c%c%c%c%c   %c%c%c%c %c%c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 187, 205, 205, 219, 219, 187, 200, 219, 219, 187, 219, 219, 201, 188, 219, 219, 187, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 205, 205, 188, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 187, 219, 219, 219, 219, 186, 219, 219, 219, 186, 200, 205, 205, 205, 205, 219, 219, 187);
    posisi(40 - 7 + 28, 17 - 4 - 7);printf("%c%c%c      %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c%c%c%c%c   %c%c%c %c%c%c      %c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c  %c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 186, 200, 219, 219, 219, 219, 201, 188, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 219, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 201, 219, 219, 219, 219, 201, 219, 219, 186, 200, 219, 219, 186, 219, 219, 219, 219, 219, 201, 188);
    posisi(40 - 7 + 28, 18 - 4 - 7);printf("%c%c%c      %c%c%c%c%c%c%c%c   %c%c%c%c%c   %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c%c%c%c%c   %c%c%c %c%c%c      %c%c%c%c%c%c%c%c%c%c%c    %c%c%c %c%c%c%c%c%c%c", 219, 219, 186, 219, 219, 187, 205, 205, 219, 219, 186, 200, 219, 219, 201, 188, 219, 219, 187, 205, 205, 219, 219, 186, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 188, 219, 219, 186, 219, 219, 186, 219, 219, 186, 200, 219, 219, 201, 188, 219, 219, 186, 219, 219, 186, 219, 219, 201, 205, 205, 205, 188);
    posisi(40 - 7 + 28, 19 - 4 - 7);printf("%c%c%c%c%c%c%c%c %c%c%c  %c%c%c    %c%c%c    %c%c%c  %c%c%c %c%c%c  %c%c%c   %c%c%c      %c%c%c %c%c%c%c%c%c%c%c %c%c%c %c%c%c %c%c%c    %c%c%c %c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 186, 200, 205, 188, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 187);
    posisi(40 - 7 + 28, 20 - 4 - 7);printf("%c%c%c%c%c%c%c%c %c%c%c  %c%c%c    %c%c%c    %c%c%c  %c%c%c %c%c%c  %c%c%c   %c%c%c      %c%c%c %c%c%c%c%c%c%c%c %c%c%c     %c%c%c    %c%c%c %c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 205, 205, 205, 205, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 188, 200, 205, 205, 205, 205, 205, 205, 188);
}