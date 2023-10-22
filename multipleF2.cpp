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
void player1(int n);
void player2(int n);
//void player3();
//void player4();


int rn,cnt1[2]={0},cnt2[2]={0},cntt1[2]={0},status1[2]={0},cntt2[2]={0},cntg1[2] ={0},cntg2[2]={0},status2[2]={0};
int cnt3=0,cntt3=0,cntg3=0,cnt4=0,cntt4=0,cntg4,n;
int f1=0,f2=0,f3=0,fg1[2]={0},fg2[2]={0},fg3=0,f4=0,fg4=0;
char pp,choice;
int player1x[2][58]={0}, player1y[2][58]={0}, player2x[2][58]={0}, player2y[2][58]={0};

int pla1x[58] ={130,164,198,232,275,275,275,275,275,275,326,377,377,377,377,377,377,
              420,454,488,522,556,590,590,590,556,522,488,454,420,377,377,377,377,
              377,377,326,275,275,275,275,275,275,232,198,164,130,96,62,62,96,
              130,164,198,232,266,275,275};


int pla1y[58] = {217,217,217,217,187,161,135,109,83,57,57,57,83,109,135,161,187,
               217,217,217,217,217,217,252,287,287,287,287,287,287,317,343,369,
               395,421,447,447,447,421,395,369,343,317,287,287,287,287,287,287,
               252,252,252,252,252,252,252,252,252};


int pla2x[58] = {377,377,377,377,420,454,488,522,556,590,590,590,556,522,488,454,
               420,377,377,377,377,377,377,326,275,275,275,275,275,275,232,198,
               164,130,96,62,62,62,96,130,164,198,232,275,275,275,275,275,275,
               326,326,326,326,326,326,326,326,326};


int pla2y[58] = {109,135,161,187,217,217,217,217,217,217,252,287,287,287,287,287,
               287,317,343,369,395,421,447,447,447,421,395,369,343,317,287,287,
               287,287,287,287,252,217,217,217,217,217,217,187,161,135,109,83,
               57,57,83,109,135,161,187,215,225,225};




int currentPos1x[2],currentPos1y[2],currentPos2x[2],currentPos2y[2],currentPos3x,currentPos3y,currentPos4x,currentPos4y;


int main(){

	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");

    char arr[7];

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
    outtextxy(300, 243, "END");
}


