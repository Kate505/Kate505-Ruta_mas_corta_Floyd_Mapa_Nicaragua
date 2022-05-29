
//                                                            Proyecto de AED, segundo semestre 2020
//                          Algoritmo de Floyd
/*

        Funcionamiento del programa: -Click izquierdo del mouse sobre un botón de un departamento para selecionarlo.
                                     -Click derecho del mouse sobre un botón de un departamento para conocer el nombre del departamento.
                                     -Con el botón reiniciar el programa vuelve a su estado inicial.
                                     -Botón salir en la esquina superior derecha del programa.

*/


#include <graphics.h>
//#include <conio.h>
//#include <stdio.h>
#define M 17

#include "pila.h"

using namespace std;

void outxy(int x, int y) {
    setcolor(3);
    char cad1[50],cad2[50];
    itoa(x,cad1,10);
    itoa(y,cad2,10);

    outtextxy(60,10, "x,y = ");
    outtextxy(100,10, cad1);
    outtextxy(135,10, ",");
    outtextxy(140,10, cad2);
    setcolor(WHITE);
    bar(100,10,170,30);
    setfillstyle(1,WHITE);
    floodfill(110,20,WHITE);
}

void borrar() {
    setcolor(WHITE);
    bar(165,90,320,130);
    setfillstyle(1,WHITE);
    floodfill(180,100,WHITE);
}

void borrar_msj() {
    setcolor(WHITE);
    bar(875,35,1195,70);
    setfillstyle(1,WHITE);
    floodfill(890,55,WHITE);
    setcolor(2);
    outtextxy(875,50,"La distancia minima es de: ");
}

void dist_mini(int dist) {
    setcolor(3);
    char cad[50];
    itoa(dist,cad,10);

    outtextxy(60,10, "");
    outtextxy(950,90, cad);
    outtextxy(1000,90, "km");
}

void btn_chinan(int c, int e) {
    setcolor(c);
    rectangle(140,375,150,385);
    setfillstyle(e,c);
    floodfill(142,380,c);
}

void btn_leon(int c, int e) {
    setcolor(c);
    rectangle(183,410,193,420);
    setfillstyle(e,c);
    floodfill(185,415,c);
}

void btn_managua(int c, int e) {
    setcolor(c);
    rectangle(275,455,285,465);
    setfillstyle(e,c);
    floodfill(280,460,c);
}

void btn_carazo(int c, int e) {
    setcolor(c);
    rectangle(305,500,315,510);
    setfillstyle(e,c);
    floodfill(310,505,c);
}

void btn_masaya(int c, int e) {
    setcolor(c);
    rectangle(325,480,333,488);
    setfillstyle(e,c);
    floodfill(327,485,c);
}

void btn_granada(int c, int e) {
    setcolor(c);
    rectangle(348,488,356,496);
    setfillstyle(e,c);
    floodfill(350,490,c);
}

void btn_rivas(int c, int e) {
    setcolor(c);
    rectangle(368,565,378,575);
    setfillstyle(e,c);
    floodfill(370,570,c);
}

void btn_nsegovia(int c, int e) {
    setcolor(c);
    rectangle(270,221,280,231);
    setfillstyle(e,c);
    floodfill(275,225,c);
}

void btn_madriz(int c, int e) {
    setcolor(c);
    rectangle(237,247,247,257);
    setfillstyle(e,c);
    floodfill(240,250,c);
}

void btn_esteli(int c, int e) {
    setcolor(c);
    rectangle(277,310,287,320);
    setfillstyle(e,c);
    floodfill(285,315,c);
}

void btn_jinotega(int c, int e) {
    setcolor(c);
    rectangle(342,312,352,322);
    setfillstyle(e,c);
    floodfill(345,315,c);
}

void btn_matagalpa(int c, int e) {
    setcolor(c);
    rectangle(350,340,360,350);
    setfillstyle(e,c);
    floodfill(355,345,c);
}

void btn_boaco(int c, int e) {
    setcolor(c);
    rectangle(405,405,415,415);
    setfillstyle(e,c);
    floodfill(410,410,c);
}

void btn_chontales(int c, int e) {
    setcolor(c);
    rectangle(455,460,465,470);
    setfillstyle(e,c);
    floodfill(458,465,c);
}

void btn_riosnjuan(int c, int e) {
    setcolor(c);
    rectangle(573,613,583,623);
    setfillstyle(e,c);
    floodfill(575,615,c);
}

void btn_raan(int c, int e) {
    setcolor(c);
    rectangle(790,140,800,150);
    setfillstyle(e,c);
    floodfill(795,145,c);
}

void btn_raas(int c, int e) {
    setcolor(c);
    rectangle(725,475,735,485);
    setfillstyle(e,c);
    floodfill(730,480,c);
}

