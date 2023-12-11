#include "header.h"

int rn,cnt1[2]={0},cnt2[2]={0},cntt1[2]={0},status1[2]={0},cntt2[2]={0},cntg1[2] ={0},cntg2[2]={0},status2[2]={0}, status3[2]={0};
int cnt3[2]={0},cntt3[2]={0},cntg3[2]={0},cnt4[2]={0},cntt4[2]={0},cntg4[2]={0},status4[2]={0},n, win =0;
int f1=0,f2=0,f3=0,f4=0,fg1[2]={0},fg2[2]={0},fg3[2]={0},fg4[2]={0},endl1[2],endl2[2],endl3[2],endl4[2];
char pp,choice, winnerp[4]={0}, found = 0;
int player1x[2][58]={0}, player1y[2][58]={0}, player2x[2][58]={0}, player2y[2][58]={0}, player3x[2][58]={0}, player3y[2][58]={0};
int player4x[2][58]={0}, player4y[2][58]={0};

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


int pla3x[58] = {522,488,454,420,377,377,377,377,377,377,326,275,275,275,275,275,
               275,232,198,164,130,96,62,62,62,96,130,164,198,232,275,275,275,
               275,275,275,326,377,377,377,377,377,377,420,454,488,522,556,590,
               590,556,522,488,454,420,386,378,378};


int pla3y[58] = {287,287,287,287,317,343,369,395,421,447,447,447,421,395,369,343,
               317,287,287,287,287,287,287,252,217,217,217,217,217,217,187,161,
               135,109,83,57,57,57,83,109,135,161,187,217,217,217,217,217,217,
               252,252,252,252,252,252,252,252,252};


int pla4x[58] = {275,275,275,275,232,198,164,130,96,62,62,62,96,130,164,198,232,
               275,275,275,275,275,275,326,377,377,377,377,377,377,420,454,488,
               522,556,590,590,590,556,522,488,454,420,377,377,377,377,377,377,
               326,326,326,326,326,326,326,326,326};


int pla4y[58] = {395,369,343,317,287,287,287,287,287,287,252,217,217,217,217,217,
               217,187,161,135,109,83,57,57,57,83,109,135,161,187,217,217,217,
               217,217,217,252,287,287,287,287,287,287,317,343,369,395,421,447,
               447,421,395,369,343,317,285,280,280};


int currentPos1x[2],currentPos1y[2],currentPos2x[2],currentPos2y[2],currentPos3x[2],currentPos3y[2],currentPos4x[2],currentPos4y[2];