void game(){

    char arr[7];
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<58; j++){
            player1x[i][j] = pla1x[j];
            player1y[i][j] = pla1y[j];

            player2x[i][j] = pla2x[j];
            player2y[i][j] = pla2y[j];
        }
    }
    while(1){

        //for player 1;
       if(f1==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
        }

        if(rn==6 && f1==0){

            setfillstyle(SOLID_FILL,GREEN);
            circle(96,217,6); ///p1 start point
            floodfill(96,217,15);
            f1=1;
            status1[0] = 1;

        }

        if(f1==1){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);

            if(cntt1[0]==0){

                outtextxy(95-4,217-6,"  ");
                cntt1[0]=1;
            }

           for(i=1; i<3; i++){
                if(rn==6 ){
                    if(status1[1] == 0){
                        do{
                        //outtextxy(10,410,"you want to open the piece ");
                        //outtextxy(10,430,"y: yes");
                        //outtextxy(10,450,"n: no");
                        printf("Do you want to open the next pawn?\n");
                        printf("y:yes\n");
                        printf("n:no\n");
                        pp=getch();

                        }while(pp!='y'&&pp!='Y'&&pp!='n'&&pp!='N');

                        if(pp == 'y' || pp == 'Y'){
                            setfillstyle(SOLID_FILL,GREEN);
                            circle(96,217,6); ///p1 start point
                            floodfill(96,217,15);
                            f1=1;
                            status1[1] = 1;
                            if(cntt1[1]==0){
                                //outtextxy(95-4,217-6,"  ");
                                cntt1[1]=1;
                            }
                            dicerolling();
                            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);

                        }

                        else if(pp == 'n' || pp == 'N'){

                            if(fg1[0] != 1 && status1[0] ==1){
                                outtextxy(player1x[0][cnt1[0]-1]-6,player1y[0][cnt1[0]-1]-8,"  ");

                                player1(0);

                                dicerolling();
                                sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);

                            }


                        }


                }
                else if(status1[0]==1 && status1[1]==1 && fg1[0]==0 && fg1[1]==0){

                    do{
                        //outtextxy(10,400,"enterpiece no. ");
                        printf("Enterpiece no?\n");
                        printf("Enter 1 or 2\n");

                        choice = getch();

                    }while(choice!='1' && choice!='2');

                    if(choice == '1'){
                        n = 0;
                    }
                    else if(choice == '2'){
                        n = 1;
                    }
                    outtextxy(player1x[n][cnt1[n]-1]-6,player1y[n][cnt1[n]-1]-8,"  ");
                    player1(n);

                    if(fg1[0]==1 && fg1[1] == 1){
                        outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                        return;

                    }

                    dicerolling();
                    sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                    outtextxy(220,15,arr);
                }
                else{

                        if(status1[0] == 1 && fg1[0]!=1){
                            outtextxy(player1x[0][cnt1[0]-1]-6,player1y[0][cnt1[0]-1]-8,"  ");
                            player1(0);
                            if(fg1[0]==1 && fg1[1] == 1){
                                outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                return;

                            }
                            dicerolling();
                            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                        }
                        else if(status1[1] == 1 && fg1[1]!=1){
                                outtextxy(player1x[1][cnt1[1]-1]-6,player1y[1][cnt1[1]-1]-8,"  ");
                                player1(1);
                                if(fg1[0]==1 && fg1[1] == 1){
                                    outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                    return;

                                }
                                dicerolling();
                                sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                        }


                }


            }

            else{
                break;
            }

        }

        if(status1[0]==1 && status1[1]==1 && fg1[0]==0 && fg1[1]==0){

                do{
                     //outtextxy(10,400,"enterpiece no. ");
                        printf("Enterpiece no?\n");
                        printf("Enter 1 or 2\n");
                        choice=getch();

                }while(choice!='1' && choice!='2');

                if(choice == '1'){
                   n = 0;
                }
                else if(choice == '2'){
                   n = 1;
                }
                outtextxy(player1x[n][cnt1[n]-1]-6,player1y[n][cnt1[n]-1]-8,"  ");

                player1(n);

                if(fg1[0] == 1 && fg1[1] == 1){
                    outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                    //getch();
                    //break;
                    return;
                }


            }
            else{
                        if(status1[0] == 1 && fg1[0]!=1){
                            outtextxy(player1x[0][cnt1[0]-1]-6,player1y[0][cnt1[0]-1]-8,"  ");
                            player1(0);
                            if(fg1[0]==1 && fg1[1] == 1){
                                outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                return;

                            }

                        }
                        else if(status1[1] == 1 && fg1[1]!=1){
                                outtextxy(player1x[1][cnt1[1]-1]-6,player1y[1][cnt1[1]-1]-8,"  ");
                                player1(1);
                                if(fg1[0]==1 && fg1[1] == 1){
                                    outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                    return;

                                }

                        }


                }


        }


        //player 2

        if(f2==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
        }

        if(rn==6 && f2==0){

            setfillstyle(SOLID_FILL,YELLOW);
            circle(377,83,6); ///p2 start point
            floodfill(377,83,15);
            f2=1;
            status2[0] = 1;

        }

        if(f2 == 1){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);

            if(cntt2[0]==0){

                outtextxy(377-6,83-8,"  ");
                cntt2[0]=1;
            }

           for(i=1; i<3; i++){
                if(rn==6 ){
                    if(status2[1] == 0){
                        do{
                        //outtextxy(10,410,"you want to open the piece ");
                        //outtextxy(10,430,"y: yes");
                        //outtextxy(10,450,"n: no");
                        printf("Do you want to open the next pawn?\n");
                        printf("y:yes\n");
                        printf("n:no\n");
                        pp=getch();

                        }while(pp!='y'&&pp!='Y'&&pp!='n'&&pp!='N');

                        if(pp == 'y' || pp == 'Y'){
                            setfillstyle(SOLID_FILL,YELLOW);
                            circle(377,83,6); ///p2 start point
                            floodfill(377,83,15);
                            f2=1;
                            status2[1] = 1;
                            if(cntt2[1]==0){
                                //outtextxy(95-4,217-6,"  ");
                                cntt2[1]=1;
                            }
                            dicerolling();
                            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);

                        }

                        else if(pp == 'n' || pp == 'N'){

                            if(fg2[0] != 1 && status2[0] ==1){
                                outtextxy(player2x[0][cnt2[0]-1]-6,player2y[0][cnt2[0]-1]-8,"  ");

                                player2(0);

                                dicerolling();
                                sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);

                            }


                        }


                }
                else if(status2[0]==1 && status2[1]==1 && fg2[0]==0 && fg2[1]==0){

                    do{
                        //outtextxy(10,400,"enterpiece no. ");
                        printf("Enterpiece no?\n");
                        printf("Enter 1 or 2\n");

                        choice = getch();

                    }while(choice!='1' && choice!='2');

                    if(choice == '1'){
                        n = 0;
                    }
                    else if(choice == '2'){
                        n = 1;
                    }
                    outtextxy(player2x[n][cnt2[n]-1]-6,player2y[n][cnt2[n]-1]-8,"  ");
                    player2(n);

                    if(fg2[0]==1 && fg2[1] == 1){
                        outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                        return;

                    }

                    dicerolling();
                    sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                    outtextxy(220,15,arr);
                }
                else{

                        if(status2[0] == 1 && fg2[0]!=1){
                            outtextxy(player2x[0][cnt2[0]-1]-6,player2y[0][cnt2[0]-1]-8,"  ");
                            player2(0);
                            if(fg2[0]==1 && fg2[1] == 1){
                                outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                return;

                            }
                            dicerolling();
                            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                        }
                        else if(status2[1] == 1 && fg2[1]!=1){
                                outtextxy(player2x[1][cnt2[1]-1]-6,player2y[1][cnt2[1]-1]-8,"  ");
                                player2(1);
                                if(fg2[0]==1 && fg2[1] == 1){
                                    outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                    return;

                                }
                                dicerolling();
                                sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                        }


                }


            }

            else{
                break;
            }

        }

        if(status2[0]==1 && status2[1]==1 && fg2[0]==0 && fg2[1]==0){

                do{
                     //outtextxy(10,400,"enterpiece no. ");
                        printf("Enterpiece no?\n");
                        printf("Enter 1 or 2\n");
                        choice=getch();

                }while(choice!='1' && choice!='2');

                if(choice == '1'){
                   n = 0;
                }
                else if(choice == '2'){
                   n = 1;
                }
                outtextxy(player2x[n][cnt2[n]-1]-6,player2y[n][cnt2[n]-1]-8,"  ");

                player2(n);

                if(fg2[0] == 1 && fg2[1] == 1){
                    outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                    //getch();
                    //break;
                    return;
                }


            }
            else{

                        if(status2[0] == 1 && fg2[0]!=1){
                            outtextxy(player2x[0][cnt2[0]-1]-6,player2y[0][cnt2[0]-1]-8,"  ");
                            player2(0);
                            if(fg2[0]==1 && fg2[1] == 1){
                                outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                return;

                            }

                        }
                        else if(status2[1] == 1 && fg2[1]!=1){
                                outtextxy(player2x[1][cnt2[1]-1]-6,player2y[1][cnt2[1]-1]-8,"  ");
                                player2(1);
                                if(fg2[0]==1 && fg2[1] == 1){
                                    outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                    return;

                                }

                        }


                }


        }

    }

}