void botones() {
    setcolor(WHITE);
    bar(875,35,1200,700);
    setfillstyle(1,WHITE);
    floodfill(890,55,WHITE);

    setcolor(RED);
    rectangle(1170,0,1200,30);
    setfillstyle(1,RED);
    floodfill(1185,20,RED);
    setcolor(WHITE);
    setlinestyle(0,0,2);
    line(1175,5,1195,25);
    line(1195,5,1175,25);

    setcolor(2);
    rectangle(1050,0,1150,30);

    setcolor(2);
    settextstyle(3,0,2);
    outtextxy(1063,5,"Reiniciar");
    outtextxy(40,100,"Departamento: ");
    outtextxy(875,50,"Seleccione dos departamentos");

    //Región del pacífico
    btn_chinan(2,0);
    btn_leon(2,0);
    btn_managua(2,0);
    btn_carazo(2,0);
    btn_masaya(2,0);
    btn_granada(2,0);
    btn_rivas(2,0);
    //Región Central
    btn_nsegovia(2,0);
    btn_madriz(2,0);
    btn_esteli(2,0);
    btn_jinotega(2,0);
    btn_matagalpa(2,0);
    btn_boaco(2,0);
    btn_chontales(2,0);
    btn_riosnjuan(2,0);
    //Región del Atlántico
    btn_raan(2,0);
    btn_raas(2,0);
}

void mostrar_nombres() {
    int cx=0, cy=0;
    borrar();

    setcolor(3);
    getmouseclick(WM_RBUTTONDOWN,cx,cy);
    settextstyle(3,0,2);

    if(cx >= 140 && cx <= 150 && cy >= 375 && cy <= 385) {
        outtextxy(170,100, "Chinandega");
    }
    if(cx >= 183 && cx <= 193 && cy >= 410 && cy <= 420) {
        outtextxy(170,100, "León");
    }
    if(cx >= 275 && cx <= 285 && cy >= 455 && cy <= 465) {
        outtextxy(170,100, "Managua");
    }
    if(cx >= 305 && cx <= 315 && cy >= 500 && cy <= 510) {
        outtextxy(170,100, "Carazo");
    }
    if(cx >= 325 && cx <= 333 && cy >= 480 && cy <= 488) {
        outtextxy(170,100, "Masaya");
    }
    if(cx >= 348 && cx <= 356 && cy >= 488 && cy <= 496) {
        outtextxy(170,100, "Granada");
    }
    if(cx >= 368 && cx <= 378 && cy >= 565 && cy <= 575) {
        outtextxy(170,100, "Rivas");
    }
    if(cx >= 270 && cx <= 280 && cy >= 221 && cy <= 231) {
        outtextxy(170,100, "Nueva Segovia");
    }
    if(cx >= 237 && cx <= 247 && cy >= 247 && cy <= 257) {
        outtextxy(170,100, "Madriz");
    }
    if(cx >= 277 && cx <= 287 && cy >= 310 && cy <= 320) {
        outtextxy(170,100, "Estelí");
    }
    if(cx >= 342 && cx <= 352 && cy >= 312 && cy <= 322) {
        outtextxy(170,100, "Jinotega");
    }
    if(cx >= 350 && cx <= 360 && cy >= 340 && cy <= 350) {
        outtextxy(170,100, "Matagalpa");
    }
    if(cx >= 405 && cx <= 415 && cy >= 405 && cy <= 415) {
        outtextxy(170,100, "Boaco");
    }
    if(cx >= 455 && cx <= 465 && cy >= 460 && cy <= 470) {
        outtextxy(170,100, "Chontales");
    }
    if(cx >= 573 && cx <= 583 && cy >= 613 && cy <= 623) {
        outtextxy(170,100, "Rio San Juan");
    }
    if(cx >= 790 && cx <= 800 && cy >= 140 && cy <= 150) {
        outtextxy(170,100, "Bilwi");
    }
    if(cx >= 725 && cx <= 735 && cy >= 475 && cy <= 485) {
        outtextxy(170,100, "Blufields");
    }
}


void carazomasaya(int c) { //si
    //putpixel(282,466,c);
    setcolor(c);
    //setlinestyle(1,2,2);
    line(312,498,316,494);
    line(316,494,318,498);
    line(318,498,326,488);
//Distancia: 54.2km Tiempo: 1hr 12min
}

void managuamasaya(int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (285,462,289,465);
    line (289,465,291,461);
    line (291,461,296,465);
    line (296,465,298,461);
    line (298,461,306,467);
    line (306,467,312,467);
    line (312,467,326,480);
//Distancia: 26.7km Tiempo: 38min
}

