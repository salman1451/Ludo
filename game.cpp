
#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
//#include "Board.h"
#include "util.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;


/***** Functions ********/
void name_storing();
void score_storing();
void name_reading();
void blue_dice();
void red_dice();
void green_dice();
void yellow_dice();



/******* Varibales for counting the scores of players *******/
int blue_player_score=0, red_player_score=0, green_player_score=0, yellow_player_score=0;

/***** number variables for the dice ********/
int num_1=0, num_2=0, num_3=0, num_4=0;
int space_bar=1;

/***** varables of name and choice ******/
string name,choice,line;

/****** axis of board *******/
int board_x_axis=250;
int board_y_axis=0;

/**** menu *****/
int game_menu=0;

/****** color ********/
float *scolor=colors[WHITE];

/***** axis of blue player pieces ******/
int blue_1_x_axis=330, blue_1_y_axis=80;
int blue_2_x_axis=330, blue_2_y_axis=220;
int blue_3_x_axis=470, blue_3_y_axis=220;
int blue_4_x_axis=470, blue_4_y_axis=80;

/***** repositioning the axis of blue player pieces ******/
int rep_blue_1_x=0, rep_blue_1_y=0;
int rep_blue_2_x=0, rep_blue_2_y=0;
int rep_blue_3_x=0, rep_blue_3_y=0;
int rep_blue_4_x=0, rep_blue_4_y=0;

/****** for initalizing the blue player pieces *****/
int blue_1_piece=0, blue_2_piece=0, blue_3_piece=0, blue_4_piece=0;

/***** axis of red player pieces ******/
int red_1_x_axis=330, red_1_y_axis=530;
int red_2_x_axis=330, red_2_y_axis=670;
int red_3_x_axis=470, red_3_y_axis=670;
int red_4_x_axis=470, red_4_y_axis=530;

/***** repositioning the axis of red player pieces ******/
int rep_red_1_x=0, rep_red_1_y=0;
int rep_red_2_x=0, rep_red_2_y=0;
int rep_red_3_x=0, rep_red_3_y=0;
int rep_red_4_x=0, rep_red_4_y=0;

/****** for initalizing the red player pieces *****/
int red_1_piece=0, red_2_piece=0, red_3_piece=0, red_4_piece=0;

/****** axis of green player pieces******/
int green_1_x_axis=780, green_1_y_axis=530;
int green_2_x_axis=780, green_2_y_axis=670;
int green_3_x_axis=920, green_3_y_axis=670;
int green_4_x_axis=920, green_4_y_axis=530;

/***** repositioning the axis of green player pieces ******/
int rep_green_1_x=0, rep_green_1_y=0;
int rep_green_2_x=0, rep_green_2_y=0;
int rep_green_3_x=0, rep_green_3_y=0;
int rep_green_4_x=0, rep_green_4_y=0;
/****** for initalizing the green player pieces *****/
int green_1_piece=0, green_2_piece=0, green_3_piece=0, green_4_piece=0;

/****** for initalizing the yellow player pieces *****/
int yellow_1_piece=0, yellow_2_piece=0, yellow_3_piece=0, yellow_4_piece=0;

/***** axis of yellow player pieces *****/
int yellow_1_x_axis=780, yellow_1_y_axis=80;
int yellow_2_x_axis=780, yellow_2_y_axis=220;
int yellow_3_x_axis=920, yellow_3_y_axis=220;
int yellow_4_x_axis=920, yellow_4_y_axis=80;

/***** repositioning the axis of yellow player pieces ******/
int rep_yellow_1_x=0, rep_yellow_1_y=0;
int rep_yellow_2_x=0, rep_yellow_2_y=0;
int rep_yellow_3_x=0, rep_yellow_3_y=0;
int rep_yellow_4_x=0, rep_yellow_4_y=0;	
// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

// Function for name storing in the file "Names.txt"
void name_storing()
{
	ofstream myfile;
	myfile.open("Names.txt", ios::out | ios::app);
	myfile << name << "                    " << choice << endl;
	myfile.close();
}

// Function for score storing in the file "highscores.txt"
void score_storing()
{
	ofstream myfile;
	myfile.open("highscores.txt", ios::out | ios::app);
	myfile << blue_player_score<< endl;
	myfile << red_player_score<< endl;
	myfile << green_player_score<< endl;
	myfile << yellow_player_score<< endl;
	myfile.close();
}

// Function for name reading in the file "Names.txt"
void name_reading()
{
	ifstream myfile;
	myfile.open("Names.txt");
	for( ; getline(myfile, line) ; )
	{
		cout << line << endl;
	}
	myfile.close();
}

// Function for creating blue dice
void blue_dice()
{
        if (num_1==1)
        {
        DrawSquare( 0 , 530 ,60,colors[WHITE]);
        DrawCircle( 25,560,5,colors[BLUE]);
        }
        else
        if (num_1==2)
        {
        DrawSquare( 0 , 530 ,60,colors[WHITE]);
        DrawCircle( 12,560,5,colors[BLUE]);
        DrawCircle( 35,560,5,colors[BLUE]);       
         }
        else
        if (num_1==3)
        {
        DrawSquare( 0 , 530 ,60,colors[WHITE]);
        DrawCircle( 12,550,5,colors[BLUE]);
        DrawCircle( 35,550,5,colors[BLUE]);
        DrawCircle( 24,565,5,colors[BLUE]);
        }
        else
        if (num_1==4)
        {
        DrawSquare( 0 , 530 ,60,colors[WHITE]);
        DrawCircle( 12,550,5,colors[BLUE]);
        DrawCircle( 35,550,5,colors[BLUE]);
        DrawCircle( 12,565,5,colors[BLUE]);
        DrawCircle( 35,565,5,colors[BLUE]);
        }
        else
        if (num_1==5)
        {
        DrawSquare( 0 , 530 ,60,colors[WHITE]);
        DrawCircle( 12,550,5,colors[BLUE]);
        DrawCircle( 38,550,5,colors[BLUE]);
        DrawCircle( 12,565,5,colors[BLUE]);
        DrawCircle( 38,565,5,colors[BLUE]);
        DrawCircle( 25,560,5,colors[BLUE]);
        }
        else
        if (num_1==6)
        {
        DrawSquare( 0 , 530 ,60,colors[WHITE]);
        DrawCircle( 15 , 555 ,5,colors[BLUE]);
        DrawCircle( 41, 555 ,5,colors[BLUE]);
        DrawCircle( 15, 572 ,5,colors[BLUE]);
        DrawCircle( 41,572,5,colors[BLUE]);
        DrawCircle( 28,555,5,colors[BLUE]);
        DrawCircle( 28,572,5,colors[BLUE]);

        }
}

