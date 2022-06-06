/*
 * main.c
 *
 *  Created on: May 26, 2022
 *      Author: akab
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//define vector structure here
//
//
//

struct vector{
	
	int x;
	int y;
};
typedef struct vector Vector;



void printVector(Vector* vec)
{	
	
	
	
	printf("%di + %dj\n",vec->x,vec->y);

}



Vector* add(Vector *v1, Vector *v2)
{
	Vector* sumVector= (Vector*) malloc(sizeof(Vector));
	
	sumVector->x= v1->x+v2->x;
	sumVector->y= v1->y + v2->y;
	
	return sumVector;
	
	
}

Vector* substract(Vector *v1, Vector *v2)
{
	Vector* subVector= (Vector*) malloc(sizeof(Vector));
	
	subVector->x= v1->x - v2->x;
	subVector->y= v1->y - v2->y;
	
	return subVector;
	
	
	
}

double magnitudeOfVector(Vector* vec)
{
	double magn;
	
	
	magn=sqrt(vec->x*vec->x*vec->y*vec->y);
	return magn;
}

double angleOfVector(Vector* vec)
{
	double angle= atan( (double) vec->y /  (double)  vec->x);
	return angle;
}


int dot_product(Vector *v1, Vector *v2)
{
	int result = (v1->x*v2->x )+ (v1->y*v2->y ) ;
	
	return result;
}

double angleBetweenVectors(Vector* vec1,Vector* vec2)
{
	double result  =  acos(  (double) dot_product(vec1,vec2)/ (magnitudeOfVector(vec1)*magnitudeOfVector(vec2))  );
	
	
}



int main()
{
	//create vectors
	//fill vectors using user inputs
	struct vector *vec1,*vec2, *res;
	
	vec1 = (Vector*) malloc(sizeof(Vector));
	vec2 = (Vector*) malloc(sizeof(Vector));
	
	printf("Enter vec1:");
	scanf("%d %d",&vec1->x,&vec1->y);
	printf("Enter vec2:");
	scanf("%d %d",&vec2->x,&vec2->y);
	
	printVector(vec1);
	printVector(vec2);
	

	//call necessary operations
	res = substract( vec1 , vec2 );
	printf("vec1 - vec2 = %di + %dj\n", res->x, res->y);
	free(res);
	res=NULL;
	
	
	
	res= add( vec1 , vec2 );
	printf("vec1 + vec2 = %di + %dj\n", res->x, res->y);
	free(res);
	res=NULL;
	
	
	
	printf("Angle of vec1: %f\n", angleOfVector(vec1));
	printf("Angle of vec2: %f\n", angleOfVector(vec2));
	
	printf("Angle between vec1 and vec2: %f\n", angleBetweenVectors(vec1,vec2));
	
	printf("Magnetude of vec1 : %f\n", magnitudeOfVector(vec1));
	printf("Magnetude of vec2 : %f\n", magnitudeOfVector(vec2));
	
	printf("vec1 * vec2 = %d\n", dot_product(vec1, vec2));
	
	free(vec1);
	free(vec2);
	//call necessary operations
	return 0;
}