void managuaboaco (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (281,458,294,461);
    line (294,461,312,458);
    line (312,458,324,453);
    line (324,453,336,443);
    line (336,443,338,427);
    line (338,427,378,417);
    line (378,417,383,418);
    line (383,418,391,412);
    line (391,412,407,409);
//Distancia: 90km Tiempo: 1hr 39min
}

void managualeon (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (278,455,268,459);
    line (268,459,265,456);
    line (265,456,257,449);
    line (257,449,259,444);
    line (259,444,253,438);
    line (253,438,234,427);
    line (234,427,225,427);
    line (225,427,218,418);
    line (218,418,207,418);
    line (207,418,201,423);
    line (201,423,189,412);
//Distancia: 97,4km Tiempo: 1hr 37min
}

void managuamatagalpa (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (281,458,294,461);
    line (294,461,312,458);
    line (312,458,324,453);
    line (324,453,336,443);
    line (336,443,338,427);
    line (338,427,333,419);
    line (333,419,339,410);
    line (339,410,330,384);
    line (330,384,337,373);
    line (337,373,340,359);
    line (340,359,346,357);
    line (346,357,356,343);
//Distancia: 130km Tiempo: 2hr 8min
}

void managuaesteli (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (281,458,294,461);
    line (294,461,312,458);
    line (312,458,324,453);
    line (324,453,336,443);
    line (336,443,338,427);
    line (338,427,333,419);
    line (333,419,339,410);
    line (339,410,330,384);
    line (330,384,307,345);
    line (307,345,311,333);
    line (311,333,302,330);
    line (302,330,300,323);
    line (300,323,292,318);
    line (292,318,283,313);
//Distancia: 148 km Tiempo: 2hr 42min
}

void managuajinotega (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (281,458,294,461);
    line (294,461,312,458);
    line (312,458,324,453);
    line (324,453,336,443);
    line (336,443,338,427);
    line (338,427,333,419);
    line (333,419,339,410);
    line (339,410,330,384);
    line (330,384,337,373);
    line (337,373,340,359);
    line (340,359,333,352);
    line (333,352,336,348);
    line (336,348,336,341);
    line (336,341,346,333);
    line (346,333,348,318);
//Distancia: 142km Tiempo: 2h 25min
}

void managuachontales (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (281,458,294,461);
    line (294,461,312,458);
    line (312,458,324,453);
    line (324,453,336,443);
    line (336,443,348,443);
    line (348,443,355,450);
    line (355,450,361,445);
    line (361,445,372,445);
    line (372,445,374,457);
    line (374,457,415,450);
    line (415,450,425,445);
    line (425,445,454,449);
    line (454,449,460,463);
//Distancia: 163km Tiempo: 3h 6min
}

void riosanjuanraas (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (578,617,590,593);
    line (590,593,580,532);
    line (580,532,583,504);
    line (583,504,593,498);
    line (593,498,616,528);
    line (616,528,646,508);
    line (646,508,678,491);
    line (678,491,701,486);
    line (701,486,723,480);
//Distancia: 223km Tiempo: 3h 54min
}

void managuacarazo (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (278,458,269,465);
    line (269,465,262,469);
    line (262,469,279,487);
    line (279,487,280,496);
    line (280,496,291,498);
    line (291,498,309,503);
//Distancia:70km   Tiempo:1h 40min
}

void boacochontales (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (409,408,402,427);
    line (402,427,418,432);
    line (418,432,442,434);
    line (442,434,459,463);
//Distancia:115km   Tiempo:2h 7min
}

void matagalpajinotega(int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (350,315,360,319);
    line (360,319,354,320);
    line (354,320,360,323);
    line (360,323,356,346);
//Distancia:32km   Tiempo:45min
}

void jinotegaesteli (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (284,314,295,311);
    line (295,311,304,314);
    line (304,314,310,309);
    line (310,309,320,324);
    line (320,324,326,296);
    line (326,296,333,303);
    line (333,303,341,305);
    line (341,305,347,316);
//Distancia:66km   Tiempo:1h 26min
}

void matagalpaesteli (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (330,384,337,373);
    line (337,373,340,359);
    line (340,359,346,357);
    line (346,357,356,343);
    line (330,384,307,345);
    line (307,345,311,333);
    line (311,333,302,330);
    line (302,330,300,323);
    line (300,323,292,318);
    line (292,318,283,313);
//Distancia:71km   Tiempo:1h 25min
}

void nuevasegoviamadriz (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (248,252,230,249);
    line (230,249,234,235);
    line (234,235,233,225);
    line (233,225,241,230);
    line (241,230,244,228);
    line (244,228,257,241);
    line (257,241,262,236);
    line (262,236,275,223);
//Distancia:109km   Tiempo:2h 42min
}