// Function for creating red dice
void red_dice()
{
        if (num_2==1)
        {
        DrawSquare( 0 , 370 ,60,colors[WHITE]);
        DrawCircle( 25,400,5,colors[RED]);
        }
        else
        if (num_2==2)
        {
        DrawSquare( 0 , 370 ,60,colors[WHITE]);
        DrawCircle( 12,400,5,colors[RED]);
        DrawCircle( 35,400,5,colors[RED]);       
         }
        else
        if (num_2==3)
        {
        DrawSquare( 0 , 370 ,60,colors[WHITE]);
        DrawCircle( 12,390,5,colors[RED]);
        DrawCircle( 35,390,5,colors[RED]);
        DrawCircle( 24,405,5,colors[RED]);
        }
        else
        if (num_2==4)
        {
        DrawSquare( 0 , 370 ,60,colors[WHITE]);
        DrawCircle( 12,390,5,colors[RED]);
        DrawCircle( 35,390,5,colors[RED]);
        DrawCircle( 12,405,5,colors[RED]);
        DrawCircle( 35,405,5,colors[RED]);
        }
        else
        if (num_2==5)
        {
        DrawSquare( 0 , 370 ,60,colors[WHITE]);
        DrawCircle( 12,390,5,colors[RED]);
        DrawCircle( 38,390,5,colors[RED]);
        DrawCircle( 12,405,5,colors[RED]);
        DrawCircle( 38,405,5,colors[RED]);
        DrawCircle( 25,400,5,colors[RED]);
        }
        else
        if (num_2==6)
        {
        DrawSquare( 0 , 370 ,60,colors[WHITE]);
        DrawCircle( 15 , 395 ,5,colors[RED]);
        DrawCircle( 41, 395 ,5,colors[RED]);
        DrawCircle( 15, 412 ,5,colors[RED]);
        DrawCircle( 41,412,5,colors[RED]);
        DrawCircle( 28,395,5,colors[RED]);
        DrawCircle( 28,412,5,colors[RED]);

        }
}


// Function for creating green dice
void green_dice()
{
        if (num_3==1)
        {
        DrawSquare( 0 , 210 ,60,colors[WHITE]);
        DrawCircle( 25,240,5,colors[GREEN]);
        }
        else
        if (num_3==2)
        {
        DrawSquare( 0 , 210 ,60,colors[WHITE]);
        DrawCircle( 12,240,5,colors[GREEN]);
        DrawCircle( 35,240,5,colors[GREEN]);       
         }
        else
        if (num_3==3)
        {
        DrawSquare( 0 , 210 ,60,colors[WHITE]);
        DrawCircle( 12,230,5,colors[GREEN]);
        DrawCircle( 35,230,5,colors[GREEN]);
        DrawCircle( 24,245,5,colors[GREEN]);
        }
        else
        if (num_3==4)
        {
        DrawSquare( 0 , 210 ,60,colors[WHITE]);
        DrawCircle( 12,230,5,colors[GREEN]);
        DrawCircle( 35,230,5,colors[GREEN]);
        DrawCircle( 12,245,5,colors[GREEN]);
        DrawCircle( 35,245,5,colors[GREEN]);
        }
        else
        if (num_3==5)
        {
        DrawSquare( 0 , 210 ,60,colors[WHITE]);
        DrawCircle( 12,230,5,colors[GREEN]);
        DrawCircle( 38,230,5,colors[GREEN]);
        DrawCircle( 12,245,5,colors[GREEN]);
        DrawCircle( 38,245,5,colors[GREEN]);
        DrawCircle( 25,240,5,colors[GREEN]);
        }
        else
        if (num_3==6)
        {
        DrawSquare( 0 , 210 ,60,colors[WHITE]);
        DrawCircle( 15 , 235 ,5,colors[GREEN]);
        DrawCircle( 41, 235 ,5,colors[GREEN]);
        DrawCircle( 15, 252 ,5,colors[GREEN]);
        DrawCircle( 41,252,5,colors[GREEN]);
        DrawCircle( 28,235,5,colors[GREEN]);
        DrawCircle( 28,252,5,colors[GREEN]);
        }
    
}


// Function for creating yellow dice
void yellow_dice()
{
        if (num_4==1)
        {
        DrawSquare( 0 , 50 ,60,colors[WHITE]);
        DrawCircle( 25,80,5,colors[YELLOW]);
        }
        else
        if (num_4==2)
        {
        DrawSquare( 0 , 50 ,60,colors[WHITE]);
        DrawCircle( 12,80,5,colors[YELLOW]);
        DrawCircle( 35,80,5,colors[YELLOW]);       
         }
        else
        if (num_4==3)
        {
        DrawSquare( 0 , 50 ,60,colors[WHITE]);
        DrawCircle( 12,70,5,colors[YELLOW]);
        DrawCircle( 35,70,5,colors[YELLOW]);
        DrawCircle( 24,85,5,colors[YELLOW]);
        }
        else
        if (num_4==4)
        {
        DrawSquare( 0 , 50 ,60,colors[WHITE]);
        DrawCircle( 12,70,5,colors[YELLOW]);
        DrawCircle( 35,70,5,colors[YELLOW]);
        DrawCircle( 12,85,5,colors[YELLOW]);
        DrawCircle( 35,85,5,colors[YELLOW]);
        }
        else
        if (num_4==5)
        {
        DrawSquare( 0 , 50 ,60,colors[WHITE]);
        DrawCircle( 12,70,5,colors[YELLOW]);
        DrawCircle( 38,70,5,colors[YELLOW]);
        DrawCircle( 12,85,5,colors[YELLOW]);
        DrawCircle( 38,85,5,colors[YELLOW]);
        DrawCircle( 25,80,5,colors[YELLOW]);
        }
        else
        if (num_4==6)
        {
        DrawSquare( 0 , 50 ,60,colors[WHITE]);
        DrawCircle( 15 , 75 ,5,colors[YELLOW]);
        DrawCircle( 41, 75 ,5,colors[YELLOW]);
        DrawCircle( 15, 92 ,5,colors[YELLOW]);
        DrawCircle( 41,92,5,colors[YELLOW]);
        DrawCircle( 28,75,5,colors[YELLOW]);
        DrawCircle( 28,92,5,colors[YELLOW]);
        }
}



/*
 * Main Canvas drawing function.
 * */
