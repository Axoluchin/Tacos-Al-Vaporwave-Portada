#include <stdio.h>
#include <winbgim.h>

int ventana(){
    initwindow(800,800,"tacos al Vaporwave");
}

int fondo(){
    setcolor (COLOR (121,252,198));
    setfillstyle(7, COLOR (255,255,255));
    setbkcolor(COLOR (121,252,198));
    int x[10]={0,0,  0,800,    800,800,  800,0,  0,0};
    fillpoly(5, x);
}

int Cuadro(){
    setcolor (COLOR (255,152,173));
    setbkcolor(COLOR (255,152,173));
    setfillstyle(8, COLOR (252,31,74));
    int x[10]={25,25,  25,775,    775,775,  775,25,  25,25};
    fillpoly(5, x);
}

int Circulo1(){
    setcolor (COLOR (77,190,188));
    setfillstyle(2, COLOR (255,255,255));
    setbkcolor(COLOR (77,190,188));
    fillellipse(400, 400,365, 365);
}

int Circulo2(){
    setcolor (COLOR (178,172,255));
    setfillstyle(11, COLOR (140,87,113));
    setbkcolor(COLOR (178,172,255));
    fillellipse(400, 400,355, 355);
}

int Circulo3(){
    setcolor (COLOR (82,247,251));
    setbkcolor(COLOR (82,247,251));
    setfillstyle(10, COLOR (255,255,255));
    fillellipse(400, 400,270, 270);
}

int TacosAL(){
    settextstyle(3,HORIZ_DIR,5);

    settextjustify(CENTER_TEXT,CENTER_TEXT);
    setbkcolor(COLOR (255,152,173));
    setcolor (COLOR (244,211,239));
    outtextxy(650, 700, "tacos   al");

    settextstyle(7,HORIZ_DIR,17);
    setcolor (COLOR (255,73,110));
    outtextxy(625, 750, "Vaporwave");

    settextstyle(5,HORIZ_DIR,16);
    setcolor (COLOR (255,255,255));
    outtextxy(110, 70, "Sentidos");

    settextstyle(5,HORIZ_DIR,4);
    setcolor (COLOR (255,255,255));
    outtextxy(108, 110, "Apuestos");
}

int ojos(){
    setcolor (COLOR (0,0,0));
    setfillstyle(1, COLOR (0,0,0));

    fillellipse(370, 310,25, 25);
    fillellipse(470, 330,25, 25);
}

int pomulos(){
    setcolor (COLOR (178,172,255));
    setfillstyle(11, COLOR (189,151,254));
    setbkcolor(COLOR (178,172,255));

    fillellipse(270, 290,60, 60);
    fillellipse(570, 345,60, 60);
}

int narizSonrisa(){
    setlinestyle(0, 0, 15);
    setcolor (COLOR (0,0,0));
    ellipse(400, 400, 45, 110, 50,50);

    ellipse(400, 400, 165, 355, 230,230);
    ellipse(604, 47, 233, 272, 700,370);
}

int cabello(){
    setlinestyle(0, 0, 25);
    setcolor (COLOR (178,172,255));

    line (500, 155, 530, 155);
    line (506, 183, 570, 183);
    //setcolor (COLOR (0,0,0));//Temporal
    ellipse(344, 144, 281, 349, 150,50);

    ellipse(344, 173, 280, 340, 160,50);
}

int centro(){
    setlinestyle(0, 0, 1);
    setcolor (COLOR (0,0,0));
    line (400, 0, 400, 800);

    line (0, 400, 800, 400);
}

int main(){

    printf("Tacos al Vaporwave en C\n\n");
    printf("Codigo: @DamianHuchin\n\n");
    printf("Imagen original: @senti2apuestos\n\n");
    printf("Libreria: winbgim.h\n\n");

    printf("Imagen: 800x800\n\n");

    ventana();
    fondo();
    Cuadro();
    Circulo1();
    Circulo2();
    Circulo3();
    ojos();
    pomulos();
    narizSonrisa();
    cabello();
    TacosAL();
    getchar();
    return 0;
}