void game(){

    char arr[7];
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<58; j++){
            player1x[i][j] = pla1x[j];
            player1y[i][j] = pla1y[j];

            player2x[i][j] = pla2x[j];
            player2y[i][j] = pla2y[j];

            player3x[i][j] = pla3x[j];
            player3y[i][j] = pla3y[j];

            player4x[i][j] = pla4x[j];
            player4y[i][j] = pla4y[j];
        }
    }
    while(1){

        //for player 1;
     if(fg1[0]==0 || fg1[1]==0){

       if(f1==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);
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
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);

            if(cntt1[0]==0){

                outtextxy(95-4,217-6,"  ");
                cntt1[0]=1;
            }

           for(i=1; i<3; i++){
                if(rn==6 ){
                    if(status1[1] == 0 || status1[0] == 0){
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
                            if(status1[0] == 0){
                                status1[0] = 1;
                                if(cntt1[0]==0){
                                    //outtextxy(95-4,217-6,"  ");
                                    cntt1[0]=1;
                                }
                            }

                            else if(status1[1] == 0){
                                status1[1] = 1;
                                if(cntt1[1]==0){
                                    //outtextxy(95-4,217-6,"  ");
                                    cntt1[1]=1;
                                }
                            }

                            dicerolling();
                            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);

                        }

                        else if(pp == 'n' || pp == 'N'){

                            if(fg1[0] != 1 && status1[0] ==1){
                                outtextxy(player1x[0][cnt1[0]-1]-6,player1y[0][cnt1[0]-1]-8,"  ");

                                player1(0);
                                cutting1(0);

                                dicerolling();
                                sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

                            }

                            else if(fg1[1] != 1 && status1[1] ==1){
                                outtextxy(player1x[1][cnt1[1]-1]-6,player1y[1][cnt1[1]-1]-8,"  ");

                                player1(1);

                                cutting1(1);
                                dicerolling();
                                sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

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
                        //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                        //return;
                        winner(1);
                        //return;

                    }
                    cutting1(n);
                    dicerolling();
                    sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                    outtextxy(220,15,arr);
                    sprintf(arr,"%d",rn);
                    outtextxy(320, 243, arr);
                }
                else{

                        if(status1[0] == 1 && fg1[0]!=1){
                            outtextxy(player1x[0][cnt1[0]-1]-6,player1y[0][cnt1[0]-1]-8,"  ");
                            player1(0);
                            if(fg1[0]==1 && fg1[1] == 1){
                                //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                //return;
                                winner(1);
                                //return;

                            }

                            cutting1(0);

                            dicerolling();
                            sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);
                        }
                        else if(status1[1] == 1 && fg1[1]!=1){
                                //outtextxy(95-4,217-6,"  ");
                                outtextxy(player1x[1][cnt1[1]-1]-6,player1y[1][cnt1[1]-1]-8,"  ");
                                player1(1);
                                if(fg1[0]==1 && fg1[1] == 1){
                                    //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                    //return;
                                    winner(1);
                                    //return;

                                }

                               cutting1(1);

                                dicerolling();
                                sprintf(arr,"PLAYER 1 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);
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
                    //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                    //getch();
                    //return;
                    winner(1);
                    //return;
                }

                cutting1(n);

            }
            else{

                        if(status1[0] == 1 && fg1[0]!=1){
                            outtextxy(player1x[0][cnt1[0]-1]-6,player1y[0][cnt1[0]-1]-8,"  ");
                            player1(0);
                            if(fg1[0]==1 && fg1[1] == 1){
                                //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                //return;
                                winner(1);
                                //return;

                            }
                            cutting1(0);

                        }
                        else if(status1[1] == 1 && fg1[1]!=1){
                                //outtextxy(95-4,217-6,"  ");
                                outtextxy(player1x[1][cnt1[1]-1]-6,player1y[1][cnt1[1]-1]-8,"  ");
                                player1(1);
                                if(fg1[0]==1 && fg1[1] == 1){
                                    //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                    winner(1);
                                    //return;

                                }

                                cutting1(1);

                        }


                }


        }
     }


        //player 2
     if(fg2[0] == 0 || fg2[1] == 0){

        if(f2==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);
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
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);

            if(cntt2[0]==0){

                outtextxy(377-6,83-8,"  ");
                cntt2[0]=1;
            }

           for(i=1; i<3; i++){
                if(rn==6 ){
                    if(status2[1] == 0 || status2[0] == 0){
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
                            if(status2[0] == 0){
                                status2[0] = 1;
                                if(cntt2[0]==0){
                                 //outtextxy(377-6,83-8,"  ");
                                cntt2[0]=1;
                                }
                            }
                            else if(status2[1] == 0){
                                status2[1] = 1;
                                if(cntt2[1]==0){
                                    //outtextxy(377-6,83-8,"  ");
                                    cntt2[1]=1;
                                }
                            }

                            dicerolling();
                            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);

                        }

                        else if(pp == 'n' || pp == 'N'){

                            if(fg2[0] != 1 && status2[0] ==1){
                                outtextxy(player2x[0][cnt2[0]-1]-6,player2y[0][cnt2[0]-1]-8,"  ");

                                player2(0);

                                cutting2(0);

                                dicerolling();
                                sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

                            }

                            else if(fg2[1] != 1 && status2[1] ==1){
                                outtextxy(player2x[1][cnt2[1]-1]-6,player2y[1][cnt2[1]-1]-8,"  ");

                                player2(1);

                                cutting2(1);

                                dicerolling();
                                sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

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
                        //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                        //return;
                        winner(2);
                    }

                    cutting2(n);
                    dicerolling();
                    sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                    outtextxy(220,15,arr);
                    sprintf(arr,"%d",rn);
                    outtextxy(320, 243, arr);
                }
                else{

                        if(status2[0] == 1 && fg2[0]!=1){
                            outtextxy(player2x[0][cnt2[0]-1]-6,player2y[0][cnt2[0]-1]-8,"  ");
                            player2(0);
                            if(fg2[0]==1 && fg2[1] == 1){
                                //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                //return;
                                winner(2);

                            }

                            cutting2(0);
                            dicerolling();
                            sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);
                        }
                        else if(status2[1] == 1 && fg2[1]!=1){
                                outtextxy(player2x[1][cnt2[1]-1]-6,player2y[1][cnt2[1]-1]-8,"  ");
                                player2(1);
                                if(fg2[0]==1 && fg2[1] == 1){
                                    //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                    //return;
                                    winner(2);

                                }
                                cutting2(1);
                                dicerolling();
                                sprintf(arr,"PLAYER 2 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);
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
                    winner(2);
                }

                cutting2(n);
            }
            else{

                        if(status2[0] == 1 && fg2[0]!=1){
                            outtextxy(player2x[0][cnt2[0]-1]-6,player2y[0][cnt2[0]-1]-8,"  ");
                            player2(0);
                            if(fg2[0]==1 && fg2[1] == 1){
                                winner(2);

                            }
                            cutting2(0);

                        }
                        else if(status2[1] == 1 && fg2[1]!=1){
                                outtextxy(player2x[1][cnt2[1]-1]-6,player2y[1][cnt2[1]-1]-8,"  ");
                                player2(1);
                                if(fg2[0]==1 && fg2[1] == 1){
                                    winner(2);

                                }

                               cutting2(1);
                        }


                }


        }

     }

        //for player 3;
     if(fg3[0]==0 || fg3[1]==0){

       if(f3==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);
        }

        if(rn==6 && f3==0){

            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  ///p3 start point
            floodfill(556,287,15);
            f3=1;
            status3[0] = 1;

        }

        if(f3 == 1){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);

            if(cntt3[0]==0){

                outtextxy(556-6,287-8,"  ");
                cntt3[0] = 1;
            }

           for(i=1; i<3; i++){
                if(rn==6 ){
                    if(status3[1] == 0 || status3[0] == 0){
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
                            setfillstyle(SOLID_FILL,BLUE);
                            circle(556,287,6);  ///p3 start point
                            floodfill(556,287,15);
                            f3=1;
                            if(status3[0] == 0){
                                status3[0] = 1;
                                if(cntt3[0]==0){
                                    //outtextxy(556-6,287-8,"  ");
                                    cntt3[0]=1;
                                }
                            }

                            else if(status3[1] == 0){
                                status3[1] = 1;
                                if(cntt3[1]==0){
                                    //outtextxy(556-6,287-8,"  ");
                                    cntt3[1]=1;
                                }
                            }

                            dicerolling();
                            sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);

                        }

                        else if(pp == 'n' || pp == 'N'){

                            if(fg3[0] != 1 && status3[0] ==1){
                                outtextxy(player3x[0][cnt3[0]-1]-6,player3y[0][cnt3[0]-1]-8,"  ");

                                player3(0);

                                cutting3(0);
                                dicerolling();
                                sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

                            }

                            else if(fg3[1] != 1 && status3[1] ==1){
                                outtextxy(player3x[1][cnt3[1]-1]-6,player3y[1][cnt3[1]-1]-8,"  ");

                                player3(1);

                                cutting3(1);
                                dicerolling();
                                sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

                            }


                        }


                }
                else if(status3[0]==1 && status3[1]==1 && fg3[0]==0 && fg3[1]==0){

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
                    outtextxy(player3x[n][cnt3[n]-1]-6,player3y[n][cnt3[n]-1]-8,"  ");
                    player3(n);

                    if(fg3[0]==1 && fg3[1] == 1){

                        winner(3);

                    }
                    cutting3(n);
                    dicerolling();
                    sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                    outtextxy(220,15,arr);
                    sprintf(arr,"%d",rn);
                    outtextxy(320, 243, arr);
                }
                else{

                        if(status3[0] == 1 && fg3[0]!=1){
                            outtextxy(player3x[0][cnt3[0]-1]-6,player3y[0][cnt3[0]-1]-8,"  ");
                            player3(0);
                            if(fg3[0]==1 && fg3[1] == 1){

                                winner(3);

                            }
                            cutting3(0);

                            dicerolling();
                            sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);
                        }
                        else if(status3[1] == 1 && fg3[1]!=1){
                                outtextxy(player3x[1][cnt3[1]-1]-6,player3y[1][cnt3[1]-1]-8,"  ");
                                player3(1);
                                if(fg3[0]==1 && fg3[1] == 1){
                                    winner(3);
                                }
                                cutting3(1);
                                dicerolling();
                                sprintf(arr,"PLAYER 3 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);
                        }

                }

            }

            else{
                break;
            }

        }

        if(status3[0]==1 && status3[1]==1 && fg3[0]==0 && fg3[1]==0){

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
                outtextxy(player3x[n][cnt3[n]-1]-6,player3y[n][cnt3[n]-1]-8,"  ");

                player3(n);

                if(fg3[0] == 1 && fg3[1] == 1){

                    winner(3);

                }
                cutting3(n);

            }
            else{

                        if(status3[0] == 1 && fg3[0]!=1){
                            outtextxy(player3x[0][cnt3[0]-1]-6,player3y[0][cnt3[0]-1]-8,"  ");
                            player3(0);
                            if(fg3[0]==1 && fg3[1] == 1){
                                winner(3);
                            }
                            cutting3(0);

                        }
                        else if(status3[1] == 1 && fg3[1]!=1){
                                outtextxy(player3x[1][cnt3[1]-1]-6,player3y[1][cnt3[1]-1]-8,"  ");
                                player3(1);
                                if(fg3[0]==1 && fg3[1] == 1){
                                    //outtextxy(60,15,"PLAYER 1 IS THE WINNER");
                                    winner(3);
                                    //return;

                                }

                                cutting3(1);

                        }


                }


        }
     }

     //player 4
     if(fg4[0] == 0 || fg4[1] == 0){

        if(f4==0){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);
        }

        if(rn==6 && f4==0){

            setfillstyle(SOLID_FILL,RED);
            circle(275,421,6);  ///p4 start point
            floodfill(275,421,15);
            f4=1;
            status4[0] = 1;

        }

        if(f4 == 1){

            outtextxy(180,2,"NOW, YOUR TURN! DICE ROLL");
            dicerolling();
            sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
            outtextxy(220,18,arr);
            sprintf(arr,"%d",rn);
            outtextxy(320, 243, arr);

            if(cntt4[0]==0){
                outtextxy(275-6,421-8,"  ");
                cntt4[0]=1;
            }

           for(i=1; i<3; i++){
                if(rn==6 ){
                    if(status4[1] == 0 || status4[0] == 0){
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
                            setfillstyle(SOLID_FILL,RED);
                            circle(275,421,6);  ///p4 start point
                            floodfill(275,421,15);
                            f4=1;
                            if(status4[0] == 0){
                                status4[0] = 1;
                                if(cntt4[0]==0){
                                //outtextxy(275-6,421-8,"  ");
                                cntt4[0]=1;
                                }
                            }
                            if(status4[1] == 0){
                                status4[1] = 1;
                                if(cntt4[1]==0){
                                    //outtextxy(275-6,421-8,"  ");
                                    cntt4[1]=1;
                                }
                            }

                            dicerolling();
                            sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);

                        }

                        else if(pp == 'n' || pp == 'N'){

                            if(fg4[0] != 1 && status4[0] ==1){
                                outtextxy(player4x[0][cnt4[0]-1]-6,player4y[0][cnt4[0]-1]-8,"  ");

                                player4(0);

                                cutting4(0);
                                dicerolling();
                                sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

                            }

                            else if(fg4[1] != 1 && status4[1] ==1){
                                outtextxy(player4x[1][cnt4[1]-1]-6,player4y[1][cnt4[1]-1]-8,"  ");

                                player4(1);

                                cutting4(1);
                                dicerolling();
                                sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);

                            }


                        }


                }
                else if(status4[0]==1 && status4[1]==1 && fg4[0]==0 && fg4[1]==0){

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
                    outtextxy(player4x[n][cnt4[n]-1]-6,player4y[n][cnt4[n]-1]-8,"  ");
                    player4(n);

                    if(fg4[0]==1 && fg4[1] == 1){
                        //outtextxy(60,15,"PLAYER 4 IS THE WINNER");
                        //return;
                        winner(4);
                    }

                    cutting4(n);

                    dicerolling();
                    sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
                    outtextxy(220,15,arr);
                    sprintf(arr,"%d",rn);
                    outtextxy(320, 243, arr);
                }
                else{

                        if(status4[0] == 1 && fg4[0]!=1){
                            outtextxy(player4x[0][cnt4[0]-1]-6,player4y[0][cnt4[0]-1]-8,"  ");
                            player4(0);
                            if(fg4[0]==1 && fg4[1] == 1){
                                //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                //return;
                                winner(4);

                            }
                            cutting4(0);

                            dicerolling();
                            sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
                            outtextxy(220,15,arr);
                            sprintf(arr,"%d",rn);
                            outtextxy(320, 243, arr);
                        }
                        else if(status4[1] == 1 && fg4[1]!=1){
                                outtextxy(player4x[1][cnt4[1]-1]-6,player4y[1][cnt4[1]-1]-8,"  ");
                                player4(1);
                                if(fg4[0]==1 && fg4[1] == 1){
                                    //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                    //return;
                                    winner(4);

                                }
                                cutting4(1);
                                dicerolling();
                                sprintf(arr,"PLAYER 4 DICE ROLL IS %d",rn);
                                outtextxy(220,15,arr);
                                sprintf(arr,"%d",rn);
                                outtextxy(320, 243, arr);
                        }


                }


            }

            else{
                break;
            }

        }

        if(status4[0]==1 && status4[1]==1 && fg4[0]==0 && fg4[1]==0){

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
                outtextxy(player4x[n][cnt4[n]-1]-6,player4y[n][cnt4[n]-1]-8,"  ");

                player4(n);

                if(fg4[0] == 1 && fg4[1] == 1){
                    //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                    //getch();
                    //break;
                    //return;
                    winner(4);
                }

                cutting4(n);


            }
            else{

                        if(status4[0] == 1 && fg4[0]!=1){
                            outtextxy(player4x[0][cnt4[0]-1]-6,player4y[0][cnt4[0]-1]-8,"  ");
                            player4(0);
                            if(fg4[0]==1 && fg4[1] == 1){
                                //outtextxy(60,15,"PLAYER 4 IS THE WINNER");
                                //return;
                                winner(4);

                            }
                            cutting4(0);


                        }
                        else if(status4[1] == 1 && fg4[1]!=1){
                                outtextxy(player4x[1][cnt4[1]-1]-6,player4y[1][cnt4[1]-1]-8,"  ");
                                player4(1);
                                if(fg4[0]==1 && fg4[1] == 1){
                                    //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
                                    //return;
                                    winner(4);

                                }

                                cutting4(1);


                        }


                }


        }

     }


     /*if(fg1[0]==1 && fg2[0]==1 && fg1[1]==1 && fg2[1] == 1 && fg3[0]==1 && fg3[1]==1 && fg4[0]==1 && fg4[1]==1){
        cleardevice();
        break;
     }*/

     if(winnerp[2]!= 0){
        cleardevice();
        break;
     }


    }

    for(i=0; i<4; i++){
        printf("%d\n",winnerp[i]);
    }
    sprintf(arr,"PLAYER%d => WINNER",winnerp[0]);
    outtextxy(50,110,arr);
    sprintf(arr,"PLAYER%d => FIRST RUNNER UP",winnerp[1]);
    outtextxy(50,130,arr);
    sprintf(arr,"PLAYER%d => SECOND RUNNER UP",winnerp[2]);
    outtextxy(50,150,arr);
    for(i=1; i<=4; i++){
        found = 0;
        for(j=0; j<3; j++){
            if(i == winnerp[j]){
                found = 1;
                break;
            }

        }
        if(!found){
             winnerp[3] = i;
             break;
        }

        printf("This is and this is last one %d\n",winnerp[i]);

    }
    sprintf(arr,"PLAYER%d => NEXT TIME TRY YOUR BEST",winnerp[3]);
    outtextxy(50,170,arr);
    delay(500);
    getch();
}