//Board *b;
void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	// creating menu of the ludo game
	if(game_menu==0)
	{
		DrawString( 300, 700, "Press P for play the game", colors[MISTY_ROSE]);
		DrawString( 300, 600, "Press I for instructions", colors[MISTY_ROSE]);
		DrawString( 300, 500, "Press S for scores of players", colors[MISTY_ROSE]);
		DrawString( 300, 400, "Press H for help", colors[MISTY_ROSE]);
		DrawString( 300, 300, "You are supposed to read the instructions of game first, so Press I", colors[MISTY_ROSE]);
		DrawString( 300, 200, "You don't know how to play this game", colors[MISTY_ROSE]);
		DrawString( 300, 100, "Game manual is explained in the instruction and help menu", colors[MISTY_ROSE]);
		
	}
	if(game_menu==2)
	{
		DrawString( 300, 700, "USE 1,2,3,4 key for moving the pieces of blue player ", colors[MISTY_ROSE]);
		DrawString( 300, 600, "USE 5,6,7,8 key for moving the pieces of red player ", colors[MISTY_ROSE]);
		DrawString( 300, 500, "USE z,x,c,v key for moving the pieces of green player ", colors[MISTY_ROSE]);
		DrawString( 300, 400, "USE q,w,e,r key for moving the pieces of yellow player ", colors[MISTY_ROSE]);
		DrawString( 300, 300, "USE space bar for blue player turn ", colors[MISTY_ROSE]);
		DrawString( 300, 250, "USE b for red player turn ", colors[MISTY_ROSE]);
		DrawString( 300, 200, "USE g for green player turn ", colors[MISTY_ROSE]);
		DrawString( 300, 150, "USE y for yellow player turn ", colors[MISTY_ROSE]);
	}
	if(game_menu==3)
	{
		DrawString( 200, 700, "Blue player Score= " + std::to_string(blue_player_score), colors[MISTY_ROSE]); // for blue player
		DrawString( 200, 600, "Red player Score= " + std::to_string(red_player_score), colors[MISTY_ROSE]); // for red player
		DrawString( 200, 500, "Green player Score= " + std::to_string(green_player_score), colors[MISTY_ROSE]); // for green player
		DrawString( 200, 400, "Yellow player Score= " + std::to_string(yellow_player_score), colors[MISTY_ROSE]); // for yellow player
	}
	if(game_menu==4)
	{
		DrawString( 0, 700, "Untill you can not press the initalizing key of pieces of every player the arrow keys do not work properly.", colors[MISTY_ROSE]);
		DrawString( 200, 600, "you are supposed to press the initalizing keys first to move the pieces", colors[MISTY_ROSE]);
	}
	// Drawing board of ludo game
	if(game_menu==1)
	{
		// for the turn of every player
		DrawString( 0, 600, "Blue player turn", colors[MISTY_ROSE]);
		DrawString( 0, 450, "Red player turn", colors[MISTY_ROSE]);
		DrawString( 0, 300, "Green player turn", colors[MISTY_ROSE]);
		DrawString( 0, 150, "Yellow player turn", colors[MISTY_ROSE]);
		// For dice rolling
		if(space_bar==2)
		{
			blue_dice();
		}
		if(space_bar==3)
		{
			red_dice();
		}
		if(space_bar==4)
		{
			green_dice();
		}
		if(space_bar==5)
		{
			yellow_dice();
		}
		
		for(int i=0; i<4; i++)
		{
			if(i==0)
			{
				board_x_axis=250;
				board_y_axis=0;
				scolor=colors[BLUE];
			}
			if(i==1)
			{
				board_x_axis=250;
				board_y_axis=450;
				scolor=colors[RED];
			}
			if(i==2)
			{
				board_x_axis=700;
				board_y_axis=450;
				scolor=colors[GREEN];
			}
			if(i==3)
			{
				board_x_axis=700;
				board_y_axis=0;
				scolor=colors[YELLOW];
			}
			DrawSquare( board_x_axis , board_y_axis ,300, scolor); // outer square
			DrawSquare( board_x_axis+40 , board_y_axis+40 ,220,colors[MISTY_ROSE]); // inner white square
			DrawCircle( board_x_axis+80 , board_y_axis+80 ,30, scolor); // inner circles
			DrawCircle( board_x_axis+80 , board_y_axis+220 ,30, scolor);
			DrawCircle( board_x_axis+220 , board_y_axis+80 ,30, scolor);
			DrawCircle( board_x_axis+220 , board_y_axis+220 ,30, scolor);
		}
		
	
	
		// Drawing boxes of blue and yellow player
		int x_axis=550;
		int y_axis=0;
		scolor=colors[WHITE];
		for(int i=0; i<3; i++)
		{
			y_axis=0;
			for(int j=0; j<6; j++)
			{
				if(i==0 && j==1)
				{
					scolor=colors[BLUE];
				}
				else
				{
					scolor=colors[WHITE];
				}
				if(i==1 && j>=1)
				{
					scolor=colors[BLUE];
				}
				if(i==2 && j==2)
				{
					scolor=colors[SLATE_GRAY];
				}
				DrawSquare( x_axis , y_axis ,50,scolor);
				y_axis+=50;
			}
		x_axis+=50;
		}
		
		// For drawing boxes of red and green
		x_axis=550;
		y_axis=450;
		scolor=colors[WHITE];
		for(int i=0; i<3; i++)
		{
			y_axis=450;
			for(int j=0; j<6; j++)
			{
				if(i==0 && j==3)
				{
					scolor=colors[SLATE_GRAY];
				}
				else
				{
					scolor=colors[WHITE];
				}
				if(i==1 && j<=4)
				{
					scolor=colors[GREEN];
				}
				if(i==2 && j==4)
				{
					scolor=colors[GREEN];
				}
				DrawSquare( x_axis , y_axis ,50,scolor);
				y_axis+=50;
			}
		x_axis+=50;
		}
		
		// For drawing boxes of red and blue
		x_axis=250;
		y_axis=300;
		scolor=colors[WHITE];
		for(int i=0; i<3; i++)
		{
			x_axis=250;
			for(int j=0; j<6; j++)
			{
				if(i==0 && j==2)
				{
					scolor=colors[SLATE_GRAY];
				}
				else
				{
					scolor=colors[WHITE];
				}
				if(i==1 && j>=1)
				{
					scolor=colors[RED];
				}
				if(i==2 && j==1)
				{
					scolor=colors[RED];
				}
				DrawSquare( x_axis , y_axis ,50,scolor);
				x_axis+=50;
			}
		y_axis+=50;
		}
		
		// For drawing boxes of yellow and green
		x_axis=700;
		y_axis=300;
		scolor=colors[WHITE];
		for(int i=0; i<3; i++)
		{
			x_axis=700;
			for(int j=0; j<6; j++)
			{
				if(i==0 && j==4)
				{
					scolor=colors[YELLOW];
				}
				else
				{
					scolor=colors[WHITE];
				}
				if(i==1 && j<=4)
				{
					scolor=colors[YELLOW];
				}
				if(i==2 && j==3)
				{
					scolor=colors[SLATE_GRAY];
				}
				DrawSquare( x_axis , y_axis ,50,scolor);
				x_axis+=50;
			}	
		y_axis+=50;
		}
		// Drawing pieces of blue player on starting point 
		DrawCircle( blue_1_x_axis, blue_1_y_axis, 15, colors[DARK_BLUE]);
		DrawCircle( blue_2_x_axis, blue_2_y_axis, 15, colors[DARK_BLUE]);
		DrawCircle( blue_3_x_axis, blue_3_y_axis, 15, colors[DARK_BLUE]);
		DrawCircle( blue_4_x_axis, blue_4_y_axis, 15, colors[DARK_BLUE]);
		
		// storing the x and y axis of blue player in the repositioning variables
		rep_blue_1_x=blue_1_x_axis; // storing x axis of first piece in the repositioning varibale
		rep_blue_2_x=blue_2_x_axis; // storing x axis of second piece in the repositioning varibale
		rep_blue_3_x=blue_3_x_axis; // storing x axis of third piece in the repositioning varibale
		rep_blue_4_x=blue_4_x_axis; // storing x axis of fourth piece in the repositioning varibale
		rep_blue_1_y=blue_1_y_axis; // storing y axis of first piece in the repositioning varibale
		rep_blue_2_y=blue_2_y_axis; // storing y axis of second piece in the repositioning varibale
		rep_blue_3_y=blue_3_y_axis; // storing y axis of third piece in the repositioning varibale
		rep_blue_4_y=blue_4_y_axis; // storing y axis of fourth piece in the repositioning varibale
		
		// drawing the pieces of red player on starting point
		DrawCircle( red_1_x_axis, red_1_y_axis, 15, colors[DARK_RED]);
		DrawCircle( red_2_x_axis, red_2_y_axis, 15, colors[DARK_RED]);
		DrawCircle( red_3_x_axis, red_3_y_axis, 15, colors[DARK_RED]);
		DrawCircle( red_4_x_axis, red_4_y_axis, 15, colors[DARK_RED]);
		// storing the x and y axis of red player in the repositioning variables
		rep_red_1_x=red_1_x_axis; // storing x axis of first piece in the repositioning varibale
		rep_red_2_x=red_2_x_axis; // storing x axis of second piece in the repositioning varibale
		rep_red_3_x=red_3_x_axis; // storing x axis of third piece in the repositioning varibale
		rep_red_4_x=red_4_x_axis; // storing x axis of fourth piece in the repositioning varibale
		rep_red_1_y=red_1_y_axis; // storing y axis of first piece in the repositioning varibale
		rep_red_2_y=red_2_y_axis; // storing y axis of second piece in the repositioning varibale
		rep_red_3_y=red_3_y_axis; // storing y axis of third piece in the repositioning varibale
		rep_red_4_y=red_4_y_axis; // storing y axis of fourth piece in the repositioning varibale
		
		// drawing the pieces of yellow player on starting point
		DrawCircle( yellow_1_x_axis, yellow_1_y_axis, 15, colors[YELLOW_GREEN]);
		DrawCircle( yellow_2_x_axis, yellow_2_y_axis, 15, colors[YELLOW_GREEN]);
		DrawCircle( yellow_3_x_axis, yellow_3_y_axis, 15, colors[YELLOW_GREEN]);
		DrawCircle( yellow_4_x_axis, yellow_4_y_axis, 15, colors[YELLOW_GREEN]);
		// storing the x and y axis of yellow player in the repositioning variables
		rep_yellow_1_x=yellow_1_x_axis; // storing x axis of first piece in the repositioning varibale
		rep_yellow_2_x=yellow_2_x_axis; // storing x axis of second piece in the repositioning varibale
		rep_yellow_3_x=yellow_3_x_axis; // storing x axis of third piece in the repositioning varibale
		rep_yellow_4_x=yellow_4_x_axis; // storing x axis of fourth piece in the repositioning varibale
		rep_yellow_1_y=yellow_1_y_axis; // storing y axis of first piece in the repositioning varibale
		rep_yellow_2_y=yellow_2_y_axis; // storing y axis of second piece in the repositioning varibale
		rep_yellow_3_y=yellow_3_y_axis; // storing y axis of third piece in the repositioning varibale
		rep_yellow_4_y=yellow_4_y_axis; // storing y axis of fourth piece in the repositioning varibale
		
		//drawing the pieces of green player on starting point
		DrawCircle( green_1_x_axis, green_1_y_axis, 15, colors[FOREST_GREEN]);
		DrawCircle( green_2_x_axis, green_2_y_axis, 15, colors[FOREST_GREEN]);
		DrawCircle( green_3_x_axis, green_3_y_axis, 15, colors[FOREST_GREEN]);
		DrawCircle( green_4_x_axis, green_4_y_axis, 15, colors[FOREST_GREEN]);
		// storing the x and y axis of green player in the repositioning variables
		rep_green_1_x=green_1_x_axis; // storing x axis of first piece in the repositioning varibale
		rep_green_2_x=green_2_x_axis; // storing x axis of second piece in the repositioning varibale
		rep_green_3_x=green_3_x_axis; // storing x axis of third piece in the repositioning varibale
		rep_green_4_x=green_4_x_axis; // storing x axis of fourth piece in the repositioning varibale
		rep_green_1_y=green_1_y_axis; // storing y axis of first piece in the repositioning varibale
		rep_green_2_y=green_2_y_axis; // storing y axis of second piece in the repositioning varibale
		rep_green_3_y=green_3_y_axis; // storing y axis of third piece in the repositioning varibale
		rep_green_4_y=green_4_y_axis; // storing y axis of fourth piece in the repositioning varibale
		// For displaying scores of every player on the top of window
		DrawString( 20, 800, "Blue player Score= " + std::to_string(blue_player_score), colors[MISTY_ROSE]); // for blue player
		DrawString( 260, 800, "Red player Score= " + std::to_string(red_player_score), colors[MISTY_ROSE]); // for red player
		DrawString( 480, 800, "Green player Score= " + std::to_string(green_player_score), colors[MISTY_ROSE]); // for green player
		DrawString( 740, 800, "Yellow player Score= " + std::to_string(yellow_player_score), colors[MISTY_ROSE]); // for yellow player
		// Check points for the pieces of blue player for increment in the scores
		if(blue_1_x_axis>600 && blue_1_x_axis<650 && blue_1_y_axis==80)
		{
			blue_player_score+=15;
		}
		if(blue_2_x_axis>600 && blue_2_x_axis<650 && blue_2_y_axis>50 && blue_2_y_axis<100)
		{
			blue_player_score+=15;
		}
		if(blue_3_x_axis>600 && blue_3_x_axis<650 && blue_3_y_axis>50 && blue_3_y_axis<100)
		{
			blue_player_score+=15;
		}
		if(blue_4_x_axis>600 && blue_4_x_axis<650 && blue_4_y_axis>50 && blue_4_y_axis<100)
		{
			blue_player_score+=15;
		}
		
		// Check points for the pieces of red player for increment in the scores
		if(red_1_x_axis>300 && red_1_x_axis<350 && red_1_y_axis>350 && red_1_y_axis<400)
		{
			red_player_score+=15;
		}
		if(red_2_x_axis>300 && red_2_x_axis<350 && red_2_y_axis>350 && red_2_y_axis<400)
		{
			red_player_score+=15;
		}
		if(red_3_x_axis>300 && red_3_x_axis<350 && red_3_y_axis>350 && red_3_y_axis<400)
		{
			red_player_score+=15;
		}
		if(red_4_x_axis>300 && red_4_x_axis<350 && red_4_y_axis>350 && red_4_y_axis<400)
		{
			red_player_score+=15;
		}
		
		// Check points for the pieces of green player for increment in the scores
		if(green_1_x_axis>600 && green_1_x_axis<650 && green_1_y_axis>650 && green_1_y_axis<700)
		{
			green_player_score+=15;
		}
		if(green_2_x_axis>600 && green_2_x_axis<650 && green_2_y_axis>650 && green_2_y_axis<700)
		{
			green_player_score+=15;
		}
		if(green_3_x_axis>600 && green_3_x_axis<650 && green_3_y_axis>650 && green_3_y_axis<700)
		{
			green_player_score+=15;
		}
		if(green_4_x_axis>600 && green_4_x_axis<650 && green_4_y_axis>650 && green_4_y_axis<700)
		{
			green_player_score+=15;
		}
		
		// Check points for the pieces of yellow player for increment in the scores
		if(yellow_1_x_axis>900 && yellow_1_x_axis<950 && yellow_1_y_axis>350 && yellow_1_y_axis<400)
		{
			yellow_player_score+=15;
		}
		if(yellow_2_x_axis>900 && yellow_2_x_axis<950 && yellow_2_y_axis>350 && yellow_2_y_axis<400)
		{
			yellow_player_score+=15;
		}
		if(yellow_3_x_axis>900 && yellow_3_x_axis<950 && yellow_3_y_axis>350 && yellow_3_y_axis<400)
		{
			yellow_player_score+=15;
		}
		if(yellow_4_x_axis>900 && yellow_4_x_axis<950 && yellow_4_y_axis>350 && yellow_4_y_axis<400)
		{
			yellow_player_score+=15;
		}
		
		// Check points for the wining of blue player
		if(blue_1_x_axis>600 && blue_1_x_axis<650 && blue_2_x_axis>600 && blue_2_x_axis<650 && blue_3_x_axis>600 && blue_3_x_axis<650 && blue_4_x_axis>600 && blue_4_x_axis<650 && blue_1_y_axis>300 && blue_1_y_axis<350 && blue_2_y_axis>300 && blue_2_y_axis<350 && blue_3_y_axis>300 && blue_3_y_axis<350 && blue_4_y_axis>300 && blue_4_y_axis<350)
		{
			DrawString( 0, 760, "blue win", colors[DARK_BLUE]);
		}
		
		// Check points for the wining of red player
		if(red_1_x_axis>550 && red_1_x_axis<600 && red_2_x_axis>550 && red_2_x_axis<600 && red_3_x_axis>550 && red_3_x_axis<600 && red_4_x_axis>550 && red_4_x_axis<600 && red_1_y_axis>350 && red_1_y_axis<400 && red_2_y_axis>350 && red_2_y_axis<400 && red_3_y_axis>350 && red_3_y_axis<400 && red_4_y_axis>350 && red_4_y_axis<400)
		{
			DrawString( 0, 720, "Red win", colors[DARK_RED]);
		}
		
		// Check points for the wining of green player
		if(green_1_x_axis>600 && green_1_x_axis<650 && green_2_x_axis>600 && green_2_x_axis<650 && green_3_x_axis>600 && green_3_x_axis<650 && green_4_x_axis>600 && green_4_x_axis<650 && green_1_y_axis>400 && green_1_y_axis<450 && green_2_y_axis>400 && green_2_y_axis<450 && green_3_y_axis>400 && green_3_y_axis<450 && green_4_y_axis>400 && green_4_y_axis<450)
		{
			DrawString( 0, 680, "green win", colors[DARK_GREEN]);
		}
		
		// Check points for the wining of yellow player
		if(yellow_1_x_axis>650 && yellow_1_x_axis<700 && yellow_2_x_axis>650 && yellow_2_x_axis<700 && yellow_3_x_axis>650 && yellow_3_x_axis<700 && yellow_4_x_axis>650 && yellow_4_x_axis<700 && yellow_1_y_axis>350 && yellow_1_y_axis<400 && yellow_2_y_axis>350 && yellow_2_y_axis<400 && yellow_3_y_axis>350 && yellow_3_y_axis<400 && yellow_4_y_axis>350 && yellow_4_y_axis<400)
		{
			DrawString( 0, 640, "yellow win", colors[YELLOW]);
		}
		
	}
	//DrawSquare( 650 , 0 ,50,colors[GREEN]); 330,80
	
	
	 
	//DrawSquare( 700 , 0 ,300,colors[GREEN]); 
	
	
	//Fire Gun
	//DrawSquare( 400 , 20 ,40,colors[RED]); 
	//Mushroom
	//DrawSquare( 250 , 250 ,20,colors[GREEN]); 
	//Display Score
	
	//Spider
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	//DrawCircle(50,670,10,colors[RED]);
	//DrawCircle(70,670,10,colors[RED]);
	//DrawCircle(90,670,10,colors[RED]);

	glutSwapBuffers(); // do not modify this line..

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */
 