void player1(int n){

    int i;

    if((currentPos1x[n]>=62) && (currentPos1y[n] == 252) && (currentPos1x[n]<281)){

        cntg1[n]=cnt1[n];
        for(i=0; i<rn; i++){

            cntg1[n]++;

        }

        if((player1x[n][cntg1[n]-1]==266) && (player1y[n][cntg1[n]-1]==252)){

            setfillstyle(SOLID_FILL,GREEN);
            circle(player1x[n][cntg1[n]-1],player1y[n][cntg1[n]-1],6);
            floodfill(player1x[n][cntg1[n]-1],player1y[n][cntg1[n]-1],15);
            //outtextxy(60,15,"PLAYER 1 IS THE WINNER");

            //printf("the posion in final path: %d\n", player1x[0][cntg1[0]-1]);


            getch();
            fg1[n] = 1;

        }

        else if((player1x[n][cntg1[n]-1]<266) && (player1y[n][cntg1[n]-1]==252)){

            if(rn == 6 && n == 1){
                //dicerolling();
                outtextxy(player1x[n][cnt1[n]-1]-6,player1y[n][cnt1[n]-1]-8,"  ");
            }
            else{
                setfillstyle(SOLID_FILL,GREEN);
            circle(player1x[n][cntg1[n]-1],player1y[n][cntg1[n]-1],6);
            floodfill(player1x[n][cntg1[n]-1],player1y[n][cntg1[n]-1],15);
            cnt1[n]=cntg1[n];

            }




        }

        else if((player1x[n][cntg1[n]-1]>266) && (player1y[n][cntg1[n]-1]==252)){

            setfillstyle(SOLID_FILL,GREEN);
            circle(player1x[n][cnt1[n]-1],player1y[n][cnt1[n]-1],6);
            floodfill(player1x[n][cnt1[n]-1],player1y[n][cnt1[n]-1],15);
            //printf("the posion in final path: %d\n", player1x[1][cnt1[1]-1]);
            if(n == 1){
                printf("the posion in final path: %d\n", player1x[1][cnt1[1]-1]);
            }


        }

    }
    else{

        for(i=0; i<rn; i++){

            cnt1[n]++;
            currentPos1x[n] = player1x[n][cnt1[n]-1];
            currentPos1y[n] = player1y[n][cnt1[n]-1];

        }
        setfillstyle(SOLID_FILL,GREEN);
        circle(player1x[n][cnt1[n]-1],player1y[n][cnt1[n]-1],6);
        floodfill(player1x[n][cnt1[n]-1],player1y[n][cnt1[n]-1],15);
    }

}