void player1(int n){

    int i;

    if((currentPos1x[n]>=62) && (currentPos1y[n] == 252) && (currentPos1x[n]<281)){

        printf("%d\n",endl1[n]);
        //printf("the posion in final path: %d\n", currentPos1x[n]);
        cntg1[n]=cnt1[n];
        for(i=0; i<rn; i++){

            cntg1[n]++;

        }

        if((player1x[n][cntg1[n]-1]==266) && (player1y[n][cntg1[n]-1]==252)){
            //endl1[n]=1;
            setfillstyle(SOLID_FILL,GREEN);
            circle(player1x[n][cntg1[n]-1],player1y[n][cntg1[n]-1],6);
            floodfill(player1x[n][cntg1[n]-1],player1y[n][cntg1[n]-1],15);
            //outtextxy(60,15,"PLAYER 1 IS THE WINNER");




            //getch();

            fg1[n] = 1;

        }

        else if((player1x[n][cntg1[n]-1]<266) && (player1y[n][cntg1[n]-1]==252)){
            //endl1[n]=1;
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
            //endl1[n]=1;
            setfillstyle(SOLID_FILL,GREEN);
            circle(player1x[n][cnt1[n]-1],player1y[n][cnt1[n]-1],6);
            floodfill(player1x[n][cnt1[n]-1],player1y[n][cnt1[n]-1],15);


        }

    }
    else{

        for(i=0; i<rn; i++){

            cnt1[n]++;
            currentPos1x[n] = player1x[n][cnt1[n]-1];
            currentPos1y[n] = player1y[n][cnt1[n]-1];
            if(currentPos1x[n]==62 && currentPos1y[n]==252){
                endl1[n] = 1;
            }

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
            //endl2[n]=1;
            setfillstyle(SOLID_FILL,YELLOW);
            circle(player2x[n][cntg2[n]-1],player2y[n][cntg2[n]-1],6);
            floodfill(player2x[n][cntg2[n]-1],player2y[n][cntg2[n]-1],15);
            //outtextxy(60,15,"PLAYER 2 IS THE WINNER");
            //getch();

            fg2[n]=1;

        }

        else if((player2x[n][cntg2[n]-1] ==326) && (player2y[n][cntg2[n]-1] <= 187)){
            //endl2[n]=1;
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
            //endl2[n]=1;
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
            if(currentPos2y[n]==57 && currentPos2x[n]==326){
                endl2[n] = 1;
            }

        }
        setfillstyle(SOLID_FILL,YELLOW);
        circle(player2x[n][cnt2[n]-1],player2y[n][cnt2[n]-1],6);
        floodfill(player2x[n][cnt2[n]-1],player2y[n][cnt2[n]-1],15);
    }

}