void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
			// for the movement of first piece of blue player
			if(blue_1_piece==1)
			{
				blue_1_x_axis-=50;
				// keeping the other pieces on their same place
				blue_2_x_axis=rep_blue_2_x;
				blue_3_x_axis=rep_blue_3_x;
				blue_4_x_axis=rep_blue_4_x;
				blue_player_score++;
			}
			blue_1_piece=0;
			// for the movement of second piece of blue player
			if(blue_2_piece==1)
			{
				blue_2_x_axis-=50;
				// keeping the other pieces on their same place
				blue_1_x_axis=rep_blue_1_x;
				blue_3_x_axis=rep_blue_3_x;
				blue_4_x_axis=rep_blue_4_x;
				blue_player_score++;
			}
			blue_2_piece=0;
			// for the movement of third piece of blue player
			if(blue_3_piece==1)
			{
				blue_3_x_axis-=50;
				// keeping the other pieces on their same place
				blue_2_x_axis=rep_blue_2_x;
				blue_1_x_axis=rep_blue_1_x;
				blue_4_x_axis=rep_blue_4_x;
				blue_player_score++;
			}
			blue_3_piece=0;
			// for the movement of fourth piece of blue player
			if(blue_4_piece==1)
			{
				blue_4_x_axis-=50;
				// keeping the other pieces on their same place
				blue_2_x_axis=rep_blue_2_x;
				blue_3_x_axis=rep_blue_3_x;
				blue_1_x_axis=rep_blue_1_x;
				blue_player_score++;
			}
			blue_4_piece=0;
			
			// for the movement of first piece of red player
			if(red_1_piece==1)
			{
				red_1_x_axis-=50;
				// keeping the other pieces on their same place
				red_2_x_axis=rep_red_2_x;
				red_3_x_axis=rep_red_3_x;
				red_4_x_axis=rep_red_4_x;
				red_player_score++;
			}
			red_1_piece=0;
			// for the movement of second piece of red player
			if(red_2_piece==1)
			{
				red_2_x_axis-=50;
				// keeping the other pieces on their same place
				red_1_x_axis=rep_red_1_x;
				red_3_x_axis=rep_red_3_x;
				red_4_x_axis=rep_red_4_x;
				red_player_score++;
			}
			red_2_piece=0;
			// for the movement of third piece of red player
			if(red_3_piece==1)
			{
				red_3_x_axis-=50;
				// keeping the other pieces on their same place
				red_2_x_axis=rep_red_2_x;
				red_1_x_axis=rep_red_1_x;
				red_4_x_axis=rep_red_4_x;
				red_player_score++;
			}
			red_3_piece=0;
			// for the movement of fourth piece of red player
			if(red_4_piece==1)
			{
				red_4_x_axis-=50;
				// keeping the other pieces on their same place
				red_2_x_axis=rep_red_2_x;
				red_3_x_axis=rep_red_3_x;
				red_1_x_axis=rep_red_1_x;
				red_player_score++;
			}
			red_4_piece=0;
			
			// for the movement of first piece of yellow player
			if(yellow_1_piece==1)
			{
				yellow_1_x_axis-=50;
				// keeping the other pieces on their same place
				yellow_2_x_axis=rep_yellow_2_x;
				yellow_3_x_axis=rep_yellow_3_x;
				yellow_4_x_axis=rep_yellow_4_x;
				yellow_player_score++;
			}
			yellow_1_piece=0;
			// for the movement of second piece of yellow player
			if(yellow_2_piece==1)
			{
				yellow_2_x_axis-=50;
				// keeping the other pieces on their same place
				yellow_1_x_axis=rep_yellow_1_x;
				yellow_3_x_axis=rep_yellow_3_x;
				yellow_4_x_axis=rep_yellow_4_x;
				yellow_player_score++;
			}
			yellow_2_piece=0;
			// for the movement of third piece of yellow player
			if(yellow_3_piece==1)
			{
				yellow_3_x_axis-=50;
				// keeping the other pieces on their same place
				yellow_2_x_axis=rep_yellow_2_x;
				yellow_1_x_axis=rep_yellow_1_x;
				yellow_4_x_axis=rep_yellow_4_x;
				yellow_player_score++;
			}
			yellow_3_piece=0;
			// for the movement of fourth piece of yellow player
			if(yellow_4_piece==1)
			{
				yellow_4_x_axis-=50;
				// keeping the other pieces on their same place
				yellow_2_x_axis=rep_yellow_2_x;
				yellow_3_x_axis=rep_yellow_3_x;
				yellow_1_x_axis=rep_yellow_1_x;
				yellow_player_score++;
			}
			yellow_4_piece=0;
			
			// for the movement of first piece of green player
			if(green_1_piece==1)
			{
				green_1_x_axis-=50;
				// keeping the other pieces on their same place
				green_2_x_axis=rep_green_2_x;
				green_3_x_axis=rep_green_3_x;
				green_4_x_axis=rep_green_4_x;
				green_player_score++;
			}
			green_1_piece=0;
			// for the movement of second piece of green player
			if(green_2_piece==1)
			{
				green_2_x_axis-=50;
				// keeping the other pieces on their same place
				green_1_x_axis=rep_green_1_x;
				green_3_x_axis=rep_green_3_x;
				green_4_x_axis=rep_green_4_x;
				green_player_score++;
			}
			green_2_piece=0;
			// for the movement of third piece of green player
			if(green_3_piece==1)
			{
				green_3_x_axis-=50;
				// keeping the other pieces on their same place
				green_2_x_axis=rep_green_2_x;
				green_1_x_axis=rep_green_1_x;
				green_4_x_axis=rep_green_4_x;
				green_player_score++;
			}
			green_3_piece=0;
			// for the movement of fourth piece of green player
			if(green_4_piece==1)
			{
				green_4_x_axis-=50;
				// keeping the other pieces on their same place
				green_2_x_axis=rep_green_2_x;
				green_3_x_axis=rep_green_3_x;
				green_1_x_axis=rep_green_1_x;
				green_player_score++;
			}
			green_4_piece=0;
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
			// for the movement of first piece of blue player
			if(blue_1_piece==1)
			{
				blue_1_x_axis+=50;
				// keeping the other pieces on their same place
				blue_2_x_axis=rep_blue_2_x;
				blue_3_x_axis=rep_blue_3_x;
				blue_4_x_axis=rep_blue_4_x;
				blue_player_score++;
			}
			blue_1_piece=0;
			// for the movement of second piece of blue player
			if(blue_2_piece==1)
			{
				blue_2_x_axis+=50;
				// keeping the other pieces on their same place
				blue_1_x_axis=rep_blue_1_x;
				blue_3_x_axis=rep_blue_3_x;
				blue_4_x_axis=rep_blue_4_x;
				blue_player_score++;
			}
			blue_2_piece=0;
			// for the movement of third piece of blue player
			if(blue_3_piece==1)
			{
				blue_3_x_axis+=50;
				// keeping the other pieces on their same place
				blue_2_x_axis=rep_blue_2_x;
				blue_1_x_axis=rep_blue_1_x;
				blue_4_x_axis=rep_blue_4_x;
				blue_player_score++;
			}
			blue_3_piece=0;
			// for the movement of fourth piece of blue player
			if(blue_4_piece==1)
			{
				blue_4_x_axis+=50;
				// keeping the other pieces on their same place
				blue_2_x_axis=rep_blue_2_x;
				blue_3_x_axis=rep_blue_3_x;
				blue_1_x_axis=rep_blue_1_x;
				blue_player_score++;
			}
			blue_4_piece=0;
			
			// for the movement of first piece of red player
			if(red_1_piece==1)
			{
				red_1_x_axis+=50;
				// keeping the other pieces on their same place
				red_2_x_axis=rep_red_2_x;
				red_3_x_axis=rep_red_3_x;
				red_4_x_axis=rep_red_4_x;
				red_player_score++;
			}
			red_1_piece=0;
			// for the movement of second piece of red player
			if(red_2_piece==1)
			{
				red_2_x_axis+=50;
				// keeping the other pieces on their same place
				red_1_x_axis=rep_red_1_x;
				red_3_x_axis=rep_red_3_x;
				red_4_x_axis=rep_red_4_x;
				red_player_score++;
			}
			red_2_piece=0;
			// for the movement of third piece of red player
			if(red_3_piece==1)
			{
				red_3_x_axis+=50;
				// keeping the other pieces on their same place
				red_2_x_axis=rep_red_2_x;
				red_1_x_axis=rep_red_1_x;
				red_4_x_axis=rep_red_4_x;
				red_player_score++;
			}
			red_3_piece=0;
			// for the movement of fourth piece of red player
			if(red_4_piece==1)
			{
				red_4_x_axis+=50;
				// keeping the other pieces on their same place
				red_2_x_axis=rep_red_2_x;
				red_3_x_axis=rep_red_3_x;
				red_1_x_axis=rep_red_1_x;
				red_player_score++;
			}
			red_4_piece=0;
			
			// for the movement of first piece of yellow player
			if(yellow_1_piece==1)
			{
				yellow_1_x_axis+=50;
				// keeping the other pieces on their same place
				yellow_2_x_axis=rep_yellow_2_x;
				yellow_3_x_axis=rep_yellow_3_x;
				yellow_4_x_axis=rep_yellow_4_x;
				yellow_player_score++;
			}
			yellow_1_piece=0;
			// for the movement of second piece of yellow player
			if(yellow_2_piece==1)
			{
				yellow_2_x_axis+=50;
				// keeping the other pieces on their same place
				yellow_1_x_axis=rep_yellow_1_x;
				yellow_3_x_axis=rep_yellow_3_x;
				yellow_4_x_axis=rep_yellow_4_x;
				yellow_player_score++;
			}
			yellow_2_piece=0;
			// for the movement of third piece of yellow player
			if(yellow_3_piece==1)
			{
				yellow_3_x_axis+=50;
				// keeping the other pieces on their same place
				yellow_2_x_axis=rep_yellow_2_x;
				yellow_1_x_axis=rep_yellow_1_x;
				yellow_4_x_axis=rep_yellow_4_x;
				yellow_player_score++;
			}
			yellow_3_piece=0;
			// for the movement of fourth piece of yellow player
			if(yellow_4_piece==1)
			{
				yellow_4_x_axis+=50;
				// keeping the other pieces on their same place
				yellow_2_x_axis=rep_yellow_2_x;
				yellow_3_x_axis=rep_yellow_3_x;
				yellow_1_x_axis=rep_yellow_1_x;
				yellow_player_score++;
			}
			yellow_4_piece=0;
			
			// for the movement of first piece of green player
			if(green_1_piece==1)
			{
				green_1_x_axis+=50;
				// keeping the other pieces on their same place
				green_2_x_axis=rep_green_2_x;
				green_3_x_axis=rep_green_3_x;
				green_4_x_axis=rep_green_4_x;
				green_player_score++;
			}
			green_1_piece=0;
			// for the movement of second piece of green player
			if(green_2_piece==1)
			{
				green_2_x_axis+=50;
				// keeping the other pieces on their same place
				green_1_x_axis=rep_green_1_x;
				green_3_x_axis=rep_green_3_x;
				green_4_x_axis=rep_green_4_x;
				green_player_score++;
			}
			green_2_piece=0;
			// for the movement of third piece of green player
			if(green_3_piece==1)
			{
				green_3_x_axis+=50;
				// keeping the other pieces on their same place
				green_2_x_axis=rep_green_2_x;
				green_1_x_axis=rep_green_1_x;
				green_4_x_axis=rep_green_4_x;
				green_player_score++;
			}
			green_3_piece=0;
			// for the movement of fourth piece of green player
			if(green_4_piece==1)
			{
				green_4_x_axis+=50;
				// keeping the other pieces on their same place
				green_2_x_axis=rep_green_2_x;
				green_3_x_axis=rep_green_3_x;
				green_1_x_axis=rep_green_1_x;
				green_player_score++;
			}
			green_4_piece=0;

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
			// for the movement of first piece of blue player
			if(blue_1_piece==1)
			{
				blue_1_y_axis+=50;
				// keeping the other pieces on their same place
				blue_2_y_axis=rep_blue_2_y;
				blue_3_y_axis=rep_blue_3_y;
				blue_4_y_axis=rep_blue_4_y;
				blue_player_score++;
			}
			blue_1_piece=0;
			// for the movement of second piece of blue player
			if(blue_2_piece==1)
			{
				blue_2_y_axis+=50;
				// keeping the other pieces on their same place
				blue_1_y_axis=rep_blue_1_y;
				blue_3_y_axis=rep_blue_3_y;
				blue_4_y_axis=rep_blue_4_y;
				blue_player_score++;
			}
			blue_2_piece=0;
			// for the movement of third piece of blue player
			if(blue_3_piece==1)
			{
				blue_3_y_axis+=50;
				// keeping the other pieces on their same place
				blue_2_y_axis=rep_blue_2_y;
				blue_1_y_axis=rep_blue_1_y;
				blue_4_y_axis=rep_blue_4_y;
				blue_player_score++;
			}
			blue_3_piece=0;
			// for the movement of fourth piece of blue player
			if(blue_4_piece==1)
			{
				blue_4_y_axis+=50;
				// keeping the other pieces on their same place
				blue_2_y_axis=rep_blue_2_y;
				blue_3_y_axis=rep_blue_3_y;
				blue_1_y_axis=rep_blue_1_y;
				blue_player_score++;
			}
			blue_4_piece=0;
			
			// for the movement of first piece of red player
			if(red_1_piece==1)
			{
				red_1_y_axis+=50;
				// keeping the other pieces on their same place
				red_2_y_axis=rep_red_2_y;
				red_3_y_axis=rep_red_3_y;
				red_4_y_axis=rep_red_4_y;
				red_player_score++;
			}
			red_1_piece=0;
			// for the movement of second piece of red player
			if(red_2_piece==1)
			{
				red_2_y_axis+=50;
				// keeping the other pieces on their same place
				red_1_y_axis=rep_red_1_y;
				red_3_y_axis=rep_red_3_y;
				red_4_y_axis=rep_red_4_y;
				red_player_score++;
			}
			red_2_piece=0;
			// for the movement of third piece of red player
			if(red_3_piece==1)
			{
				red_3_y_axis+=50;
				// keeping the other pieces on their same place
				red_2_y_axis=rep_red_2_y;
				red_1_y_axis=rep_red_1_y;
				red_4_y_axis=rep_red_4_y;
				red_player_score++;
			}
			red_3_piece=0;
			// for the movement of fourth piece of red player
			if(red_4_piece==1)
			{
				red_4_y_axis+=50;
				// keeping the other pieces on their same place
				red_2_y_axis=rep_red_2_y;
				red_3_y_axis=rep_red_3_y;
				red_1_y_axis=rep_red_1_y;
				red_player_score++;
			}
			red_4_piece=0;
			
			// for the movement of first piece of yellow player
			if(yellow_1_piece==1)
			{
				yellow_1_y_axis+=50;
				// keeping the other pieces on their same place
				yellow_2_y_axis=rep_yellow_2_y;
				yellow_3_y_axis=rep_yellow_3_y;
				yellow_4_y_axis=rep_yellow_4_y;
				yellow_player_score++;
			}
			yellow_1_piece=0;
			// for the movement of second piece of yellow player
			if(yellow_2_piece==1)
			{
				yellow_2_y_axis+=50;
				// keeping the other pieces on their same place
				yellow_1_y_axis=rep_yellow_1_y;
				yellow_3_y_axis=rep_yellow_3_y;
				yellow_4_y_axis=rep_yellow_4_y;
				yellow_player_score++;
			}
			yellow_2_piece=0;
			// for the movement of third piece of yellow player
			if(yellow_3_piece==1)
			{
				yellow_3_y_axis+=50;
				// keeping the other pieces on their same place
				yellow_2_y_axis=rep_yellow_2_y;
				yellow_1_y_axis=rep_yellow_1_y;
				yellow_4_y_axis=rep_yellow_4_y;
				yellow_player_score++;
			}
			yellow_3_piece=0;
			// for the movement of fourth piece of yellow player
			if(yellow_4_piece==1)
			{
				yellow_4_y_axis+=50;
				// keeping the other pieces on their same place
				yellow_2_y_axis=rep_yellow_2_y;
				yellow_3_y_axis=rep_yellow_3_y;
				yellow_1_y_axis=rep_yellow_1_y;
				yellow_player_score++;
			}
			yellow_4_piece=0;
			
			// for the movement of first piece of green player
			if(green_1_piece==1)
			{
				green_1_y_axis+=50;
				// keeping the other pieces on their same place
				green_2_y_axis=rep_green_2_y;
				green_3_y_axis=rep_green_3_y;
				green_4_y_axis=rep_green_4_y;
				green_player_score++;
			}
			green_1_piece=0;
			// for the movement of second piece of green player
			if(green_2_piece==1)
			{
				green_2_y_axis+=50;
				// keeping the other pieces on their same place
				green_1_y_axis=rep_green_1_y;
				green_3_y_axis=rep_green_3_y;
				green_4_y_axis=rep_green_4_y;
				green_player_score++;
			}
			green_2_piece=0;
			// for the movement of third piece of green player
			if(green_3_piece==1)
			{
				green_3_y_axis+=50;
				// keeping the other pieces on their same place
				green_2_y_axis=rep_green_2_y;
				green_1_y_axis=rep_green_1_y;
				green_4_y_axis=rep_green_4_y;
				green_player_score++;
			}
			green_3_piece=0;
			// for the movement of fourth piece of green player
			if(green_4_piece==1)
			{
				green_4_y_axis+=50;
				// keeping the other pieces on their same place
				green_2_y_axis=rep_green_2_y;
				green_3_y_axis=rep_green_3_y;
				green_1_y_axis=rep_green_1_y;
				green_player_score++;
			}
			green_4_piece=0;

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
			// for the movement of first piece of blue player
			if(blue_1_piece==1)
			{
				blue_1_y_axis-=50;
				// keeping the other pieces on their same place
				blue_2_y_axis=rep_blue_2_y;
				blue_3_y_axis=rep_blue_3_y;
				blue_4_y_axis=rep_blue_4_y;
				blue_player_score++;
			}
			blue_1_piece=0;
			// for the movement of second piece of blue player
			if(blue_2_piece==1)
			{
				blue_2_y_axis-=50;
				// keeping the other pieces on their same place
				blue_1_y_axis=rep_blue_1_y;
				blue_3_y_axis=rep_blue_3_y;
				blue_4_y_axis=rep_blue_4_y;
				blue_player_score++;
			}
			blue_2_piece=0;
			// for the movement of third piece of blue player
			if(blue_3_piece==1)
			{
				blue_3_y_axis-=50;
				// keeping the other pieces on their same place
				blue_2_y_axis=rep_blue_2_y;
				blue_1_y_axis=rep_blue_1_y;
				blue_4_y_axis=rep_blue_4_y;
				blue_player_score++;
			}
			blue_3_piece=0;
			// for the movement of fourth piece of blue player
			if(blue_4_piece==1)
			{
				blue_4_y_axis-=50;
				// keeping the other pieces on their same place
				blue_2_y_axis=rep_blue_2_y;
				blue_3_y_axis=rep_blue_3_y;
				blue_1_y_axis=rep_blue_1_y;
				blue_player_score++;
			}
			blue_4_piece=0;
			
			// for the movement of first piece of red player
			if(red_1_piece==1)
			{
				red_1_y_axis-=50;
				red_2_y_axis=rep_red_2_y;
				red_3_y_axis=rep_red_3_y;
				red_4_y_axis=rep_red_4_y;
				red_player_score++;
			}
			red_1_piece=0;
			// for the movement of second piece of red player
			if(red_2_piece==1)
			{
				red_2_y_axis-=50;
				red_1_y_axis=rep_red_1_y;
				red_3_y_axis=rep_red_3_y;
				red_4_y_axis=rep_red_4_y;
				red_player_score++;
			}
			red_2_piece=0;
			// for the movement of third piece of red player
			if(red_3_piece==1)
			{
				red_3_y_axis-=50;
				// keeping the other pieces on their same place
				red_2_y_axis=rep_red_2_y;
				red_1_y_axis=rep_red_1_y;
				red_4_y_axis=rep_red_4_y;
				red_player_score++;
			}
			red_3_piece=0;
			// for the movement of fourth piece of red player
			if(red_4_piece==1)
			{
				red_4_y_axis-=50;
				// keeping the other pieces on their same place
				red_2_y_axis=rep_red_2_y;
				red_3_y_axis=rep_red_3_y;
				red_1_y_axis=rep_red_1_y;
				red_player_score++;
			}
			red_4_piece=0;
			
			// for the movement of first piece of yellow player
			if(yellow_1_piece==1)
			{
				yellow_1_y_axis-=50;
				// keeping the other pieces on their same place
				yellow_2_y_axis=rep_yellow_2_y;
				yellow_3_y_axis=rep_yellow_3_y;
				yellow_4_y_axis=rep_yellow_4_y;
				yellow_player_score++;
			}
			yellow_1_piece=0;
			// for the movement of second piece of yellow player
			if(yellow_2_piece==1)
			{
				yellow_2_y_axis-=50;
				// keeping the other pieces on their same place
				yellow_1_y_axis=rep_yellow_1_y;
				yellow_3_y_axis=rep_yellow_3_y;
				yellow_4_y_axis=rep_yellow_4_y;
				yellow_player_score++;
			}
			yellow_2_piece=0;
			// for the movement of third piece of yellow player
			if(yellow_3_piece==1)
			{
				yellow_3_y_axis-=50;
				// keeping the other pieces on their same place
				yellow_2_y_axis=rep_yellow_2_y;
				yellow_1_y_axis=rep_yellow_1_y;
				yellow_4_y_axis=rep_yellow_4_y;
				yellow_player_score++;
			}
			yellow_3_piece=0;
			// for the movement of fourth piece of yellow player
			if(yellow_4_piece==1)
			{
				yellow_4_y_axis-=50;
				// keeping the other pieces on their same place
				yellow_2_y_axis=rep_yellow_2_y;
				yellow_3_y_axis=rep_yellow_3_y;
				yellow_1_y_axis=rep_yellow_1_y;
				yellow_player_score++;
			}
			yellow_4_piece=0;
			
			// for the movement of first piece of green player
			if(green_1_piece==1)
			{
				green_1_y_axis-=50;
				// keeping the other pieces on their same place
				green_2_y_axis=rep_green_2_y;
				green_3_y_axis=rep_green_3_y;
				green_4_y_axis=rep_green_4_y;
				green_player_score++;
			}
			green_1_piece=0;
			// for the movement of second piece of green player
			if(green_2_piece==1)
			{
				green_2_y_axis-=50;
				// keeping the other pieces on their same place
				green_1_y_axis=rep_green_1_y;
				green_3_y_axis=rep_green_3_y;
				green_4_y_axis=rep_green_4_y;
				green_player_score++;
			}
			green_2_piece=0;
			// for the movement of third piece of green player
			if(green_3_piece==1)
			{
				green_3_y_axis-=50;
				// keeping the other pieces on their same place
				green_2_y_axis=rep_green_2_y;
				green_1_y_axis=rep_green_1_y;
				green_4_y_axis=rep_green_4_y;
				green_player_score++;
			}
			green_3_piece=0;
			// for the movement of fourth piece of green player
			if(green_4_piece==1)
			{
				green_4_y_axis-=50;
				// keeping the other pieces on their same place
				green_2_y_axis=rep_green_2_y;
				green_3_y_axis=rep_green_3_y;
				green_1_y_axis=rep_green_1_y;
				green_player_score++;
			}
			green_4_piece=0;
			
			

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	/*if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}*/
	// for the dice
	if(key==' ')
	{
		space_bar=2;
		num_1 = (rand()%6)+1;
	}
	if(key=='b')
	{
		space_bar=3;
		num_2 = (rand()%6)+1;
	}
	if(key=='g')
	{
		space_bar=4;
		num_3 = (rand()%6)+1;
	}
	if(key=='y')
	{
		space_bar=5;
		num_4 = (rand()%6)+1;
	}
	// for menu
	if(key=='p')
	{
		game_menu=1;
	}
	if(key=='i')
	{
		game_menu=2;
	}
	if(key=='s')
	{
		game_menu=3;
	}
	if(key=='h')
	{
		game_menu=4;
	}
	// for blue piece
	if(key=='1')
	{
		blue_1_piece=1;
	}
	if(key=='2')
	{
		blue_2_piece=1;
	}
	if(key=='3')
	{
		blue_3_piece=1;
	}
	if(key=='4')
	{
		blue_4_piece=1;
	}
	// for red pieces
	if(key=='5')
	{
		red_1_piece=1;
	}
	if(key=='6')
	{
		red_2_piece=1;
	}
	if(key=='7')
	{
		red_3_piece=1;
	}
	if(key=='8')
	{
		red_4_piece=1;
	}
	// for yellow pieces
	if(key=='q')
	{
		yellow_1_piece=1;
	}
	if(key=='w')
	{
		yellow_2_piece=1;
	}
	if(key=='e')
	{
		yellow_3_piece=1;
	}
	if(key=='r')
	{
		yellow_4_piece=1;
	}
	// for green pieces
	if(key=='z')
	{
		green_1_piece=1;
	}
	if(key=='x')
	{
		green_2_piece=1;
	}
	if(key=='c')
	{
		green_3_piece=1;
	}
	if(key=='v')
	{
		green_4_piece=1;
	}
	
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {

	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int total_player=0;
	a:
	cout << "Enter the number of player= ";
	cin >> total_player; 
	if(total_player<=1 || total_player>4)
	{
		cout << "Error.Invalid Input." << endl;
		goto a;
	}
	int count=1;
	
	for(int i=1; i<=total_player; i++)
	{
		cout << "Enter the name of player " << count << " =";
		cin >> name;
		cout << "Enter the choice of player " << count << " =";
		cin >> choice;
		count++;
		name_storing();
		
	}
	name_reading();
	score_storing();
	//b = new Board(60, 60); // create a new board object to use in the Display Function ...

	int width = 1020, height = 840; // i have set my window size to be 800 x 600
	//b->InitalizeBoard(width, height);
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Ludo Game"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	//glutMouseFunc(MouseClicked);
	//glutPassiveMotionFunc(MouseMoved); // Mouse
	//glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
