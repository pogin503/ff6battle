//#ifdef __FF_BATTLE_MUSIC_DEF__
//#define __FF_BATTLE_MUSIC_DEF__
#include "scale.h"

#define VOL 4

/* ここの定義されたものは４分音符の長さのあとに４分休符を入れたり、
 * ８分音符の長さのあとに８分休符をはさむと音が繋がらずにそれっぽく聞こえたはず*/

#define w4 370     /* ４分休符の長さ */
#define w8 170     /* ８分休符の長さ */
#define w16 63     /* １６分休符の長さ */
/* #define wt 500 */

#define tt4 150    /* ４分音符の長さ */
#define tt8 100    /* ８分音符の長さ */
#define tt16 45    /* １６分音符の長さ */
int end_flag = 0;  /* 音楽が終了した場合のフラグ */
                   /* 実際のプログラム内でend_flag = 1にするとすぐに音楽が終了する */

int merody_first_flag = 0;  /* 最初のメロディーの繰り返しのためのフラグ */

/* FF6の戦闘音楽 */
task ffBattle()
{

    while(end_flag == 0){

		//saisho
        if(merody_first_flag== 0){
            PlayToneEx(C5, 50, VOL, FALSE);      Wait(w16);if(end_flag == 1)break;
            PlayToneEx(Eflt5, 50, VOL, FALSE);   Wait(w16);if(end_flag == 1)break;
            PlayToneEx(Fsh5, 50, VOL, FALSE);    Wait(w16);if(end_flag == 1)break;
            PlayToneEx(A5, 50, VOL, FALSE);      Wait(w16);if(end_flag == 1)break;
            PlayToneEx(C6, 50, VOL, FALSE);      Wait(w16);if(end_flag == 1)break;
            PlayToneEx(Eflt6, 50, VOL, FALSE);   Wait(w16);if(end_flag == 1)break;
            PlayToneEx(Fsh6, 50, VOL, FALSE);    Wait(100);if(end_flag == 1)break;

            Wait(1);if(end_flag == 1)break;

            if(end_flag == 1)break;
            //saisho nishou setu bun
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(G5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(G5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(G5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            PlayToneEx(G5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
            merody_first_flag = 1;
        }
        Wait(1);if(end_flag == 1)break;

        //merody 1
        PlayToneEx(A5, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(B5, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(E6, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G6, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;

        PlayToneEx(E6, tt4, VOL, FALSE);     Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+50, VOL, FALSE);  Wait(w4+100);if(end_flag == 1)break;

        PlayToneEx(D6, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);	 Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);	 Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt4, VOL, FALSE);	 Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E5, tt4+50, VOL, FALSE);	 Wait(w4+100);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G5, tt8, VOL, FALSE);     Wait(w8);if(end_flag == 1)break;

        Wait(1);if(end_flag == 1)break;

        PlayToneEx(A6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G6, tt8, VOL, FALSE);      Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);      Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(E6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        Wait(1);if(end_flag == 1)break;

        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(B5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(E6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;

        PlayToneEx(E6, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+50, VOL, FALSE);   Wait(w4+100);if(end_flag == 1)break;

        PlayToneEx(D6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E5, tt4+50, VOL, FALSE);   Wait(w4+100);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        Wait(1);if(end_flag == 1)break;

        //agaru toko
        PlayToneEx(A5, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(D6, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(G6, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(C7, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;

        Wait(1);if(end_flag == 1)break;

        //merody 2
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8+w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        PlayToneEx(A5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt16, VOL, FALSE);  Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8+w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8+w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;

        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Dflt6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Gflt6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        Wait(1);if(end_flag == 1)break;

        //merody 1 nikaime
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8+w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        PlayToneEx(A5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt16, VOL, FALSE);  Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8+w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8+w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;

        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);      Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Dflt6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Gflt6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        Wait(1);if(end_flag == 1)break;

        PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(B5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(E6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        PlayToneEx(E6, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+50, VOL, FALSE);   Wait(w4+100);if(end_flag == 1)break;

        PlayToneEx(D6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E5, tt4+50, VOL, FALSE);   Wait(w4+100);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;

        Wait(1);if(end_flag == 1)break;

        PlayToneEx(A6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G6, tt8, VOL, FALSE);   Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);   Wait(w8-100);if(end_flag == 1)break;
        PlayToneEx(E6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        Wait(1);if(end_flag == 1)break;


        PlayToneEx(A5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(B5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(E6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        PlayToneEx(E6, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+50, VOL, FALSE);   Wait(w4+100);if(end_flag == 1)break;

        PlayToneEx(D6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt4, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E5, tt4+50, VOL, FALSE);   Wait(w4+100);if(end_flag == 1)break;
        PlayToneEx(E5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G5, tt8, VOL, FALSE);      Wait(w8);if(end_flag == 1)break;
        Wait(1);if(end_flag == 1)break;

        PlayToneEx(A5, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(D6, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(G6, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(C7, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;

        Wait(1);if(end_flag == 1)break;

        //merody 3
        PlayToneEx(Bflt5, tt4, VOL, FALSE);        Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+tt4+tt4, VOL, FALSE);   Wait(w4+w4);if(end_flag == 1)break;
        PlayToneEx(Gsh5, tt4, VOL, FALSE);         Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+tt4+tt4, VOL, FALSE);   Wait(w4+w4);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);           Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);           Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);           Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);           Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);           Wait(w4);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);           Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Eflt6, tt4, VOL, FALSE);        Wait(w4);if(end_flag == 1)break;
        PlayToneEx(Eflt6, tt4, VOL, FALSE);        Wait(w4);if(end_flag == 1)break;

        PlayToneEx(Bflt5, tt4, VOL, FALSE);        Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+tt4+tt4, VOL, FALSE);   Wait(w4+w4);if(end_flag == 1)break;
        PlayToneEx(Gsh5, tt4, VOL, FALSE);         Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A5, tt4+tt4+tt4, VOL, FALSE);   Wait(w4+w4);if(end_flag == 1)break;

        Wait(1);if(end_flag == 1)break;


        //merody 4
        PlayToneEx(Bflt5, tt8, VOL, FALSE);        Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);           Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);           Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);        Wait(w8);if(end_flag == 1)break;
        PlayToneEx(A5, tt8, VOL, FALSE);           Wait(w8);if(end_flag == 1)break;
        PlayToneEx(E5, tt8+tt16, VOL, FALSE);      Wait(w4);if(end_flag == 1)break;

        PlayToneEx(C6, tt8, VOL, FALSE);           Wait(w8+w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);        Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt8, VOL, FALSE);           Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt8, VOL, FALSE);           Wait(w8);if(end_flag == 1)break;
        PlayToneEx(Bflt5, tt8, VOL, FALSE);        Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F5, tt4+tt8, VOL, FALSE);       Wait(w4+w8);if(end_flag == 1)break;

        PlayToneEx(D6, tt4, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(C6, tt4, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(D6, tt4, VOL, FALSE);   Wait(w8);
        PlayToneEx(F6, tt4, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(E6, tt4, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(G6, tt4, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;
        PlayToneEx(F6, tt4, VOL, FALSE);   Wait(w8);if(end_flag == 1)break;

        PlayToneEx(A6, tt4, VOL, FALSE);   Wait(w4+w8);if(end_flag == 1)break;
        PlayToneEx(A6, tt4, VOL, FALSE);   Wait(w4+w8);if(end_flag == 1)break;
        PlayToneEx(A6, tt4, VOL, FALSE);   Wait(w4+w8);if(end_flag == 1)break;
        PlayToneEx(A6, tt4, VOL, FALSE);   Wait(w4+w8);if(end_flag == 1)break;
        PlayToneEx(C7, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(B6, tt4, VOL, FALSE);   Wait(w4);if(end_flag == 1)break;
        PlayToneEx(A6, tt4, VOL, FALSE);   Wait(w4+w8);if(end_flag == 1)break;
        PlayToneEx(A6, tt4, VOL, FALSE);   Wait(w4+w8);if(end_flag == 1)break;
        PlayToneEx(Gsh6, tt4+tt4+tt4+tt4, VOL, FALSE);   Wait(w4+w4+w4+w4);if(end_flag == 1)break;
    }
}

/* FF6の戦闘勝利のファンファーレ */
void music(){
    PlayToneEx(C5,  50, VOL, FALSE);     Wait(50);
    PlayToneEx(D5,  50, VOL, FALSE);     Wait(63);
    PlayToneEx(F5,  50, VOL, FALSE);     Wait(62);
    PlayToneEx(G5,  50, VOL, FALSE);     Wait(63);
    PlayToneEx(A5,  50, VOL, FALSE);     Wait(62);
    PlayToneEx(B5,  50, VOL, FALSE);     Wait(63);
    PlayToneEx(C6,  50, VOL, FALSE);     Wait(62);

    PlayToneEx(D6, 100, VOL, FALSE);     Wait(160);
    PlayToneEx(D6, 100, VOL, FALSE);     Wait(160);
    PlayToneEx(D6, 100, VOL, FALSE);     Wait(180);
    PlayToneEx(D6, 400, VOL, FALSE);     Wait(500);
    PlayToneEx(Ash5, 400, VOL, FALSE);   Wait(500);
    PlayToneEx(C6, 400, VOL, FALSE);     Wait(500);
    PlayToneEx(D6, 90, VOL, FALSE);      Wait(333);
    PlayToneEx(C6, 80, VOL, FALSE);      Wait(167);
    PlayToneEx(D6, 400, VOL, FALSE);     Wait(500);


}

//#endif