void player3(int n){

    int i;

    if((currentPos3x[n]<=590) && (currentPos3y[n] == 252) && (currentPos3x[n]>378)){

        cntg3[n]=cnt3[n];
        for(i=0; i<rn; i++){

            cntg3[n]++;

        }

        if((player3x[n][cntg3[n]-1]==386) && (player3y[n][cntg3[n]-1]==252)){
            //endl3[n]=1;
            setfillstyle(SOLID_FILL,BLUE);
            circle(player3x[n][cntg3[n]-1],player3y[n][cntg3[n]-1],6);
            floodfill(player3x[n][cntg3[n]-1],player3y[n][cntg3[n]-1],15);

            //getch();

            fg3[n] = 1;

        }

        else if((player3x[n][cntg3[n]-1] >= 420) && (player3y[n][cntg3[n]-1]==252)){
            //endl3[n]=1;
            if(rn == 6 && n == 1){
                outtextxy(player3x[n][cnt3[n]-1]-6,player3y[n][cnt3[n]-1]-8,"  ");

            }
            else{
                setfillstyle(SOLID_FILL,BLUE);
                circle(player3x[n][cntg3[n]-1],player3y[n][cntg3[n]-1],6);
                floodfill(player3x[n][cntg3[n]-1],player3y[n][cntg3[n]-1],15);
                cnt3[n]=cntg3[n];

            }




        }

        else if((player3x[n][cntg3[n]-1]<386) && (player3y[n][cntg3[n]-1]==252)){
            //endl3[n]=1;
            setfillstyle(SOLID_FILL,BLUE);
            circle(player3x[n][cnt3[n]-1],player3y[n][cnt3[n]-1],6);
            floodfill(player3x[n][cnt3[n]-1],player3y[n][cnt3[n]-1],15);


        }

    }
    else{

        for(i=0; i<rn; i++){

            cnt3[n]++;
            currentPos3x[n] = player3x[n][cnt3[n]-1];
            currentPos3y[n] = player3y[n][cnt3[n]-1];
            if(currentPos3x[n]==590 && currentPos3y[n]==252){
                endl3[n] = 1;
            }

        }
        setfillstyle(SOLID_FILL,BLUE);
        circle(player3x[n][cnt3[n]-1],player3y[n][cnt3[n]-1],6);
        floodfill(player3x[n][cnt3[n]-1],player3y[n][cnt3[n]-1],15);
    }

}

