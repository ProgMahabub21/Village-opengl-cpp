#include<Windows.h>
#include<gl/glut.h>
#include<math.h>

bool isDay = false;
void TreeBody()
{
    glColor3ub(210.0f,105.0,30.0);//RGB chocholate
    glBegin(GL_QUADS);//body
    glVertex2f(90,(10+(-10*2.0f)));
    glVertex2f(((0.5*10)+100),(10+(10*0.0f)));
    glVertex2f(((0.80*10)+100),(10+(10*8.0f)));
    glVertex2f(((-0.5*10)+100),(10+(10*6.0f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Left_Branch
    glVertex2f(((-0.5*10)+100),(10+(10*6.0f)));
    glVertex2f(((-3.5*10)+100),(10+(10*9.0f)));
    glVertex2f(((-0.5*10)+100),(10+(10*5.4f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Right_Branch
    glVertex2f(((0.5*10)+100),(10+(10*5.8f)));
    glVertex2f(((5.0*10)+100),(10+(10*11.5f)));
    glVertex2f(((0.7*10)+100),(10+(10*5.3f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Right_root
    glVertex2f(((0.5*10)+100),(10+(10*0.0f)));
    glVertex2f(((0.4*10)+100),(10+(10*1.0f)));
    glVertex2f(((4.0*10)+100),(10+(10*0.0f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Left_root
    glVertex2f(((-0.5*10)+100),(10+(10*0.5f)));
    glVertex2f(((-0.4*10)+100),(10+(10*1.5f)));
    glVertex2f(((-4.0*10)+100),(10+(10*0.0f)));
    glEnd();

}
void Leaf()
{

    glBegin(GL_POLYGON);// Draw a green circle centered at up left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(100+(10*( (r * cos(A))-5)));
            float q =(10+(10*( 10+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(100+(10*((r * cos(A))-4)));
            float q =(10+(10*(13+r * sin(A))));
            glVertex2f(p,q);
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up Right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (100+(10*((r * cos(A))+5)));
            float q = (10+(10*(10+r * sin(A))));
            glVertex2f(p,q);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (100+(10*((r * cos(A))-4)));
            float q = (10+(10*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

		glBegin(GL_POLYGON);// Draw a green circle centered at upper right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (100+(10*((r * cos(A))+4)));
            float q = (10+(10*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up middle
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.5;
            float p = (100+(10*(r * cos(A))));
            float q = (10+(10*(13+r * sin(A))));
            glVertex2f(p,q);
        }

	glEnd();


}
void Tree() {

glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(120,380,0);
glScalef(0.25,0.25,0);
TreeBody();
Leaf();
for(int treeNo=1;treeNo<9;treeNo++)
{
    glTranslatef(120+(treeNo*10),0,0);
    TreeBody();
    Leaf();
    
}

glPopMatrix();
}

void Mountain()
{
    glBegin(GL_POLYGON);
    glColor3ub(107, 107, 71);
    glVertex2f(85, 430);
    glColor3ub(14, 89, 7);
    glVertex2f(100, 455);
    glVertex2f(200, 300);
    glColor3ub(72, 36, 20);
    glVertex2f(170, 300);
    // glVertex2f(0, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(107, 107, 71);
    glVertex2f(0, 350);
    glVertex2f(80, 450);
    glColor3ub(12, 20, 30);
    glVertex2f(140, 380);
    glVertex2f(170, 300);
    glVertex2f(0, 300);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(79, 92, 89);
    glVertex2f(160, 360);
    glColor3ub(14, 89, 7);
    // glColor3ub(90, 113, 125);
    glVertex2f(260, 480);
    glColor3ub(107, 107, 71);
    glVertex2f(330, 360);
    glColor3ub(72, 36, 20);
    glVertex2f(380, 300);
    glColor3ub(12, 20, 30);
    glVertex2f(200, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(107, 107, 71);
    glVertex2f(330, 360);
    glVertex2f(420, 450);
    glVertex2f(500, 370);
    glVertex2f(500, 300);
    glVertex2f(380, 300);
    glEnd();
}


void SmallMountain(int x, int y)
{
    glBegin(GL_POLYGON);
    glColor3ub(46, 43, 43);
    glVertex2f(0 + x, 370 + y);
    glVertex2f(15 + x, 400 + y);
    glVertex2f(30 + x, 360 + y);
    glVertex2f(0 + x, 350 + y);
    glEnd();
}

void outliner()
{
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 350);
    glVertex2f(80, 450);
    glVertex2f(80, 450);
    glVertex2f(140, 380);
    glVertex2f(140, 380);
    glVertex2f(170, 300);
    glVertex2f(90, 435);
    glVertex2f(100, 455);
    glVertex2f(100, 455);
    glVertex2f(200, 300);
    glVertex2f(260, 480);
    glVertex2f(330, 360);
    glVertex2f(330, 360);
    glVertex2f(380, 300);
    glVertex2f(330, 360);
    glVertex2f(420, 450);
    glVertex2f(420, 450);
    glVertex2f(500, 370);

    glEnd();
}

void scaledmountain()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5, 0);
    glTranslatef(500, 502, 0);
    Mountain();
    glPopMatrix();
}


void Roadbody()
{
    int x = 0, y = 0;

    
    glBegin(GL_POLYGON);
    glColor3ub(204, 122, 0);
    glVertex2f(500, 180);
    glColor3ub(153, 61, 0);
    glVertex2f(500, 150);
    glColor3ub(255, 170, 0);
    glVertex2f(0, 150);
    glColor3ub(179, 89, 0);
    glVertex2f(0,180);


    glEnd();
   ;
    /*
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 90, 140);
    glVertex2f(y + 135, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 180, 140);
    glVertex2f(y + 225, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 270, 140);
    glVertex2f(y + 315, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 360, 140);
    glVertex2f(y + 405, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 450, 140);
    glVertex2f(y + 495, 140);
    glEnd();*/
  
}
void road()
{
   /* glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0, 100, 0);*/
    Roadbody();
    /*glTranslatef(0, -100, 0);
    glPopMatrix();*/
}
void circle(int xx, int yy, float r)
{

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
   // glColor3ub(252, 186, 3);     //midday sun color palatte
    for (int i = 0; i < 200; i++)
    {
        // glColor3ub(255, 215, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        // float r = 4.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();
}

void river()
{
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(128, 150, 0);
    glVertex2f(0,400);
    glVertex2f(500, 400);
    glEnd();
  /*  glBegin(GL_POLYGON);*/
    glColor3ub(60, 188, 255);
   // glVertex2f(0, 400);
   // glVertex2f(150,400);
   // glVertex2f(80, 300);
   // glVertex2f(90, 270);
   /* glVertex2f(10,120);
    glVertex2f(0, 0);
    glEnd();*/

    glBegin(GL_POLYGON);
    glVertex2f(0, 140);
    glVertex2f(200,130);
    glVertex2f(500, 110);
    glVertex2f(500, 0);
    glVertex2f(0, 0);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 128, 0);
    glVertex2f(0, 140);
    glVertex2f(200, 130);
    glVertex2f(200, 130);
    glVertex2f(500, 110);
    glEnd();

}
void sky( )             //village sunset
{
   
   glBegin(GL_QUADS);
if(isDay){
    
        glColor3ub(247, 191, 190);
    glVertex2f(0, 400);
    glColor3ub(244, 107, 105);
    glVertex2f(500, 400);
    glColor3ub(239, 88, 86);
    glVertex2f(500, 500);
    glColor3ub(247, 65, 59);
    glVertex2f(0, 500);
}else{
    glColor3ub(0, 0, 0);
    glVertex2f(0, 400);
    
    glVertex2f(500, 400);
    
    glVertex2f(500, 500);
    
    glVertex2f(0, 500);

    
}
    glEnd();
   
}
void sunmoon()
{
    if (isDay) {
        glColor3ub(255, 51, 51);    //midday sun effect
//glColor3ub(128, 128, 128);  
        circle(150, 400, 20);
    }else
    {   
        glColor3ub(255, 255, 255);
        circle(140, 440, 25);
    }
}
void BoatBodyStick()//boitha
{
    glBegin(GL_LINES);
    glColor3ub(165, 42, 42);//brown-stick
    glVertex2f(210, 75);
    glVertex2f(220, 10);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);//brown-stick
    glVertex2f(218, 20);
    glVertex2f(220, 10);
    glVertex2f(230, 10);
    glEnd();

}
void BoatBodyShell()
{
    glBegin(GL_POLYGON);
    glColor3ub(165, 42, 42);//brown-shell
    glVertex2f(120, 30);
    glVertex2f(200, 30);
    glVertex2f(195, 55);
    glVertex2f(125, 55);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);//yellow-shell-stripe-pattern
    glVertex2f(120, 30);
    glVertex2f(200, 30);

    glVertex2f(121, 35);
    glVertex2f(199, 35);

    glVertex2f(122, 40);
    glVertex2f(198, 40);

    glVertex2f(123, 45);
    glVertex2f(197, 45);

    glVertex2f(124, 50);
    glVertex2f(196, 50);

    glVertex2f(125, 55);
    glVertex2f(195, 55);


    glEnd();


}
void BoatBody()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);//black-base
    glVertex2f(120, 10);
    glVertex2f(200, 10);
    glVertex2f(200, 30);
    glVertex2f(120, 30);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-front
    glVertex2f(120, 10);
    glVertex2f(120, 30);
    glVertex2f(80, 40);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-back
    glVertex2f(200, 10);
    glVertex2f(200, 30);
    glVertex2f(240, 40);
    glEnd();

    glBegin(GL_POLYGON);//yellow-inside-shape
    glColor3ub(255, 255, 0);
    glVertex2f(240, 40);
    glVertex2f(80, 40);
    glVertex2f(120, 30);
    glVertex2f(200, 30);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0, 0, 0);//black_stripe
    /*
    for(int i=0;i<4;i++)
    {
        int x1=205,y1=30,x2=200,y2=40,dx=5,dy=5;
    }*/

    glVertex2f(205, 30);
    glVertex2f(200, 40);

    glVertex2f(210, 30);
    glVertex2f(205, 40);

    glVertex2f(215, 30);
    glVertex2f(210, 40);

    glVertex2f(220, 30);
    glVertex2f(215, 40);

    glVertex2f(225, 30);
    glVertex2f(220, 40);

    //
    glVertex2f(115, 30);
    glVertex2f(120, 40);

    glVertex2f(110, 30);
    glVertex2f(115, 40);

    glVertex2f(105, 30);
    glVertex2f(110, 40);

    glVertex2f(100, 30);
    glVertex2f(105, 40);

    glVertex2f(95, 30);
    glVertex2f(100, 40);

    glEnd();
    BoatBodyShell();
    BoatBodyStick();
}
void Boat()
{
    BoatBody();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(10, 110, 0);
    glScalef(0.8, 0.8, 0);
   // glRotatef(250, 0, 0, 1);
    BoatBody();
    glPopMatrix();
}


void House1()
{

    glColor3ub(149, 160, 125); //body

    //triangle
    glBegin(GL_POLYGON);
    glVertex2f(50, 250);
    glVertex2f(125, 350);
    glVertex2f(200, 250);
    glEnd();

    //hut // roof
   // glColor3ub(76, 92, 85);
    glColor3ub(204, 68, 0);  // komlar choto vai
    glBegin(GL_POLYGON);
    glVertex2f(125, 350);
    glVertex2f(263, 370);
    glVertex2f(400, 350);
    glColor3ub(179, 60, 0);
    glVertex2f(500, 250);
    glVertex2f(210, 230);
    glEnd();

    //hut       //western part
    glColor3ub(92, 92, 61);
    glBegin(GL_POLYGON);
    glVertex2f(75, 250);
    glVertex2f(220, 250);
    //glColor3ub(134, 89, 45);
    glColor3ub(166, 197, 103);
    glVertex2f(225, 100);
    glVertex2f(79, 100);
    // glVertex2f(200, 250);
    glEnd();

    //hut   //front door
    glColor3ub(200, 165, 130);
    //glColor3ub(124, 188, 108);
    glBegin(GL_POLYGON);
    glVertex2f(220, 250);
    glColor3ub(157, 147, 92);
    glVertex2f(459 , 250);
    glVertex2f(460 , 100);
    glVertex2f(225, 100);
    // glVertex2f(200, 250);
    glEnd();
}
void Houses()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(200, 360, 0);
    glScalef(0.15,0.15,0);
    House1();
    glPopMatrix();
}
void field()
{
    glBegin(GL_POLYGON);
    glColor3ub(51, 150, 51);
    glVertex2f(0, 400);
  //  glColor3ub(236, 217, 14);
    glColor3ub(179, 0, 0);
    glVertex2f(200, 400);
    glColor3ub(136, 159, 40);
    glVertex2f(180, 185);
    glColor3ub(204, 204, 0);
    glVertex2f(0, 185);
    glEnd();
    glFlush();
}
////void Tree()
//{
//
//}
void output(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5);
 
    sky();
    sunmoon();
    river();
    road();
    Boat();
    scaledmountain();  
   // Grassloop();
    field();
    Tree();
    Houses();
    glFlush();
}
//suru kor
// dekhsos output na
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    //
    glutInitWindowSize(1024, 648);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Village");
  //  gluOrtho2D(-1000, 1000, -1000, 1000);
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(output);
    //glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}