void leonesteli (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (190,416,193,395);
    line (193,395,241,366);
    line (241,366,243,358);
    line (243,358,257,362);
    line (257,362,277,344);
    line (277,344,272,331);
    line (272,331,280,314);
//Distancia:143km   Tiempo:2h 22min
}

void carazogranada (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (308,501,322,508);
    line (322,508,329,499);
    line (329,499,352,493);
//Distancia:49km   Tiempo:1h 3min
}

void carazorivas (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (308,501,322,508);
    line(322,508,321,518);
    line(321,518,323,539);
    line(323,539,346,546);
    line(346,546,347,560);
    line(347,560,378,567);
//Distancia:76km  Tiempo:1h 25min
}

void masayagranada (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (326,480,345,485);
    line (326,480,351,493);
//Distancia:7km   Tiempo:22min
}

void granadarivas (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (351,493,346,529);
    line (346,529,358,539);
    line (358,539,372,568);
//Distancia:71km   Tiempo:1h 13min
}

void leonchinandega (int c) {
    setcolor(c);
    //setlinestyle(1,2,2);
    line (189,412,179,394);
    line (179,394,170,394);
    line (170,394,173,382);
    line (173,382,145,379);
//Distancia:42km   Tiempo:47m
}

void matagalpaboaco (int c) {
    setcolor(c);
    line(355,343,367,347);
    line(367,347,369,357);
    line(369,357,373,358);
    line(373,358,374,363);
    line(374,363,393,377);
    line(393,377,410,379);
    line(410,379,404,391);
    line(404,391,410,411);

//Ditancia:102km    Tiempo:1h 52min
}

void matagalparaan (int c) {
    setcolor(c);
    line (356,343,389,334);
    line (389,334,423,312);
    line (423,312,498,257);
    line (498,257,580,233);
    line (580,233,616,203);
    line (616,203,659,216);
    line (659,216,682,196);
    line (682,196,699,173);
    line (699,173,795,144);
//Distancia: 431km  Tiempo: 9h 53min
}

void estelimadriz (int c) {
    setcolor(c);
    line (283,313,269,283);
    line (269,283,258,279);
    line (258,279,261,273);
    line (261,273,254,267);
    line (254,267,254,261);
    line (254,261,244,255);
//57 km
}

void estelinuevasegovia (int c) {
    setcolor(c);
    line (283,313,286,295);
    line (286,295,289,279);
    line (289,279,286,264);
    line (286,264,286,250);
    line (286,250,282,234);
    line (282,234,286,228);
    line (286,228,276,225);
//160km
}

void chontalesriosanjuan (int c) {
    setcolor(c);
    line (460,463,529,524);
    line (529,524,591,595);
    line (591,595,579,617);
}//74km

void chontalesraas (int c) {
    setcolor(c);
    line (460,463,504,451);
    line (504,451,548,462);
    line (548,462,614,449);
    line (614,449,668,478);
    line (668,478,693,472);
    line (693,472,701,487);
    line (701,487,723,480);
}//157km

void Carreteras() {
    int c=3;
    carazomasaya(c); //54.2
    managuamasaya(c);//26.7
    managuaboaco (c);//90
    managualeon (c);//97.4
    managuamatagalpa(c);//130
    managuaesteli (c);//148
    managuajinotega (c);//142
    managuachontales (c);//163
    chontalesriosanjuan (c);//74
    chontalesraas(c);//157
    riosanjuanraas(c);//223
    boacochontales(c);//115
    matagalpajinotega(c);//32
    jinotegaesteli(c);//66
    matagalpaesteli(c);//71
    nuevasegoviamadriz(c);//109
    leonesteli(c);//143
    managuacarazo(c);//70
    carazogranada(c);//49
    carazorivas(c);//76
    masayagranada(c);//7
    granadarivas(c);//71
    leonchinandega(c);//42
    matagalpaboaco(c);//102
    matagalparaan(c);//431
    estelimadriz (c);//57
    estelinuevasegovia(c);//160
}

