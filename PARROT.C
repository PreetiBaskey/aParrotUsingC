/********   It is simple program to play around with polygon and
	(is made with TurboC IDE) a static parrot is made   ********/


#include"conio.h"
#include"graphics.h"
#include"stdlib.h"
#include"stdio.h"

void main(void)
{
	int gd=DETECT,gm;
	int poly[33];
	int poly1[140];
	int poly2[30];
	int poly3[30];

	initgraph(&gd,&gm,"C://TC//BGI");

	setcolor(GREEN);

	poly[0]=68;                //The mouth of parrot
	poly[1]=98;

	poly[2]=60;
	poly[3]=100;

	poly[4]=50;
	poly[5]=110;

	poly[6]=50;
	poly[7]=120;

	poly[8]=58;
	poly[9]=133;

	poly[10]=58;
	poly[11]=128;

	poly[12]=62;
	poly[13]=126;

	poly[14]=65;
	poly[15]=126;

	poly[16]=70;
	poly[17]=124;

	poly[18]=72;
	poly[19]=124;

	poly[20]=77;
	poly[21]=120;

	poly[22]=77;
	poly[23]=115;

	poly[24]=70;
	poly[25]=115;

	poly[26]=71;
	poly[27]=112;

	poly[28]=73;
	poly[29]=110;

	poly[30]=74;
	poly[31]=111;

	poly[32]=poly[0];
	poly[33]=poly[1];

	setfillstyle(1,RED);
	drawpoly(16,poly);
	fillpoly(16,poly);

	poly1[0]=66;              //The body of parrot
	poly1[1]=98;

	poly1[2]=68;
	poly1[3]=93;

	poly1[4]=68;
	poly1[5]=88;

	poly1[6]=73;
	poly1[7]=83;

	poly1[8]=73;
	poly1[9]=81;

	poly1[10]=75;
	poly1[11]=83;

	poly1[12]=77;
	poly1[13]=73;

	poly1[14]=82;
	poly1[15]=73;

	poly1[16]=87;
	poly1[17]=70;

	poly1[18]=92;
	poly1[19]=73;

	poly1[20]=100;
	poly1[21]=75;

	poly1[22]=110;
	poly1[23]=85;

	poly1[24]=115;
	poly1[25]=95;

	poly1[26]=118;
	poly1[27]=105;

	poly1[28]=123;
	poly1[29]=115;

	poly1[30]=120;
	poly1[31]=117;

	poly1[32]=123;
	poly1[33]=119;

	poly1[34]=128;
	poly1[35]=124;

	poly1[36]=126;
	poly1[37]=124;

	poly1[38]=138;
	poly1[39]=140;

	poly1[40]=140;
	poly1[41]=143;

	poly1[42]=140;
	poly1[43]=145;

	poly1[44]=145;
	poly1[45]=147;

	poly1[46]=147;
	poly1[47]=152;

	poly1[48]=149;
	poly1[49]=157;

	poly1[50]=151;
	poly1[51]=162;

	poly1[52]=154;
	poly1[53]=167;

	poly1[54]=159;
	poly1[55]=177;

	poly1[56]=159;
	poly1[57]=183;

	poly1[58]=200;
	poly1[59]=220;

	poly1[60]=200;
	poly1[61]=222;

	poly1[62]=210;
	poly1[63]=230;

	poly1[64]=210;
	poly1[65]=235;

	poly1[66]=200;
	poly1[67]=237;

	poly1[68]=210;
	poly1[69]=257;

	poly1[70]=210;
	poly1[71]=260;

	poly1[72]=200;
	poly1[73]=260;

	poly1[74]=220;
	poly1[75]=290;

	poly1[76]=217;
	poly1[77]=290;

	poly1[78]=237;
	poly1[79]=310;

	poly1[80]=237;
	poly1[81]=312;

	poly1[82]=213;
	poly1[83]=300;

	poly1[84]=220;
	poly1[85]=328;

	poly1[86]=200;
	poly1[87]=298;

	poly1[88]=196;
	poly1[89]=298;

	poly1[90]=188;
	poly1[91]=278;

	poly1[92]=186;
	poly1[93]=278;

	poly1[94]=175;
	poly1[95]=250;

	poly1[96]=160;
	poly1[97]=222;

	poly1[98]=156;
	poly1[99]=222;

	poly1[100]=153;
	poly1[101]=222;

	poly1[102]=152;
	poly1[103]=216;

	poly1[104]=146;
	poly1[105]=216;

	poly1[106]=130;
	poly1[107]=211;

	poly1[108]=118;
	poly1[109]=206;

	poly1[110]=90;
	poly1[111]=185;

	poly1[112]=90;
	poly1[113]=183;

	poly1[114]=86;
	poly1[115]=183;

	poly1[116]=77;
	poly1[117]=160;

	poly1[118]=80;
	poly1[119]=150;

	poly1[120]=84;
	poly1[121]=145;

	poly1[122]=87;
	poly1[123]=135;

	poly1[124]=87;
	poly1[125]=125;

	poly1[126]=77;
	poly1[127]=120;

	poly1[128]=77;
	poly1[129]=115;

	poly1[130]=70;
	poly1[131]=115;

	poly1[132]=71;
	poly1[133]=112;

	poly1[134]=73;
	poly1[135]=110;

	poly1[136]=74;
	poly1[137]=111;

	poly1[138]=68;
	poly1[139]=98;

	poly1[140]=poly1[0];
	poly1[141]=poly1[1];

	setfillstyle(1,GREEN);
	drawpoly(70,poly1);
	fillpoly(70,poly1);

	setcolor(BLACK);
	circle(83,94,3);

	poly2[0]=110;              //Legs of parrot
	poly2[1]=201;

	poly2[2]=108;
	poly2[3]=222;

	poly2[4]=104;
	poly2[5]=228;

	poly2[6]=90;
	poly2[7]=234;

	poly2[8]=76;
	poly2[9]=234;

	poly2[10]=76;
	poly2[11]=238;

	poly2[12]=71;
	poly2[13]=240;

	poly2[14]=72;
	poly2[15]=243;

	poly2[16]=72;
	poly2[17]=246;

	poly2[18]=82;
	poly2[19]=252;

	poly2[20]=97;
	poly2[21]=243;

	poly2[22]=114;
	poly2[23]=242;

	poly2[24]=112;
	poly2[25]=228;

	poly2[26]=124;
	poly2[27]=208;

	poly2[28]=poly2[0];
	poly2[29]=poly2[1];

	setfillstyle(1,RED);
	drawpoly(15,poly2);
	fillpoly(15,poly2);



	poly3[0]=70;                 //The rock
	poly3[1]=245;

	poly3[2]=82;
	poly3[3]=252;

	poly3[4]=97;
	poly3[5]=243;

	poly3[6]=114;
	poly3[7]=242;

	poly3[8]=134;
	poly3[9]=247;

	poly3[10]=154;
	poly3[11]=257;

	poly3[12]=164;
	poly3[13]=277;

	poly3[14]=189;
	poly3[15]=317;

	poly3[16]=184;
	poly3[17]=330;

	poly3[18]=124;
	poly3[19]=340;

	poly3[20]=74;
	poly3[21]=330;

	poly3[22]=54;
	poly3[23]=320;

	poly3[24]=44;
	poly3[25]=300;

	poly3[26]=25;
	poly3[27]=270;

	poly3[28]=poly3[0];
	poly3[29]=poly3[1];

	setfillstyle(1,BLUE);
	drawpoly(15,poly3);
	fillpoly(15,poly3);
	getch();
	closegraph();
}

