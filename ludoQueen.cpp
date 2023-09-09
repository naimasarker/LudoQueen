#include <graphics.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>

void greenCorner();
void yellowCorner();
void redCorner();
void blueCorner();

void lineGreenYellow();
void lineRedGreen();
void lineRedBlue();
void lineYellowBlue();

void home();

void game();
void dicerolling();
void player1();
void player2();
void player3();

int rn,cnt1=0,cnt2=0,cntt1=0,cntt2=0,cntg1=0,cntg2=0,cnt3=0,cntt3=0,cntg3=0;
int f1=0,f2=0,f3=0,fg1=0,fg2=0,fg3=0;
int currentPos1x,currentPos1y,currentPos2x,currentPos2y,currentPos3x,currentPos3y;

int pla1x[] ={130,164,198,232,275,275,275,275,275,275,326,377,377,377,377,377,377,
              420,454,488,522,556,590,590,590,556,522,488,454,420,377,377,377,377,
              377,377,326,275,275,275,275,275,275,232,198,164,130,96,62,62,96,
              130,164,198,232,266,275,275};


int pla1y[] = {217,217,217,217,187,161,135,109,83,57,57,57,83,109,135,161,187,
               217,217,217,217,217,217,252,287,287,287,287,287,287,317,343,369,
               395,421,447,447,447,421,395,369,343,317,287,287,287,287,287,287,
               252,252,252,252,252,252,252,252,252};

int pla2x[] = {377,377,377,377,420,454,488,522,556,590,590,590,556,522,488,454,
               420,377,377,377,377,377,377,326,275,275,275,275,275,275,232,198,
               164,130,96,62,62,62,96,130,164,198,232,275,275,275,275,275,275,
               326,326,326,326,326,326,326,326,326};


int pla2y[] = {109,135,161,187,217,217,217,217,217,217,252,287,287,287,287,287,
               287,317,343,369,395,421,447,447,447,421,395,369,343,317,287,287,
               287,287,287,287,252,217,217,217,217,217,217,187,161,135,109,83,
               57,57,83,109,135,161,187,215,225,225};


int pla3x[] = {522,488,454,420,377,377,377,377,377,377,326,275,275,275,275,275,
               275,232,198,164,130,96,62,62,62,96,130,164,198,232,275,275,275,
               275,275,275,326,377,377,377,377,377,377,420,454,488,522,556,590,
               590,556,522,488,454,420,386,378,378};


int pla3y[] = {287,287,287,287,317,343,369,395,421,447,447,447,421,395,369,343,
               317,287,287,287,287,287,287,252,217,217,217,217,217,217,187,161,
               135,109,83,57,57,57,83,109,135,161,187,217,217,217,217,217,217,
               252,252,252,252,252,252,252,252,252};


int main()
{
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, BLACK);
    floodfill(5, 5, 15);
	rectangle(45, 45, 610, 460);
	rectangle(35,35,620,470);


    greenCorner();
    yellowCorner();
    redCorner();
    blueCorner();

    lineYellowBlue();
    lineRedBlue();
    lineGreenYellow();
    lineRedGreen();

    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(40, 40, 15);

    home();

    game();

	getch();
	closegraph();

	return 0;
}


void greenCorner(){

    rectangle(45,45,250,200);
    rectangle(85,85,210,160);
    setfillstyle(SOLID_FILL, GREEN);
    // Rectangle Green
    floodfill(50, 50, 15);

    circle(120, 100, 15);
    circle(170, 100, 15);
    circle(120, 140, 15);
    circle(170,140,15);

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
    rectangle(250, 200, 405, 305);

    // Inner Line
    rectangle(290, 240, 365, 265);

    // Coloring Middle Space Black
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(295, 245, 15);

    // Printing The Text 'END'
    settextstyle(6, 0, 2);
    outtextxy(300, 243, "END");
}

