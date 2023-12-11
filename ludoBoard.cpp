#include "header.h"

void greenCorner(){

    rectangle(45,45,250,200);
    rectangle(85,85,210,160);
    setfillstyle(SOLID_FILL, GREEN);
    // Rectangle Green
    floodfill(50, 50, 15);

    circle(120, 100, 15);
    circle(170, 100, 15);
    circle(120, 140, 15);
    circle(170, 140, 15);

    //circle Green
    floodfill(125, 105, 15);
    floodfill(175, 105, 15);
    floodfill(125, 145, 15);
    floodfill(175, 145, 15);

    setfillstyle(SOLID_FILL, WHITE);
    floodfill(95, 95, 15);

}


void yellowCorner(){

    rectangle(405, 45, 610, 200);
    rectangle(445,85,570,160);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(410, 50, 15);

    circle(480, 100, 15);
    circle(530, 100, 15);
    circle(480, 140, 15);
    circle(530,140,15);

    floodfill(485, 105, 15);
    floodfill(535, 105, 15);
    floodfill(485, 145, 15);
    floodfill(535, 145, 15);

    setfillstyle(SOLID_FILL, WHITE);
    floodfill(450, 95, 15);


}


void redCorner(){

    rectangle(45,305,250,460);
    rectangle(85,345,210,420);

    setfillstyle(SOLID_FILL, RED);
    floodfill(50, 310, 15);


    circle(120, 365, 15);
    circle(170,365,15);
    circle(120, 405, 15);
    circle(170, 405, 15);

    floodfill(125, 370, 15);
    floodfill(175, 370, 15);
    floodfill(125, 410, 15);
    floodfill(175, 410, 15);

    setfillstyle(SOLID_FILL, WHITE);
    floodfill(95, 350, 15);

}


void blueCorner(){

    rectangle(405, 305, 610, 460);
    rectangle(445, 345, 570, 420);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(410, 310, 15);

    circle(480, 372, 15);
    circle(530, 372, 15);
    circle(480, 405, 15);
    circle(530, 405, 15);

    floodfill(485, 377, 15);
    floodfill(535, 377, 15);
    floodfill(485, 410, 15);
    floodfill(535, 410, 15);

    setfillstyle(SOLID_FILL, WHITE);
    floodfill(450, 350, 15);

}


void lineGreenYellow(){

    float i = 45;

    line(301, 45, 301, 200);
    line(352, 45, 352, 200);

    while (i < 200) {
        line(250, i, 405, i);
        i = i + 25.8;
    }

    int k = 200;
    int m;

    for(m=1;m<6; m++){
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(305, k-3, 15);
        k = k-26;
    }

    setfillstyle(SOLID_FILL, BLACK);
    floodfill(340, 50, 15);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(353, 76, 15);

    line(250, 200, 290, 240);
    line(405, 200, 365, 240);
    //setfillstyle(SOLID_FILL, YELLOW);
    //floodfill(340, 230, 15);

}


void lineRedGreen(){

    line(45,235,250,235);
    line(45,270,250,270);

    int i = 45;

    while(i<250){
        line(i,200,i,305);
        i = i + 34;
    }

    int k = 250;
    int m;

    for(m=1; m<6; m++){
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(k-3, 253, 15);
        k = k-34;
    }


    setfillstyle(SOLID_FILL, BLACK);
    floodfill(50, 237, 15);

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(80, 205, 15);

    line(250, 200, 290, 240);
    line(250, 305, 290, 265);
    //setfillstyle(SOLID_FILL, GREEN);
    //floodfill(280, 290, 15);


}


void lineRedBlue(){

    line(301, 305, 301, 460);
    line(352, 305, 352, 460);

    float i = 305;

    while(i<460){
        line(250, i,405, i);
        setfillstyle(SOLID_FILL, RED);
        floodfill(303, i + 3, 15);
        i = i + 25.8;
    }

    setfillstyle(SOLID_FILL, BLACK);
    floodfill(303, 458, 15);

    setfillstyle(SOLID_FILL, RED);
    floodfill(252, 432, 15);

    line(250, 305, 290, 265);
    line(405,305 ,365 , 265);
    //setfillstyle(SOLID_FILL, RED);
    //floodfill(885, 615, 15);
}


void lineYellowBlue(){

    line(405, 235, 610, 235);
    line(405, 270, 610, 270);

    int i=405;

    while(i<610){
        line(i, 200, i, 305);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(i + 3, 253, 15);
        i = i + 34;
    }

    setfillstyle(SOLID_FILL, BLACK);
    floodfill(600, 253, 15);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(570, 273, 15);


    line(405, 200, 365, 240);
    line(405,305 ,365 , 265);
    //setfillstyle(SOLID_FILL, BLUE);
    //floodfill(925, 575, 15);

}


void home(){

     // Outer Line
    //rectangle(250, 200, 405, 305);

    // Inner Line
    rectangle(290, 240, 365, 265);

    // Coloring Middle Space Black
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(295, 245, 15);

    // Printing The Text 'END'
    settextstyle(6, 0, 2);
    //outtextxy(300, 243, "END");
}
