#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>

#include "../yuser.c"
#include "../tampilan.c"
#include "../validasi.c"
#include "../crud.c"
#include "../admin.c"

void posisi(int kolom, int baris);
void warna_text(int color);
void warna_background(int color);
void bingkaii(int kolom, int baris, int panjang, int lebar, int color, int bg, int ascii);
void bingkaiA();

#define outputHandle GetStdHandle(STD_OUTPUT_HANDLE)

int text_color = FOREGROUND_INTENSITY;
int bg_color = 0;

void posisi(int kolom, int baris)
{
    COORD position = {kolom, baris};
    SetConsoleCursorPosition(outputHandle, position);
}

void warna_text(int color)
{
    SetConsoleTextAttribute(outputHandle, color + bg_color * 16);
    text_color = color;
}

void warna_background(int color)
{
    SetConsoleTextAttribute(outputHandle, text_color + color * 16);
    bg_color = color;
}

void bingkaii(int kolom, int baris, int panjang, int lebar, int color, int bg, int ascii){
    for (int i = 0; i <= panjang; i++){
        for (int j = 0; j <= lebar; j++){
            if ( i == 0 || i == panjang || j == 0 || j == lebar ){
                posisi(i+kolom,j+baris); warna_text(color); printf("%c",ascii);
            }
            else{
                posisi(i+kolom,j+baris); warna_background(bg); printf(" ");
            }
        }
    }
}

void bingkaiA(){
    // system("COLOR 7A");
    warna_text('A');warna_background(7);
    bingkaii(2,1,138,38,2,7,219);
}
