#include<stdio.h>
int i,j;
//resolution
int resX,resY;
int roundof(double n) {
	return (n>=0) ? (int)(n+0.5): (int)(n-0.5);
}
void dda(int x1,int y1,int x2,int y2, int resX,int resY) {
	int x,y;
	int dx=x2-x1;
	int dy=y2-y1;
	float s=dy/dx;
	//canvas
	char m[resX][resY];
	for (i = 0; i < resX; i++)
	{
		for (j = 0; j < resY; j++)
		{
			m[i][j]=' ';
		}
	}
	//dda
	y=y1;
	for (x = x1; x <= x2; x++)
	{
		m[x][roundof(y)]='.';
		y+=s;
	}
	//output
	for (i = 0; i < resX; i++)
	{
		for (j = 0; j < resY; j++)
		{
			printf("%c",m[i][j]);
		}
		printf("\n");
	}
}
//print output
void main() {
    //dda(int x1,int y1,int x2,int y2, int resX,int resY)
dda(0,0,5,5,10,10);
}