int pintar_btn(int mx, int my, int horidest[3]) {

    int c=3;
    if(mx >= 140 && mx <= 150 && my >= 375 && my <= 385) {
        btn_chinan(c,1);
        //horidest[0] += 1;
        if(horidest[0] < 1) {
            horidest[1] = 0;
        } else {
            horidest[2] = 0;
        }
        horidest[0] += 1;
    }
    if(mx >= 183 && mx <= 193 && my >= 410 && my <= 420) {
        btn_leon(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 1;
        } else {
            horidest[2] = 1;
        }
        horidest[0] += 1;
    }
    if(mx >= 275 && mx <= 285 && my >= 455 && my <= 465) {
        btn_managua(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 2;
        } else {
            horidest[2] = 2;
        }
        horidest[0] += 1;
    }

    if(mx >= 325 && mx <= 333 && my >= 480 && my <= 488) {
        btn_masaya(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 3;
        } else {
            horidest[2] = 3;
        }
        horidest[0] += 1;
    }

    if(mx >= 305 && mx <= 315 && my >= 500 && my <= 510) {
        btn_carazo(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 4;
        } else {
            horidest[2] = 4;
        }
        horidest[0] += 1;
    }

    if(mx >= 348 && mx <= 356 && my >= 488 && my <= 496) {
        btn_granada(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 5;
        } else {
            horidest[2] = 5;
        }
        horidest[0] += 1;
    }
    if(mx >= 368 && mx <= 378 && my >= 565 && my <= 575) {
        btn_rivas(c,1);
        //horidest[0]+= 1;
        if(horidest[0]<1) {
            horidest[1] = 6;
        } else {
            horidest[2] = 6;
        }
        horidest[0] += 1;
    }
    if(mx >= 270 && mx <= 280 && my >= 221 && my <= 231) {
        btn_nsegovia(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 7;
        } else {
            horidest[2] = 7;
        }
        horidest[0] += 1;
    }
    if(mx >= 237 && mx <= 247 && my >= 247 && my <= 257) {
        btn_madriz(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 8;
        } else {
            horidest[2] = 8;
        }
        horidest[0] += 1;
    }

    if(mx >= 342 && mx <= 352 && my >= 312 && my <= 322) {
        btn_jinotega(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 9;
        } else {
            horidest[2] = 9;
        }
        horidest[0] += 1;
    }

    if(mx >= 277 && mx <= 287 && my >= 310 && my <= 320) {
        btn_esteli(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 10;
        } else {
            horidest[2] = 10;
        }
        horidest[0] += 1;
    }

    if(mx >= 350 && mx <= 360 && my >= 340 && my <= 350) {
        btn_matagalpa(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 11;
        } else {
            horidest[2] = 11;
        }
        horidest[0] += 1;
    }

    if(mx >= 405 && mx <= 415 && my >= 405 && my <= 415) {
        btn_boaco(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 12;
        } else {
            horidest[2] = 12;
        }
        horidest[0] += 1;
    }

    if(mx >= 455 && mx <= 465 && my >= 460 && my <= 470) {
        btn_chontales(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 13;
        } else {
            horidest[2] = 13;
        }
        horidest[0] += 1;
    }

    if(mx >= 573 && mx <= 583 && my >= 613 && my <= 623) {
        btn_riosnjuan(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 14;
        } else {
            horidest[2] = 14;
        }
        horidest[0] += 1;
    }

    if(mx >= 790 && mx <= 800 && my >= 140 && my <= 150) {
        btn_raan(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 15;
        } else {
            horidest[2] = 15;
        }
        horidest[0] += 1;
    }

    if(mx >= 725 && mx <= 735 && my >= 475 && my <= 485) {
        btn_raas(c,1);
        //horidest[0] += 1;
        if(horidest[0]<1) {
            horidest[1] = 16;
        } else {
            horidest[2] = 16;
        }
        horidest[0] += 1;
    }

    /*cout<<"Esto es lo que retorna en pintar boton\n";
    for(int i=0; i<3; i++) {
        cout<<horidest[i]<<endl;
    }
    cout<<endl;*/

    return *horidest;
}

void departamento(int dep, int x, int y) {

    if(dep == 0) {
        outtextxy(x,y, "Chinandega");
    }
    if(dep == 1) {
        outtextxy(x,y, "Leon");
    }
    if(dep == 2) {
        outtextxy(x,y, "Managua");
    }
    if(dep == 3) {
        outtextxy(x,y, "Masaya");
    }
    if(dep == 4) {
        outtextxy(x,y, "Carazo");
    }
    if(dep == 5) {
        outtextxy(x,y, "Granada");
    }
    if(dep == 6) {
        outtextxy(x,y, "Rivas");
    }
    if(dep == 7) {
        outtextxy(x,y, "Nueva Segovia");
    }
    if(dep == 8) {
        outtextxy(x,y, "Madriz");
    }
    if(dep == 9) {
        outtextxy(x,y, "Jinotega");
    }
    if(dep == 10) {
        outtextxy(x,y, "Estelí");
    }
    if(dep == 11) {
        outtextxy(x,y, "Matagalpa");
    }
    if(dep == 12) {
        outtextxy(x,y, "Boaco");
    }
    if(dep == 13) {
        outtextxy(x,y, "Chontales");
    }
    if(dep == 14) {
        outtextxy(x,y, "Rio San Juan");
    }
    if(dep == 15) {
        outtextxy(x,y, "Bilwi");
    }
    if(dep == 16) {
        outtextxy(x,y, "Blufields");
    }
}