void game(){

    char arr[7];
    while(1){

        ///for player 1;
        if(f1==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
        }

        if(rn==6&&f1==0){

            setfillstyle(SOLID_FILL,GREEN);
            circle(96,217,6); ///p1 start point
            floodfill(96,217,15);
            f1=1;

        }

        if(f1==1){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);

            if(cntt1==0){

                outtextxy(95-4,217-6,"  ");
                cntt1=1;
            }

            if(rn==6){

                outtextxy(pla1x[cnt1-1]-6,pla1y[cnt1-1]-8,"  ");

                player1();

                if(fg1==1)
                    break;

                if((currentPos1x == currentPos2x) && (currentPos1y == currentPos2y)){

                    f2=0;
                    cntt2=0;
                    cnt2=0;
                    setfillstyle(SOLID_FILL,YELLOW);
                    circle(377,83,6); ///p2 stop point
                    floodfill(377,83,15);


                }

                if((currentPos1x == currentPos3x) && (currentPos1y == currentPos3y)){

                    f3 = 0;
                    cntt3 = 0;
                    cnt3 = 0;
                    setfillstyle(SOLID_FILL,BLUE);
                    circle(556,287,6);  ///p3 stop point
                    floodfill(556,287,15);

                }

                dicerolling();
                sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                outtextxy(220,18,arr);

            }

            if(rn==6){

                outtextxy(pla1x[cnt1-1]-6,pla1y[cnt1-1]-8,"  ");

                player1();

                if(fg1==1)
                    break;

                if((currentPos1x == currentPos2x) && (currentPos1y == currentPos2y)){

                    f2=0;
                    cntt2=0;
                    cnt2=0;
                    setfillstyle(SOLID_FILL,YELLOW);
                    circle(377,83,6); //p2 stop point
                    floodfill(377,83,15);

                }

                if((currentPos1x == currentPos3x) && (currentPos1y == currentPos3y)){

                    f3 = 0;
                    cntt3 = 0;
                    cnt3 = 0;
                    setfillstyle(SOLID_FILL,BLUE);
                    circle(556,287,6);  //p3 stop point
                    floodfill(556,287,15);

                }

                dicerolling();
                getch();
                sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                outtextxy(220,18,arr);

            }

            outtextxy(pla1x[cnt1-1]-6,pla1y[cnt1-1]-8,"  ");

            player1();
            if(fg1==1)
                break;

            if((currentPos1x == currentPos2x) && (currentPos1y == currentPos2y)){

                f2=0;
                cntt2=0;
                cnt2=0;
                setfillstyle(SOLID_FILL,YELLOW);
                circle(377,83,6); //p2 stop point
                floodfill(377,83,15);

            }

            if((currentPos1x == currentPos3x) && (currentPos1y == currentPos3y)){

                    f3 = 0;
                    cntt3 = 0;
                    cnt3 = 0;
                    setfillstyle(SOLID_FILL,BLUE);
                    circle(556,287,6);  //p3 stop point
                    floodfill(556,287,15);

            }

        }

         ///for player 2;
        if(f2==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
        }

        if(rn==6&&f2==0){

            setfillstyle(SOLID_FILL,YELLOW);
            circle(377,83,6); ///p2 start point
            floodfill(377,83,15);
            f2=1;

        }
        if(f2==1)
        {
            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            if(cntt2==0){
            
                outtextxy(377-6,83-8,"  ");
                cntt2=1;

            }

            if(rn==6){
            
                outtextxy(pla2x[cnt2-1]-6,pla2y[cnt2-1]-8,"  ");

                player2();
                if(fg2==1)
                    break;
                if((currentPos2x == currentPos1x) && (currentPos2y == currentPos1y))
                {
                    f1=0;
                    cntt1=0;
                    cnt1=0;
                    setfillstyle(SOLID_FILL,GREEN);
                    circle(96,217,6); //p1 stop point
                    floodfill(96,217,15);
                }

                if((currentPos2x == currentPos3x) && (currentPos2y == currentPos3y)){

                    f3 = 0;
                    cntt3 = 0;
                    cnt3 = 0;
                    setfillstyle(SOLID_FILL,BLUE);
                    circle(556,287,6);  //p3 stop point
                    floodfill(556,287,15);

                }

                outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
                dicerolling();
                sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                outtextxy(220,18,arr);

            }
            if(rn==6){
            
                outtextxy(pla2x[cnt2-1]-6,pla2y[cnt2-1]-8,"  ");
                player2();
                if(fg2==1)
                    break;
                if((currentPos2x == currentPos1x) && (currentPos2y == currentPos1y)){
                
                    f1=0;
                    cntt1=0;
                    cnt1=0;
                    setfillstyle(SOLID_FILL,GREEN);
                    circle(96,217,6); ///p1 stop point
                    floodfill(96,217,15);

                }

                if((currentPos2x == currentPos3x) && (currentPos2y == currentPos3y)){

                    f3 = 0;
                    cntt3 = 0;
                    cnt3 = 0;
                    setfillstyle(SOLID_FILL,BLUE);
                    circle(556,287,6);  ///p3 stop point
                    floodfill(556,287,15);

                }

                outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
                dicerolling();
                sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                outtextxy(220,18,arr);

            }

            outtextxy(pla2x[cnt2-1]-6,pla2y[cnt2-1]-8,"  ");
            player2();
            if(fg2==1)
                break;
            if((currentPos2x == currentPos1x) && (currentPos2y == currentPos1y)){
            
                f1=0;
                cntt1=0;
                cnt1=0;
                setfillstyle(SOLID_FILL,GREEN);
                circle(96,217,6); //p1 stop point
                floodfill(96,217,15);

            }

            if((currentPos2x == currentPos3x) && (currentPos2y == currentPos3y)){

                f3 = 0;
                cntt3 = 0;
                cnt3 = 0;
                setfillstyle(SOLID_FILL,BLUE);
                circle(556,287,6);  //p3 stop point
                floodfill(556,287,15);

            }

        }

        ///for player 3;
        if(f3==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);

        }

        if(rn==6 && f3==0){

            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  //p3 start point
            floodfill(556,287,15);
            f3=1;
        }
        if(f3==1){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            if(cntt3==0){

                outtextxy(556-6,287-8,"  ");
                cntt3=1;
            }

            if(rn==6){

                outtextxy(pla3x[cnt3-1]-6,pla3y[cnt3-1]-8,"  ");

                player3();

                if(fg3==1)
                    break;

                if((currentPos3x == currentPos1x) && (currentPos3y == currentPos1y)){

                    f1=0;
                    cntt1=0;
                    cnt1=0;
                    setfillstyle(SOLID_FILL,GREEN);
                    circle(96,217,6); //p1 stop point
                    floodfill(96,217,15);

                }

                if((currentPos3x == currentPos2x) && (currentPos3y == currentPos2y)){

                    f2=0;
                    cntt2=0;
                    cnt2=0;
                    setfillstyle(SOLID_FILL,YELLOW);
                    circle(377,83,6); //p2 stop point
                    floodfill(377,83,15);

                }


                outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
                dicerolling();

                sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                outtextxy(220,18,arr);

            }
            if(rn==6){

                outtextxy(pla3x[cnt3-1]-6,pla3y[cnt3-1]-8,"  ");
                player3();

                if(fg3==1)
                    break;

                if((currentPos3x == currentPos1x) && (currentPos3y == currentPos1y)){

                    f1=0;
                    cntt1=0;
                    cnt1=0;
                    setfillstyle(SOLID_FILL,GREEN);
                    circle(96,217,6); //p1 stop point
                    floodfill(96,217,15);
                }
                if((currentPos3x == currentPos2x) && (currentPos3y == currentPos2y)){

                    f2=0;
                    cntt2=0;
                    cnt2=0;
                    setfillstyle(SOLID_FILL,YELLOW);
                    circle(377,83,6); //p2 stop point
                    floodfill(377,83,15);

                }

                outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
                dicerolling();
                sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                outtextxy(220,18,arr);

            }

            outtextxy(pla3x[cnt3-1]-6,pla3y[cnt3-1]-8,"  ");
            player3();

            if(fg3==1)
                break;

            if((currentPos3x == currentPos1x) && (currentPos3y == currentPos1y)){

                    f1=0;
                    cntt1=0;
                    cnt1=0;
                    setfillstyle(SOLID_FILL,GREEN);
                    circle(96,217,6); ///p1 stop point
                    floodfill(96,217,15);

            }
            if((currentPos3x == currentPos2x) && (currentPos3y == currentPos2y)){

                    f2=0;
                    cntt2=0;
                    cnt2=0;
                    setfillstyle(SOLID_FILL,YELLOW);
                    circle(377,83,6); //p2 stop point
                    floodfill(377,83,15);
            }
        }
    }
}