void player4(int n){

    int i;

    if((currentPos4x[n] == 326) && (currentPos4y[n] <= 447) && (currentPos4y[n]>280)){

        cntg4[n]=cnt4[n];
        for(i=0; i<rn; i++){

            cntg4[n]++;

        }

        if((player4x[n][cntg4[n]-1]==326) && (player4y[n][cntg4[n]-1] == 285)){

            setfillstyle(SOLID_FILL,RED);
            circle(player4x[n][cntg4[n]-1],player4y[n][cntg4[n]-1],6);
            floodfill(player4x[n][cntg4[n]-1],player4y[n][cntg4[n]-1],15);
            fg4[n]=1;

        }

        else if((player4x[n][cntg4[n]-1] ==326) && (player4y[n][cntg4[n]-1] >= 317)){

            if(rn == 6 && n == 1){
                outtextxy(player4x[n][cnt4[n]-1]-6,player4y[n][cnt4[n]-1]-8,"  ");

            }
            else{
                setfillstyle(SOLID_FILL,RED);
                circle(player4x[n][cntg4[n]-1],player4y[n][cntg4[n]-1],6);
                floodfill(player4x[n][cntg4[n]-1],player4y[n][cntg4[n]-1],15);
                cnt4[n]=cntg4[n];
            }


        }

        else if((player4x[n][cntg4[n]-1] == 326) && (player4y[n][cntg4[n]-1] < 285)){

            setfillstyle(SOLID_FILL,RED);
            circle(player4x[n][cnt4[n]-1],player4y[n][cnt4[n]-1],6);
            floodfill(player4x[n][cnt4[n]-1],player4y[n][cnt4[n]-1],15);


        }

    }
    else{

        for(i=0; i<rn; i++){

            cnt4[n]++;
            currentPos4x[n] = player4x[n][cnt4[n]-1];
            currentPos4y[n] = player4y[n][cnt4[n]-1];
            if(currentPos4y[n]==447 && currentPos4x[n]==326){
                endl4[n] = 1;
            }

        }
        setfillstyle(SOLID_FILL,RED);
        circle(player4x[n][cnt4[n]-1],player4y[n][cnt4[n]-1],6);
        floodfill(player4x[n][cnt4[n]-1],player4y[n][cnt4[n]-1],15);
    }

}

