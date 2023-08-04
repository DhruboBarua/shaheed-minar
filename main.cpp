#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#include<mmsystem.h>

//for transition
int dr = 135;
int dg = 206;
int db = 250;
static float k=0;

int day = 0;
//

void Initialize( )
{
glClearColor(0.0, 0.0, 0.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0, 100, 0, 100, 100, 0);
}

// for transition
void sky(int r,int g, int b){

 glBegin(GL_QUADS);

// glColor3ub(135, 206, 250);
 glColor3ub(r,g,b);
    glVertex2f(100,50);
    glVertex2f(100,100);
    glVertex2f(0,100);
    glVertex2f(0,50);
 glEnd();

////

}
void kite()
{

//KITE

glBegin(GL_QUADS);
 glColor3ub(255, 0, 0);
    glVertex2f(68,70);
    glVertex2f(72,70);
    glVertex2f(74,66);
    glVertex2f(70,66);
 glEnd();

 glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(68,70);
    glVertex2f(74,66);
 glEnd();
 glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(72,70);
    glVertex2f(70,66);
 glEnd();

 glBegin(GL_TRIANGLES);
    glColor3ub(255, 69, 0);
    glVertex2f(74,66);
    glVertex2f(77,66);
    glVertex2f(76,63);
 glEnd();

}
//////////////////////////////////////////////////////////////
void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_POINTS);
 glVertex3f(2, 2, 0.0);
glEnd();
 // for transition
if(day==1){
    dr=135;
    dg=206;
    db=250;
}
else if(day==0){
    dr=69;
    dg=69;
    db=69;
}
sky(dr,dg,db);

//////////////
//SKY_BG

/*glBegin(GL_QUADS);

 glColor3ub(135, 206, 250);
    glVertex2f(100,50);
    glVertex2f(100,100);
    glVertex2f(0,100);
    glVertex2f(0,50);
 glEnd();*/
/////////////////////////////////////////////

//SUN
float theta;
glBegin(GL_POLYGON);
if(day==1){
    glColor3ub(255, 255, 0);
}
else if(day==0){
    glColor3ub(255,255,255);
}


for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(35+2*cos(theta),83+3*sin(theta));
}
glEnd();
///////////////////////////////////////////////////////////////

 //SHANGU_BG
 glBegin(GL_QUADS);

 glColor3ub(24, 116, 205);
    glVertex2f(0,50);
    glVertex2f(0,30);
    glVertex2f(100,30);
    glVertex2f(100,50);
 glEnd();
///////////////////////////////////////////
//ROOF_BG
 glBegin(GL_QUADS);

 glColor3ub(255, 211, 155);
    glVertex2f(0,100);
    glVertex2f(0,90);
    glVertex2f(80,90);
    glVertex2f(100,100);
 glEnd();


////////////////////////////////////////

 //WALL_BG
  glBegin(GL_QUADS);

 glColor3ub(255, 211, 155);
    glVertex2f(100,100);
    glVertex2f(80,90);
    glVertex2f(80,30);
    glVertex2f(100,0);
 glEnd();

/////////////////////////////////////////

//FLOOR_BG
glBegin(GL_QUADS);

 glColor3ub(255, 140, 105);
    glVertex2f(100,0);
    glVertex2f(80,30);
    glVertex2f(0,30);
    glVertex2f(0,0);
 glEnd();

  glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(0,30);
  glVertex2f(80,30);
  glEnd();
 /////////////////////////////////////////

 //RAILING

  glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(0,25);
  glVertex2f(83.1,25);
  glEnd();

  glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(0,37);
    glVertex2f(0,40);
    glVertex2f(80,40);
    glVertex2f(80,37);
 glEnd();

glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(0,25);
    glVertex2f(3,25);
    glVertex2f(3,37);
    glVertex2f(0,37);
 glEnd();
glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(10,25);
    glVertex2f(13,25);
    glVertex2f(13,37);
    glVertex2f(10,37);
 glEnd();
 glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(20,25);
    glVertex2f(23,25);
    glVertex2f(23,37);
    glVertex2f(20,37);
 glEnd();
 glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(30,25);
    glVertex2f(33,25);
    glVertex2f(33,37);
    glVertex2f(30,37);
 glEnd();
 glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(40,25);
    glVertex2f(43,25);
    glVertex2f(43,37);
    glVertex2f(40,37);
 glEnd();
 glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(50,25);
    glVertex2f(53,25);
    glVertex2f(53,37);
    glVertex2f(50,37);
 glEnd();
 glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(60,25);
    glVertex2f(63,25);
    glVertex2f(63,37);
    glVertex2f(60,37);
 glEnd();
 glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(70,25);
    glVertex2f(73,25);
    glVertex2f(73,37);
    glVertex2f(70,37);
 glEnd();

 glBegin(GL_QUADS);
     glColor3ub(139, 37, 0);
    glVertex2f(77,25);
    glVertex2f(80,25);
    glVertex2f(80,37);
    glVertex2f(77,37);
 glEnd();
///////////////////////////////////////////////////////

    //SHORE_BG
    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex2f(0,50);
    glVertex2f(30,50);
    glVertex2f(26,49);
    glVertex2f(60,50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex2f(58,49);
    glVertex2f(80,50);
    glVertex2f(80,48);
    glVertex2f(0,48);
    glEnd();
/////////////////////////////////////////////////////////////////


 //MOUNTAINS

//left
 glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(0,50);
    glVertex2f(8,60);
    glVertex2f(20,50);
 glEnd();
 glBegin(GL_TRIANGLES);
 glColor3ub(34, 139, 34);
    glVertex2f(0,50);
    glVertex2f(8,60);
    glVertex2f(4,50);
 glEnd();

 glBegin(GL_TRIANGLES);
 glColor3ub(107, 142, 35);
    glVertex2f(0,50);
    glVertex2f(8,60);
    glVertex2f(2,50);
 glEnd();
//____________________________________

//middle
 glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(18,50);
    glVertex2f(32,70);
    glVertex2f(45,50);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(107, 142, 35);

    glVertex2f(32,70);
    glVertex2f(22,55);
    glVertex2f(25,58);
    glVertex2f(28,60);
    glVertex2f(30,65);
    glVertex2f(34,56);
    glVertex2f(36,60);
    glVertex2f(38,50);
    glVertex2f(40,58);
 glEnd();
//___________________________________

 //right

 glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(43,50);
    glVertex2f(50,58);
    glVertex2f(58,50);
 glEnd();

 glBegin(GL_TRIANGLES);
 glColor3ub(154, 205, 50);
    glVertex2f(43,50);
    glVertex2f(50,58);
    glVertex2f(47,50);
 glEnd();

 //___________________________________

 //rightmost
 glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(50,50);
    glVertex2f(60,58);
    glVertex2f(75,50);
 glEnd();
 glBegin(GL_TRIANGLES);
 glColor3ub(46, 139, 87);
    glVertex2f(68,50);
    glVertex2f(60,58);
    glVertex2f(75,50);
 glEnd();

  glBegin(GL_TRIANGLES);
 glColor3ub(50, 205, 50);
    glVertex2f(75,50);
    glVertex2f(80,62);
    glVertex2f(80,50);
 glEnd();
 //////////////////////////////////////////////////////////////

 //FLOOR_TILES

  glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(0,10);
  glVertex2f(93.4,10);
  glEnd();
  glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(0,20);
  glVertex2f(86.6,20);
  glEnd();
/////////////////////////////////////////////////////////////////////////////

//CLOUDS

//right

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(70+2.5*cos(theta),71+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(67.7+2.5*cos(theta),73+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(72.3+2.5*cos(theta),73+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(70+2*cos(theta),75+2*sin(theta));
}
glEnd();
//____________________________________________________________________

//Middle

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(50+2.5*cos(theta),76+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(47.6+3*cos(theta),78+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(52.3+2.3*cos(theta),78+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(50+2*cos(theta),80+2*sin(theta));
}
glEnd();

//_________________________________________________________________________________

//left

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(8+2*cos(theta),76+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(5.6+2*cos(theta),78+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(10.3+2*cos(theta),78+2*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(8+2*cos(theta),80+2*sin(theta));
}
glEnd();
/////////////////////////////////////////////////////////////////////////////////////////



//Flower vase on railing

glBegin(GL_QUADS);
 glColor3ub(202, 225, 255);
    glVertex2f(60,40);
    glVertex2f(60,42);
    glVertex2f(80,42);
    glVertex2f(80,40);
 glEnd();

////////////////////////////////////////////////

//FLOWERS ON RAILING

//Flower1

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(62+.7*cos(theta),45+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(61+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(63+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(62+.7*cos(theta),47+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(176, 48, 96);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(62+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(62,44.4);
glVertex2f(62,42);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(61.97,44.4);
glVertex2f(61.97,42);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(62,43.6);
    glVertex2f(64,45);
    glVertex2f(62,42.5);
 glEnd();
//_______________________________________________________________________________________________

//Flower2
glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(66+.7*cos(theta),45+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(65+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(67+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(66+.7*cos(theta),47+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 140, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(66+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(66,44.4);
glVertex2f(66,42);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(65.97,44.4);
glVertex2f(65.97,42);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(66,43.6);
    glVertex2f(68,45);
    glVertex2f(66,42.5);
 glEnd();
//_____________________________________________________________________________________

//flower3

glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(70+.7*cos(theta),45+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(69+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(71+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(70+.7*cos(theta),47+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(208, 32, 144);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(70+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(70,44.4);
glVertex2f(70,42);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(69.97,44.4);
glVertex2f(69.97,42);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(70,43.6);
    glVertex2f(72,45);
    glVertex2f(70,42.5);
 glEnd();
//____________________________________________________________________________________________

 //flower4

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(74+.7*cos(theta),45+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(73+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(75+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(74+.7*cos(theta),47+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 140, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(74+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(74,44.4);
glVertex2f(74,42);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(73.97,44.4);
glVertex2f(73.97,42);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(74,43.6);
    glVertex2f(76,45);
    glVertex2f(74,42.5);
 glEnd();
//_________________________________________________________________________________________________________

//flower5

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(78+.7*cos(theta),45+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(77+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(79+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 105, 180);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(78+.7*cos(theta),47+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(176, 48, 96);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(78+.7*cos(theta),46+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(78,44.4);
glVertex2f(78,42);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(77.97,44.4);
glVertex2f(77.97,42);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(78,43.6);
    glVertex2f(80,45);
    glVertex2f(78,42.5);
 glEnd();
//_____________________________________________________________________________________________
glPushMatrix();
glTranslatef(k,0,0);
kite();
glPopMatrix();
/////////////////////////////////////////////////////////////////////////////////////////////////

//FLOATING FLOWER VASE

//rope

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(18,90);
glVertex2f(15,65);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(18,90);
glVertex2f(21,65);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(18,90);
glVertex2f(18,65);
glEnd();

///////////////////////////////////

//VASE

glBegin(GL_QUADS);

 glColor3ub(139, 34, 82);
    glVertex2f(15,65);
    glVertex2f(21,65);
    glVertex2f(21,64);
    glVertex2f(15,64);
 glEnd();

glBegin(GL_QUADS);

glColor3ub(205, 104, 137);
    glVertex2f(15.2,64);
    glVertex2f(20.8,64);
    glVertex2f(20.1,58);
    glVertex2f(15.9,58);
 glEnd();


 glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(15.2,64);
   glVertex2f(15.9,58);
 glEnd();

 glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(20.8,64);
   glVertex2f(20.1,58);
 glEnd();

  glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(15.9,58);
   glVertex2f(20.1,58);
 glEnd();
 ////////////////////////////////////////

 //Flower on the floating vase1


glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(18+.7*cos(theta),70+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(17+.7*cos(theta),71+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(19+.7*cos(theta),71+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 192, 203);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(18+.7*cos(theta),72+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(208, 32, 144);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(18+.7*cos(theta),71+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(18,74.4);
glVertex2f(18,72);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(17.97,69.4);
glVertex2f(17.97,67);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(18,68.6);
    glVertex2f(20,70);
    glVertex2f(18,67.5);
 glEnd();

 ////////////////////////////////////////////////////////////////////////////////////////

//Flower on the floating vase2


glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(20+.7*cos(theta),67+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(19+.7*cos(theta),68+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(21+.7*cos(theta),68+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(20+.7*cos(theta),69+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 140, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(20+.7*cos(theta),68+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(20,66.4);
glVertex2f(20,65);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(19.97,66.4);
glVertex2f(19.97,65);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(20,66.4);
    glVertex2f(22,67);
    glVertex2f(20,65.5);
 glEnd();

 ////////////////////////////////////////////////////////////////////////////////////////


 //Flower on the floating vase3


glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(16+.7*cos(theta),67+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(15+.7*cos(theta),68+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(17+.7*cos(theta),68+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(16+.7*cos(theta),69+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 140, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(16+.7*cos(theta),68+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(16,66.4);
glVertex2f(16,65);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(15.97,66.4);
glVertex2f(15.97,65);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(16,66.4);
    glVertex2f(18,67);
    glVertex2f(16,65.5);
 glEnd();

 ////////////////////////////////////////////////////////////////////////////////////////

//extra leaf

glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(18,67.4);
    glVertex2f(20,67);
    glVertex2f(18,66.5);
 glEnd();

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//CHAIR

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(42,46);
    glVertex2f(51.1,50);
    glVertex2f(51.1,48);
    glVertex2f(42,44);
 glEnd();

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(42,28);
    glVertex2f(51.1,32);
    glVertex2f(51.1,30);
    glVertex2f(42,26);
 glEnd();

///////////////////////////////////



 glBegin(GL_QUADS);

 glColor3ub(205, 96, 144);
    glVertex2f(42,28);
    glVertex2f(33,28);
    glVertex2f(40,32);
    glVertex2f(51.1,32);
 glEnd();
 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(33,28);
    glVertex2f(33,26);
    glVertex2f(42,26);
    glVertex2f(42,28);
 glEnd();

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(42,44);
    glVertex2f(42,16);
    glVertex2f(43.3,16);
    glVertex2f(43.3,45);
 glEnd();
 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(50,49);
    glVertex2f(50,20);
    glVertex2f(51.1,20);
    glVertex2f(51.1,49);
 glEnd();

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(33,26);
    glVertex2f(33,16);
    glVertex2f(34.2,16);
    glVertex2f(34.2,26);
 glEnd();

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(39,26);
    glVertex2f(39,20);
    glVertex2f(40.2,20);
    glVertex2f(40.2,26);
 glEnd();

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(46,28);
    glVertex2f(47.1,28.5);
    glVertex2f(47.1,48);
    glVertex2f(46,48);
 glEnd();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Coffee Table

glBegin(GL_POLYGON);
glColor3ub(122, 55, 139);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(25+6*cos(theta),32.9+3*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(238, 174, 238);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(25+6*cos(theta),34+2.9*sin(theta));
}
glEnd();

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(24,30);
    glVertex2f(24,20);
    glVertex2f(26,20);
    glVertex2f(26,30);
 glEnd();

 glBegin(GL_QUADS);

 glColor3ub(139, 58, 98);
    glVertex2f(24,20);
    glVertex2f(21,16);
    glVertex2f(29,16);
    glVertex2f(26,20);
 glEnd();

 /////////////////////////////////////////////////////////////////////////////////////////////////////

 //WALL_Decorate

  glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(80,90);
  glVertex2f(100,100);
  glEnd();

   glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(80,90);
  glVertex2f(80,25);
  glEnd();

   glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(80,30);
  glVertex2f(100,0);
  glEnd();

   glBegin(GL_LINES);
  glColor3ub(178, 34, 34);
  glVertex2f(0,90);
  glVertex2f(80,90);
  glEnd();

  //COFFEE_MUG

 glBegin(GL_QUADS);

 glColor3ub(60, 179, 113);
    glVertex2f(26.8,38);
    glVertex2f(29.15,38);
    glVertex2f(29.15,34);
    glVertex2f(26.8,34);
 glEnd();

glBegin(GL_POLYGON);
glColor3ub(46, 139, 87);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(28+1.2*cos(theta),38+1*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(60, 179, 113);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(28+1.2*cos(theta),34+1*sin(theta));
}
glEnd();

//__________________________________________________________

//mug handle

glBegin(GL_QUADS);
 glColor3ub(60, 179, 113);

    glVertex2f(29.15,35);
    glVertex2f(29.15,34.5);
    glVertex2f(30.15,34.5);
    glVertex2f(29.65,35);

    glEnd();

 glBegin(GL_QUADS);
 glColor3ub(60, 179, 113);


    glVertex2f(30,34.5);
    glVertex2f(29.65,35);
    glVertex2f(29.65,37);
    glVertex2f(30,37.5);
 glEnd();

  glBegin(GL_QUADS);
 glColor3ub(60, 179, 113);

    glVertex2f(29.15,37.5);
    glVertex2f(29.15,37);
    glVertex2f(29.65,37);
    glVertex2f(30.15,37.5);
 glEnd();

////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////

//VASE1 on the floor

glBegin(GL_QUADS);

 glColor3ub(139, 34, 82);
    glVertex2f(70,15);
    glVertex2f(76,15);
    glVertex2f(76,14);
    glVertex2f(70,14);
 glEnd();

glBegin(GL_QUADS);

glColor3ub(205, 104, 137);
    glVertex2f(70.2,14);
    glVertex2f(75.8,14);
    glVertex2f(75.1,8);
    glVertex2f(70.9,8);
 glEnd();


 glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(70.2,14);
   glVertex2f(70.9,8);
 glEnd();

 glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(75.8,14);
   glVertex2f(75.1,8);
 glEnd();

  glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(70.9,8);
   glVertex2f(75.1,8);
 glEnd();
 ////////////////////////////////////////

 //flower on the floor vase1
 glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(73+.7*cos(theta),20+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(72+.7*cos(theta),21+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(74+.7*cos(theta),21+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(73+.7*cos(theta),22+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 140, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(73+.7*cos(theta),21+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(73,19.4);
glVertex2f(73,15);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(72.97,19.4);
glVertex2f(72.97,15);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(73,18.6);
    glVertex2f(71,19);
    glVertex2f(73,17.5);
 glEnd();
//_____________________________________________________________________________________

//leaf2
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(73,17.6);
    glVertex2f(75,18);
    glVertex2f(73,16.5);
 glEnd();
//_____________________________________________________________________________________

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//VASE1 on the floor

glBegin(GL_QUADS);

 glColor3ub(139, 34, 82);
    glVertex2f(78,15);
    glVertex2f(84,15);
    glVertex2f(84,14);
    glVertex2f(78,14);
 glEnd();

glBegin(GL_QUADS);

glColor3ub(205, 104, 137);
    glVertex2f(78.2,14);
    glVertex2f(83.8,14);
    glVertex2f(83.1,8);
    glVertex2f(78.9,8);
 glEnd();


 glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(78.2,14);
   glVertex2f(78.9,8);
 glEnd();

 glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(83.8,14);
   glVertex2f(83.1,8);
 glEnd();

  glBegin(GL_LINES);
  glColor3ub(139, 34, 82);
   glVertex2f(78.9,8);
   glVertex2f(83.1,8);
 glEnd();
 ////////////////////////////////////////

 //flower on the floor vase1
 glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(81+.7*cos(theta),20+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(80+.7*cos(theta),21+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(82+.7*cos(theta),21+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(81+.7*cos(theta),22+.7*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 140, 0);

for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(81+.7*cos(theta),21+.7*sin(theta));
}
glEnd();

//flower lower part
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(81,19.4);
glVertex2f(81,15);

glEnd();
glBegin(GL_LINES);
glColor3ub(0, 100, 0);
glVertex2f(80.97,19.4);
glVertex2f(80.97,15);

glEnd();

//______________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(81,18.6);
    glVertex2f(78,19);
    glVertex2f(81,17.5);
 glEnd();
//_____________________________________________________________________________________

//leaf
glBegin(GL_TRIANGLES);
 glColor3ub(0, 100, 0);
    glVertex2f(81,17.6);
    glVertex2f(83,18);
    glVertex2f(81,16.5);
 glEnd();
//_____________________________________________________________________________________






 glFlush();
 if(k>=-80){k=k-0.02;}
 else(k=0);
 glutPostRedisplay();
}

// for transition

void specialkey(int key,int x,int y)
{
    switch(key)
    {
    case GLUT_KEY_DOWN:
        day=1;
        glutPostRedisplay();
        break;
    case GLUT_KEY_UP:
        day=0;
        glutPostRedisplay();
        break;
    }
}

////

int main(int iArgc , char** cppArgv)
{
glutInit(&iArgc , cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(250,250);
glutInitWindowPosition(200,200);
glutCreateWindow("CSE_414");
Initialize();
glutDisplayFunc(Draw);

// for transition
glutSpecialFunc(specialkey);

sndPlaySound("sound.wav",SND_ASYNC);
glutMainLoop();
return 0;
}