void player1(){

    int i;

    if((currentPos1x>=62) && (currentPos1y == 252) && (currentPos1x<281)){

        cntg1=cnt1;
        for(i=0; i<rn; i++){

            cntg1++;

        }

        if((pla1x[cntg1-1]==266) && (pla1y[cntg1-1]==252)){

            setfillstyle(SOLID_FILL,GREEN);
            circle(pla1x[cntg1-1],pla1y[cntg1-1],6);
            floodfill(pla1x[cntg1-1],pla1y[cntg1-1],15);
            outtextxy(60,15,"PLAYER 1 IS THE WINNER");
            getch();
            fg1=1;

        }

        else if((pla1x[cntg1-1]<=232)&&(pla1y[cntg1-1]==252)){

            setfillstyle(SOLID_FILL,GREEN);
            circle(pla1x[cntg1-1],pla1y[cntg1-1],6);
            floodfill(pla1x[cntg1-1],pla1y[cntg1-1],15);
            cnt1=cntg1;

        }

        else if((pla1x[cntg1-1]>266)&&(pla1y[cntg1-1]==252)){

            setfillstyle(SOLID_FILL,GREEN);
            circle(pla1x[cnt1-1],pla1y[cnt1-1],6);
            floodfill(pla1x[cnt1-1],pla1y[cnt1-1],15);

        }

    }
    else{

        for(i=0; i<rn; i++)
        {

            cnt1++;
            currentPos1x = pla1x[cnt1-1];
            currentPos1y = pla1y[cnt1-1];

        }
        setfillstyle(SOLID_FILL,GREEN);
        circle(pla1x[cnt1-1],pla1y[cnt1-1],6);
        floodfill(pla1x[cnt1-1],pla1y[cnt1-1],15);
    }

}