void mostrar_camino(int dep, int r) {
    setcolor(2);
    outtextxy(875,130,"El camino a seguir es: ");

    setcolor(3);
    if(dep != -1) {
        if(r == 0) {
            departamento(dep,875,170);
        }
        if(r == 1) {
            departamento(dep,875,200);
        }
        if(r == 2) {
            departamento(dep,875,230);
        }
        if(r == 3) {
            departamento(dep,875,260);
        }
        if(r == 4) {
            departamento(dep,875,290);
        }
        if(r == 5) {
            departamento(dep,875,320);
        }
        if(r == 6) {
            departamento(dep,875,350);
        }
        if(r == 7) {
            departamento(dep,875,380);
        }
    }
}

int ruta(int ori, int dest, int camino[][M], int func[10]) {

    int i=ori,j=dest, r=0;
    for(int i=0; i<10; i++) {
        func[i] = -1;
    }

    //cout<<"ori = "<<i<<"\ndest = "<<j<<"\ncamino = "<<camino[i][j]<<endl;
    do {
        if(camino[i][j] != -1) {
            if(i == ori) {
                //cout<<"\t\t"<<i<<" - "<<camino[i][j];
                func[0] = i;
                func[1] = camino[i][j];
            } else {
                //cout<<" - "<<camino[i][j];
                func[r+1] = camino[i][j];
            }
            i = camino[i][j];

        } else {
            if(r == 0) {
                if(camino[i][j] == -1) {
                    //cout<<i<<" - "<<j<<"\n\n\n";
                    func[0] = i;
                    func[1] = j;
                    i = camino[i][j];
                }
            } else {
                if(camino[i][j] == -1) {
                    //cout<<" - "<<j<<"\n\n\n";
                    func[r+1] = j;
                    i = camino[i][j];
                }
            }
        }
        r++;
    } while (i != -1);

    return *func;
}

int invertir_rutab(int rutab[10]) {
    int c2=0;
    Pila pil = NULL;

    for(int i=0; i<10; i++) {
        if(rutab[i] != -1) {
            push(pil,rutab[i]);
            c2++;
        }
    }

    for(int i=0; i<c2; i++) {
        rutab[i]=pop(pil);
    }

    return *rutab;
}

void camino(int a, int b){
    int c=4;
    setcolor(c);
    setlinestyle(1,2,2);

    if(a==4 && b==3 || a==3 && b==4){
        carazomasaya(c);
    }
        if (a==2 && b==3 || a==3  && b==2 ){
        managuamasaya(c);
    }

    if (a==2 && b==12 || a==12  && b==2 ){
        managuaboaco(c);
    }

    if (a==2 && b==1 || a==1  && b==2 ){
        managualeon(c);
    }

    if (a==2 && b==11 || a==11  && b==2 ){
        managuamatagalpa(c);
    }

    if (a==2 && b==10 || a==10  && b==2 ){
       managuaesteli(c);
    }

    if (a==2 && b==9 || a==9  && b==2 ){
        managuajinotega(c);
    }

    if (a==2 && b==13 || a==13  && b==2 ){
        managuachontales(c);
    }

    if (a==13 && b==14 || a==14  && b==13 ){
        chontalesriosanjuan(c);
    }

    if (a==13 && b==16 || a==16  && b==13 ){
        chontalesraas(c);
    }

    if (a==14 && b==16 || a==16  && b==14 ){
        riosanjuanraas(c);
    }

    if (a==12 && b==13 || a==13  && b==12 ){
        boacochontales(c);
    }

    if (a==11 && b==9 || a==9  && b==11 ){
        matagalpajinotega(c);
    }

    if (a==9 && b==10 || a==10  && b==9 ){
        jinotegaesteli(c);
    }

    if (a==11 && b==10 || a==10  && b==11 ){
        matagalpaesteli(c);
    }

    if (a==7 && b==8 || a==8  && b==7 ){
        nuevasegoviamadriz(c);
    }

    if (a==1 && b==10 || a==10  && b==1 ){
        leonesteli(c);
    }

    if (a==2 && b==4 || a==4 && b==2 ){
        managuacarazo(c);
    }

    if (a==4 && b==5 || a==5  && b==4 ){
        carazogranada(c);
    }

    if (a==4 && b==6 || a==6  && b==4 ){
        carazorivas(c);
    }

    if (a==3 && b==5 || a==5  && b==3 ){
        masayagranada(c);
    }

    if (a==5 && b==6 || a==6  && b==5 ){
        granadarivas(c);
    }

    if (a==1 && b==0 || a==0  && b==1 ){
        leonchinandega(c);
    }

    if (a==11 && b==12 || a==12  && b==11 ){
        matagalpaboaco(c);
    }

    if (a==11 && b==15 || a==15  && b==11 ){
        matagalparaan(c);
    }

    if (a==10 && b==8 || a==8  && b==10 ){
        estelimadriz(c);
    }

    if (a==10 && b==7 || a==7  && b==10 ){
        estelinuevasegovia(c);
    }
    setlinestyle(0,0,0);
}