void cutting1(int n){

        if((currentPos1x[n] == currentPos2x[0])  && (currentPos1y[n] == currentPos2y[0])&& endl2[0]!=1 && endl1[n]!=1){
            printf("%d\n",currentPos2y[0]);
            printf("%d\n", endl2[0]);
            status2[0]=0;
            cntt2[0]=0;
            cnt2[0]=0;
            currentPos2x[0]=0;
            currentPos2y[0]=0;
            setfillstyle(SOLID_FILL,YELLOW);
            circle(377,83,6); ///p2 stop point
            floodfill(377,83,15);
            if(status2[0]==0 && status2[1]==0){
               f2 = 0;
            }

        }
        if((currentPos1x[n] == currentPos2x[1])  && (currentPos1y[n] == currentPos2y[1])&& endl2[1]!=1 && endl1[n]!=1){
                printf("%d\n",currentPos2y[1]);
            printf("%d\n", endl2[1]);
               status2[1]=0;
               cntt2[1]=0;
               cnt2[1]=0;
               currentPos2x[1]=0;
               currentPos2y[1]=0;
               setfillstyle(SOLID_FILL,YELLOW);
               circle(377,83,6); ///p2 stop point
               floodfill(377,83,15);
               if(status2[0]==0 && status2[1]==0){
                    f2 = 0;
               }

        }
        if((currentPos1x[n] == currentPos3x[0])  && (currentPos1y[n] == currentPos3y[0])&& endl3[0]!=1 && endl1[n]!=1){
            printf("%d\n",currentPos3x[0]);
            printf("%d\n", endl3[0]);
            status3[0]=0;
            cntt3[0]=0;
            cnt3[0]=0;
            currentPos3x[0]=0;
            currentPos3y[0]=0;
            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  ///p3 stop point
            floodfill(556,287,15);
            if(status3[0]==0 && status3[1]==0){
                f3 = 0;
            }

        }
        if((currentPos1x[n] == currentPos3x[1])  && (currentPos1y[n] == currentPos3y[1])&& endl3[1]!=1 && endl1[n]!=1){
            printf("%d\n",currentPos3x[1]);
            printf("%d\n", endl3[1]);
            status3[1]=0;
            cntt3[1]=0;
            cnt3[1]=0;
            currentPos3x[1]=0;
            currentPos3y[1]=0;
            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  ///p3 stop point
            floodfill(556,287,15);
            if(status3[0]==0 && status3[1]==0){
                f3 = 0;
            }

        }
        if((currentPos1x[n] == currentPos4x[0])  && (currentPos1y[n] == currentPos4y[0])&& endl4[0]!=1 && endl1[n]!=1){
                printf("%d\n",currentPos4y[0]);
            printf("%d\n", endl4[0]);
               status4[0]=0;
               cntt4[0]=0;
               cnt4[0]=0;
               currentPos4x[0]=0;
               currentPos4y[0]=0;
               setfillstyle(SOLID_FILL,RED);
               circle(275,421,6);  ///p4 stop point
               floodfill(275,421,15);
               if(status4[0]==0 && status4[1]==0){
                    f4 = 0;
               }

        }
        if((currentPos1x[n] == currentPos4x[1])  && (currentPos1y[n] == currentPos4y[1])&& endl4[1]!=1 && endl1[n]!=1){
                printf("%d\n",currentPos4y[1]);
                printf("%d\n", endl4[1]);
               status4[1]=0;
               cntt4[1]=0;
               cnt4[1]=0;
               currentPos4x[1]=0;
               currentPos4y[1]=0;
               setfillstyle(SOLID_FILL,RED);
               circle(275,421,6);  ///p4 stop point
               floodfill(275,421,15);
               if(status4[0]==0 && status4[1]==0){
                    f4 = 0;
               }

        }

}