void player2(){
    int i;
    if((currentPos2x == 326) && (currentPos2y >= 57) && (currentPos2y<235)){

        cntg2=cnt2;

        for(i=0; i<rn; i++){
        
            cntg2++;
        }

        if((pla2x[cntg2-1] == 326) && (pla2y[cntg2-1] == 215)){

            setfillstyle(SOLID_FILL,YELLOW);
            circle(pla2x[cntg2-1],pla2y[cntg2-1],6);
            floodfill(pla2x[cntg2-1],pla2y[cntg2-1],15);

            outtextxy(60,15,"PLAYER 2 IS THE WINNER");
            getch();
            fg2=1;

        }
        else if((pla2x[cntg2-1] == 326) && (pla2y[cntg2-1]<=187 )){
        
            setfillstyle(SOLID_FILL,YELLOW);
            circle(pla2x[cntg2-1],pla2y[cntg2-1],6);
            floodfill(pla2x[cntg2-1],pla2y[cntg2-1],15);

            cnt2=cntg2;
        }
        else if((pla2x[cntg2-1]==326)&&(pla2y[cntg2-1]>215)){
        
            setfillstyle(SOLID_FILL,YELLOW);
            circle(pla2x[cnt2-1],pla2y[cnt2-1],6);
            floodfill(pla2x[cnt2-1],pla2y[cnt2-1],15);

        }

    }

    else{
    
        for(i=0; i<rn; i++){
        

            cnt2++;
            currentPos2x = pla2x[cnt2-1];
            currentPos2y = pla2y[cnt2-1];

        }
        setfillstyle(SOLID_FILL,YELLOW);
        circle(pla2x[cnt2-1],pla2y[cnt2-1],6);
        floodfill(pla2x[cnt2-1],pla2y[cnt2-1],15);

    }

}

void player3(){

    int i;
    if((currentPos3x<=590) && (currentPos3y==252) && (currentPos3x>360)){

        cntg3=cnt3;

        for(i=0; i<rn; i++){

            cntg3++;
        }

        if((pla3x[cntg3-1] == 386) && (pla3y[cntg3-1] == 252)){


            setfillstyle(SOLID_FILL,BLUE);
            circle(pla3x[cntg3-1],pla3y[cntg3-1],6);
            floodfill(pla3x[cntg3-1],pla3y[cntg3-1],15);

            outtextxy(60,15,"PLAYER 3 IS THE WINNER");
            getch();
            fg3=1;
        }
        else if((pla3x[cntg3-1]>=432) && (pla3y[cntg3-1] == 252)){

            setfillstyle(SOLID_FILL,BLUE);
            circle(pla3x[cntg3-1],pla3y[cntg3-1],6);
            floodfill(pla3x[cntg3-1],pla3y[cntg3-1],15);
            cnt3=cntg3;

        }
        else if((pla3x[cntg3-1]<386) && (pla3y[cntg3-1] == 252)){

            setfillstyle(SOLID_FILL,BLUE);
            circle(pla3x[cnt3-1],pla3y[cnt3-1],6);
            floodfill(pla3x[cnt3-1],pla3y[cnt3-1],15);

        }

    }
    else{

        for(i=0; i<rn; i++){


            cnt3++;
            currentPos3x = pla3x[cnt3-1];
            currentPos3y = pla3y[cnt3-1];


        }

        setfillstyle(SOLID_FILL,BLUE);
        circle(pla3x[cnt3-1],pla3y[cnt3-1],6);
        floodfill(pla3x[cnt3-1],pla3y[cnt3-1],15);
    }

}


void dicerolling(){

    srand(time(0));
    rn = rand() % 6 + 1;
    getch();

}