void pintar_carretera(int cam[10], int c){
    /*cout<<"\n\n\tAqui pintamos las carreteras. \n\nc = "<<c<<endl;
    for(int i=0; i<=c; i++){
        cout<<cam[i]<<" - ";
    }
    cout<<endl;*/
    if(c > 2){
        for(int i=0; i<=c; i++){
            camino(cam[i],cam[i+1]);
        }
    }else{
        camino(cam[0],cam[1]);
    }
}

void floyd(int ori, int dest) {

    cout<<"Floyd: Origen: "<<ori<<endl;
    cout<<"Floyd: Destino "<<dest<<endl<<endl;

    //closegraph();
    float inicial[M][M] = { { 0,  42, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999},
        {42,  0, 97.4,999, 999, 999, 999, 999, 999, 999, 143, 999, 999, 999, 999, 999, 999},
        {999, 97.4, 0,26.7, 70, 999, 999, 999, 999, 142, 148, 130, 90, 163, 999, 999, 999},
        {999, 999, 26.7, 0, 54.2, 7, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999},
        {999, 999,  70, 54.2, 0,  49,  76, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999},
        {999, 999, 999,  7,  49,  0,  71, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999},
        {999, 999, 999, 999,  76,  71,  0, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999},
        {999, 999, 999, 999, 999, 999, 999,  0, 109, 999, 160, 999, 999, 999, 999, 999, 999},
        {999, 999, 999, 999, 999, 999, 999, 109,  0, 999,  57, 999, 999, 999, 999, 999, 999},
        {999, 999, 142, 999, 999, 999, 999, 999, 999,  0,  66,  32, 999, 999, 999, 999, 999},
        {999, 143, 148, 999, 999, 999, 999, 160,  57,  66,  0,  71, 999, 999, 999, 999, 999},
        {999, 999, 130, 999, 999, 999, 999, 999, 999,  32,  71,  0, 102, 999, 999, 431, 999},
        {999, 999, 90,  999, 999, 999, 999, 999, 999, 999, 999, 102,  0, 115, 999, 999, 999},
        {999, 999, 163, 999, 999, 999, 999, 999, 999, 999, 999, 999, 115,  0,  74, 999, 157},
        {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999,  74,  0, 999, 223},
        {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 431, 999, 999, 999,  0, 999},
        {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 157, 223, 999,  0 }
    };

    float fina[M][M];
    int camino[M][M];

    for(int i=0; i<M; i++) {
        for(int j=0; j<M; j++) {
            fina[i][j] = inicial[i][j];
            camino[i][j] = -1;
        }
    }


    for(int i=0; i<M; i++) {
        fina[i][i] = 0;
    }

    for(int k=0; k<M; k++) {
        for(int i=0; i<M; i++) {
            for(int j=0; j<M; j++) {
                if(fina[i][k] + fina[k][j] < fina[i][j]) {
                    /*cout<<"fina ["<<i+1<<"]["<<k+1<<"] + fina ["<<k+1<<"]["<<j+1<<"] < fina ["<<i+1<<"]["<<j+1<<"]\n";
                    cout<<fina[i][k] <<" + "<<fina[k][j]<<" < "<<fina[i][j]<<endl;*/

                    fina[i][j] = fina[i][k]+fina[k][j];
                    camino[i][j] = k;
                }
            }
        }
    }

    cout<<"\n\tMatriz de distancias minimas\n"<<endl;
    for(int i=0; i<M; i++) {
        for(int j=0; j<M; j++) {
            cout<<"\t"<<fina[i][j];
        }
        cout<<endl;
    }

    cout<<"\n\n\tMatriz de caminos\n"<<endl;
    for(int i=0; i<M; i++) {
        for(int j=0; j<M; j++) {
            cout<<"\t"<<camino[i][j];
        }
        cout<<endl;
    }

    if(fina[ori][dest] == 999) {
        cout<<"\n\n\t\tActualmente no hay una ruta disponible para su destino\n\n";
    } else {
        cout<<"\n\n\t\tLa distancia mínima es de: "<<fina[ori][dest]<<"\n";
        dist_mini(fina[ori][dest]);

        int rutaa[10], rutab[10], c1=0, c2=0, aux1=0, aux2=0;


        ruta(ori,dest,camino,rutaa);
        ruta(dest,ori,camino,rutab);

        cout<<"\n\n\tRuta a: \n";
        for(int i=0; i<10; i++) {
            cout<<rutaa[i]<<endl;
            if(rutaa[i] != -1) {
                c1++;
            }
        }
        cout<<"\n\n\tContador 1: "<<c1;

        invertir_rutab(rutab);

        cout<<"\n\n\tRuta b: \n";
        for(int i=0; i<10; i++) {
            cout<<rutab[i]<<endl;
            if(rutab[i] != -1) {
                c2++;
            }
        }
        cout<<"\n\n\tContador 2: "<<c2<<endl;

        if(c1 >= c2) {
            if(c1 == 4) {
                invertir_rutab(rutaa);

                /*cout<<"\n\n\tRuta a invertida para que funcione\n\n";
                for(int i=0; i<10; i++) {
                    cout<<rutaa[i]<<endl;
                }
                cout<<"\n\n\testo es otra cosa aparte\n\n";*/
                aux1 = rutaa[c1-2];
                ruta(dest,aux1,camino,rutaa);
                c1=0;
                for(int i=0; i<10; i++) {
                    if(rutaa[i] != -1) {
                        c1++;
                    }
                }
                rutaa[c1] = ori;
                invertir_rutab(rutaa);
            }

            cout<<"\n\n\tLa mejor ruta es la a: \n\n";
            for(int i=0; i<10; i++) {
                cout<<rutaa[i]<<endl;
                mostrar_camino(rutaa[i],i);
            }

            pintar_carretera(rutaa, c1);
        } else {
            if(c1 < c2) {
                if(c2 == 4) {
                    aux2 = rutab[c2-2];
                    ruta(ori,aux2,camino,rutab);
                    c2=0;
                    for(int i=0; i<10; i++) {
                        if(rutab[i] != -1) {
                            c2++;
                        }
                    }
                    rutab[c2] = dest;
                }
                cout<<"\n\n\tLa mejor ruta es la b: \n\n";
                for(int i=0; i<10; i++) {
                    cout<<rutab[i]<<endl;
                    mostrar_camino(rutab[i],i);
                }
                pintar_carretera(rutab, c2);

            }
        }

    }

}