void cutting2(int n){

        if((currentPos2x[n] == currentPos1x[0]) && (currentPos2y[n] == currentPos1y[0])&& endl1[0]!=1 && endl2[n]!=1){
            printf("%d\n",currentPos1x[0]);
                printf("%d\n", endl1[0]);
            status1[0] = 0;
            cntt1[0]=0;
            cnt1[0]=0;
            currentPos1x[0]=0;
            currentPos1y[0]=0;
            setfillstyle(SOLID_FILL,GREEN);
            circle(96,217,6); ///p1 stop point
            floodfill(96,217,15);
            if(status1[0]==0 && status1[1]==0){
              f1 = 0;
            }

        }
        if((currentPos2x[n] == currentPos1x[1]) && (currentPos2y[n] == currentPos1y[1])&& endl1[1]!=1 && endl2[n]!=1){
            printf("%d\n",currentPos1x[1]);
                printf("%d\n", endl1[1]);
            status1[1] = 0;
            cntt1[1]=0;
            cnt1[1]=0;
            currentPos1x[1]=0;
            currentPos1y[1]=0;
            setfillstyle(SOLID_FILL,GREEN);
            circle(96,217,6); ///p1 stop point
            floodfill(96,217,15);
            if(status1[0]==0 && status1[1]==0){
              f1 = 0;
            }

        }
        if((currentPos2x[n] == currentPos3x[0])  && (currentPos2y[n] == currentPos3y[0])&& endl3[0]!=1 && endl2[n]!=1){
            printf("%d\n",currentPos3x[0]);
            printf("%d\n", endl3[0]);
            status3[0]=0;
            cntt3[0]=0;
            cnt3[0]=0;
            currentPos3x[0]=0;
            currentPos3y[0]=0;
            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  ///p3 stop point
            floodfill(556,287,15);
            if(status3[0]==0 && status3[1]==0){
                f3 = 0;
            }

        }
        if((currentPos2x[n] == currentPos3x[1])  && (currentPos2y[n] == currentPos3y[1])&& endl3[1]!=1 && endl2[n]!=1){
            printf("%d\n",currentPos3x[1]);
            printf("%d\n", endl3[1]);
            status3[1]=0;
            cntt3[1]=0;
            cnt3[1]=0;
            currentPos3x[1]=0;
            currentPos3y[1]=0;
            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  ///p3 stop point
            floodfill(556,287,15);
            if(status3[0]==0 && status3[1]==0){
                f3 = 0;
            }

        }

        if((currentPos2x[n] == currentPos4x[0]) && (currentPos2y[n] == currentPos4y[0])&& endl4[0]!=1 && endl2[n]!=1){
                printf("%d\n",currentPos4y[0]);
            printf("%d\n", endl4[0]);
                status4[0]=0;
               cntt4[0]=0;
               cnt4[0]=0;
               currentPos4x[0]=0;
               currentPos4y[0]=0;
               setfillstyle(SOLID_FILL,RED);
               circle(275,421,6);  ///p4 stop point
               floodfill(275,421,15);
               if(status4[0]==0 && status4[1]==0){
                    f4 = 0;
               }

        }
        if((currentPos2x[n] == currentPos4x[1])  && (currentPos2y[n] == currentPos4y[1])&& endl4[1]!=1 && endl2[n]!=1){
                printf("%d\n",currentPos4y[1]);
            printf("%d\n", endl4[1]);
               status4[1]=0;
               cntt4[1]=0;
               cnt4[1]=0;
               currentPos4x[1]=0;
               currentPos4y[1]=0;
               setfillstyle(SOLID_FILL,RED);
               circle(275,421,6);  ///p4 stop point
               floodfill(275,421,15);
               if(status4[0]==0 && status4[1]==0){
                    f4 = 0;
               }
        }


}

void cutting3(int n){
        if((currentPos3x[n] == currentPos1x[0]) && (currentPos3y[n] == currentPos1y[0])&& endl1[0]!=1 && endl3[n]!=1){
            printf("%d\n",currentPos1x[0]);
                printf("%d\n", endl1[0]);
            status1[0] = 0;
            cntt1[0]=0;
            cnt1[0]=0;
            currentPos1x[0]=0;
            currentPos1y[0]=0;
            setfillstyle(SOLID_FILL,GREEN);
            circle(96,217,6); ///p1 stop point
            floodfill(96,217,15);
            if(status1[0]==0 && status1[1]==0){
              f1 = 0;
            }

        }
        if((currentPos3x[n] == currentPos1x[1]) && (currentPos3y[n] == currentPos1y[1])&& endl1[1]!=1 && endl3[n]!=1){
            printf("%d\n",currentPos1x[1]);
                printf("%d\n", endl1[1]);
            status1[1] = 0;
            cntt1[1]=0;
            cnt1[1]=0;
            currentPos1x[1]=0;
            currentPos1y[1]=0;
            setfillstyle(SOLID_FILL,GREEN);
            circle(96,217,6); ///p1 stop point
            floodfill(96,217,15);
            if(status1[0]==0 && status1[1]==0){
              f1 = 0;
            }

        }
        if((currentPos3x[n] == currentPos2x[0])  && (currentPos3y[n] == currentPos2y[0])&& endl2[0]!=1 && endl3[n]!=1){
                printf("%d\n",currentPos2y[0]);
            printf("%d\n", endl2[0]);
                status2[0]=0;
                cntt2[0]=0;
                cnt2[0]=0;
                currentPos2x[0]=0;
                currentPos2y[0]=0;
                setfillstyle(SOLID_FILL,YELLOW);
                circle(377,83,6); ///p2 stop point
                floodfill(377,83,15);
                if(status2[0]==0 && status2[1]==0){
                   f2 = 0;
                }

        }
        if((currentPos3x[n] == currentPos2x[1])  && (currentPos3y[n] == currentPos2y[1])&& endl2[1]!=1 && endl3[n]!=1){
            printf("%d\n",currentPos2y[1]);
            printf("%d\n", endl2[1]);
               status2[1]=0;
               cntt2[1]=0;
               cnt2[1]=0;
               currentPos2x[1]=0;
                currentPos2y[1]=0;
               setfillstyle(SOLID_FILL,YELLOW);
               circle(377,83,6); ///p2 stop point
               floodfill(377,83,15);
               if(status2[0]==0 && status2[1]==0){
                    f2 = 0;
                }

        }

        if((currentPos3x[n] == currentPos4x[0])  && (currentPos3y[n] == currentPos4y[0])&& endl4[0]!=1 && endl3[n]!=1){
                printf("%d\n",currentPos4y[0]);
            printf("%d\n", endl4[0]);
               status4[0]=0;
               cntt4[0]=0;
               cnt4[0]=0;
               currentPos4x[0]=0;
               currentPos4y[0]=0;
               setfillstyle(SOLID_FILL,RED);
               circle(275,421,6);  ///p4 stop point
               floodfill(275,421,15);
               if(status4[0]==0 && status4[1]==0){
                    f4 = 0;
               }

        }
        if((currentPos3x[n] == currentPos4x[1])  && (currentPos3y[n] == currentPos4y[1])&& endl4[1]!=1 && endl3[n]!=1){
                printf("%d\n",currentPos4y[1]);
                printf("%d\n", endl4[1]);
               status4[1]=0;
               cntt4[1]=0;
               cnt4[1]=0;
               currentPos4x[1]=0;
               currentPos4y[1]=0;
               setfillstyle(SOLID_FILL,RED);
               circle(275,421,6);  ///p4 stop point
               floodfill(275,421,15);
               if(status4[0]==0 && status4[1]==0){
                    f4 = 0;
               }
        }



}