void player2(int n){

    int i;

    if((currentPos2x[n] == 326) && (currentPos2y[n] >= 57) && (currentPos2y[n]<235)){

        cntg2[n]=cnt2[n];
        for(i=0; i<rn; i++){

            cntg2[n]++;

        }

        if((player2x[n][cntg2[n]-1]==326) && (player2y[n][cntg2[n]-1] == 215)){

            setfillstyle(SOLID_FILL,YELLOW);
            circle(player2x[n][cntg2[n]-1],player2y[n][cntg2[n]-1],6);
            floodfill(player2x[n][cntg2[n]-1],player2y[n][cntg2[n]-1],15);
            //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
            getch();
            fg2[n]=1;

        }

        else if((player2x[n][cntg2[n]-1] ==326) && (player2y[n][cntg2[n]-1] <= 187)){

            if(rn == 6 && n == 1){
                outtextxy(player2x[n][cnt2[n]-1]-6,player2y[n][cnt2[n]-1]-8,"  ");
            }
            else{
                setfillstyle(SOLID_FILL,YELLOW);
            circle(player2x[n][cntg2[n]-1],player2y[n][cntg2[n]-1],6);
            floodfill(player2x[n][cntg2[n]-1],player2y[n][cntg2[n]-1],15);
            cnt2[n]=cntg2[n];
            }


        }

        else if((player2x[n][cntg2[n]-1] == 326) && (player2y[n][cntg2[n]-1] >215)){

            setfillstyle(SOLID_FILL,YELLOW);
            circle(player2x[n][cnt2[n]-1],player2y[n][cnt2[n]-1],6);
            floodfill(player2x[n][cnt2[n]-1],player2y[n][cnt2[n]-1],15);

        }

    }
    else{

        for(i=0; i<rn; i++){

            cnt2[n]++;
            currentPos2x[n] = player2x[n][cnt2[n]-1];
            currentPos2y[n] = player2y[n][cnt2[n]-1];

        }
        setfillstyle(SOLID_FILL,YELLOW);
        circle(player2x[n][cnt2[n]-1],player2y[n][cnt2[n]-1],6);
        floodfill(player2x[n][cnt2[n]-1],player2y[n][cnt2[n]-1],15);
    }

}



void dicerolling(){

    srand(time(0));
    rn = rand() % 6 + 1;
    getch();

}