int click_en_btn(int horidest[3]) {
    int mx=0, my=0;
    /*cout<<"Esto es lo que le entra a click en boton\n";
    for(int i=0; i<3; i++) {
        cout<<horidest[i]<<endl;
    }
    cout<<endl;*/

    getmouseclick(WM_LBUTTONDOWN,mx,my);

    if(mx>=1170 && my<=30) {
        exit(-1);
    }

    if(mx>=1050 && mx<=1150 && my>=0 && my<=30) {
        horidest[0] = 0;
        botones();
        setlinestyle(1,2,2);
        Carreteras();
        setlinestyle(0,0,0);
        return *horidest;
    }

    if(horidest[0] == 1) {
        pintar_btn(mx,my,horidest);
        borrar_msj();
        floyd(horidest[1], horidest[2]);

    } else {
        if(horidest[0] < 1) {
            pintar_btn(mx,my,horidest);
            //outtextxy(880,50,"Seleccione dos departamentos");
        }
    }

    /*cout<<"Esto es lo que retorna en click_boton\n";
    for(int i=0; i<3; i++) {
        cout<<horidest[i]<<endl;
    }
    cout<<endl;*/

    return *horidest;
}


int main() {
    int x,y,horidest[3];
    int gdriver = DETECT, gmode;

    initgraph(&gdriver,&gmode,"C:\\tc\\bgi");
    initwindow(1200,700,"Distancias en el Mapa",100,0);

    //setcolor(RGB(68,128,225));
    cleardevice();
    setbkcolor(WHITE);
    cleardevice();

    //void *mapa = malloc(imagesize(0,0,950,700));
    readimagefile("image/mapan.jpg",0,0,950,700);
    /*getimage(0,0,950,700,mapa);
    putimage(0,950,mapa,0);*/
    horidest[0] = 0;
    horidest[1] = -1;
    horidest[2] = -1;

    botones();

    setlinestyle(1,2,2);
    Carreteras();
    setlinestyle(0,0,0);

    for(;;) {

        x = mousex();
        y = mousey();
        outxy(x,y);

        if(ismouseclick(WM_RBUTTONDOWN)) {
            mostrar_nombres();
        }

        if(ismouseclick(WM_LBUTTONDOWN)) {
            click_en_btn(horidest);
        }
    }

}