void cutting4(int n){

     if((currentPos4x[n] == currentPos1x[0]) && (currentPos4y[n] == currentPos1y[0])&& endl1[0]!=1 && endl4[n]!=1){
                printf("%d\n",currentPos1x[0]);
                printf("%d\n", endl1[0]);
                status1[0] = 0;
                cntt1[0]=0;
                cnt1[0]=0;
                currentPos1x[0]=0;
                currentPos1y[0]=0;
                setfillstyle(SOLID_FILL,GREEN);
                circle(96,217,6); ///p1 stop point
                floodfill(96,217,15);
                if(status1[0]==0 && status1[1]==0){
                  f1 = 0;
                }

        }
        if((currentPos4x[n] == currentPos1x[1]) && (currentPos4y[n] == currentPos1y[1])&& endl1[1]==0 && endl4[n]==0){
            printf("%d\n",currentPos1x[1]);
                printf("%d\n", endl1[1]);
            status1[1] = 0;
            cntt1[1]=0;
            cnt1[1]=0;
            currentPos1x[1]=0;
            currentPos1y[1]=0;
            setfillstyle(SOLID_FILL,GREEN);
            circle(96,217,6); ///p1 stop point
            floodfill(96,217,15);
            if(status1[0]==0 && status1[1]==0){
              f1 = 0;
            }

        }
        if((currentPos4x[n] == currentPos3x[0])  && (currentPos4y[n] == currentPos3y[0])&& endl3[0]!=1 && endl4[n]!=1){
            printf("%d\n",currentPos3x[0]);
            printf("%d\n", endl3[0]);
            status3[0]=0;
            cntt3[0]=0;
            cnt3[0]=0;
            currentPos3x[0]=0;
            currentPos3y[0]=0;
            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  ///p3 stop point
            floodfill(556,287,15);
            if(status3[0]==0 && status3[1]==0){
                f3 = 0;
            }

        }
        if((currentPos4x[n] == currentPos3x[1])  && (currentPos4y[n] == currentPos3y[1])&& endl3[1]!=1 && endl4[n]!=1){
            printf("%d\n",currentPos3x[1]);
            printf("%d\n", endl3[1]);
            status3[1]=0;
            cntt3[1]=0;
            cnt3[1]=0;
            currentPos3x[1]=0;
            currentPos3y[1]=0;
            setfillstyle(SOLID_FILL,BLUE);
            circle(556,287,6);  ///p3 stop point
            floodfill(556,287,15);
            if(status3[0]==0 && status3[1]==0){
                f3 = 0;
            }

        }
        if((currentPos4x[n] == currentPos2x[0])  && (currentPos4y[n] == currentPos2y[0])&& endl2[0]!=1 && endl4[n]!=1){
                printf("%d\n",currentPos2y[0]);
            printf("%d\n", endl2[0]);
                status2[0]=0;
                cntt2[0]=0;
                cnt2[0]=0;
                currentPos2x[0]=0;
                currentPos2y[0]=0;
                setfillstyle(SOLID_FILL,YELLOW);
                circle(377,83,6); ///p2 stop point
                floodfill(377,83,15);
                if(status2[0]==0 && status2[1]==0){
                   f2 = 0;
                }

        }
        if((currentPos4x[n] == currentPos2x[1])  && (currentPos4y[n] == currentPos2y[1])&& endl2[1]!=1 && endl4[n]!=1){
                printf("%d\n",currentPos2y[1]);
                printf("%d\n", endl2[1]);
               status2[1]=0;
               cntt2[1]=0;
               cnt2[1]=0;
               currentPos2x[1]=0;
               currentPos2y[1]=0;
               setfillstyle(SOLID_FILL,YELLOW);
               circle(377,83,6); ///p2 stop point
               floodfill(377,83,15);
               if(status2[0]==0 && status2[1]==0){
                    f2 = 0;
                }

        }


}


void winner(int  num){

  if(win==0){

      outtextxy(50,50,"WINNER");
      winnerp[win] = num;

      delay(500);
      win+=1;
  }
  else if(win==1){


     outtextxy(50,50,"FIRST RUNNER UP");
     winnerp[win] = num;

     delay(500);
     win+=1;
 }
 else if(win==2){
       outtextxy(50,50,"SECOND RUNNER UP");
       winnerp[win] = num;
       win+=1;
       delay(500);

  }



}

void dicerolling(){

    srand(time(0));
    rn = rand() % 6 + 1;
    getch();

}


