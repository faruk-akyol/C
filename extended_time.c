
#include <stdio.h>
#include <stdlib.h>


struct time {
	int hour;
	int minute;
	int second;
	
};
typedef struct  time Time;

struct date{
	
	int year;
	int month;
	int day;
	
};
typedef struct date Date;


struct extended {
	
	Time hms;
	Date ymd;
	
	
};
typedef struct extended ExtendedTime;


int addTime(Time* op1, Time* op2, Time* op3)
{
	int addedDay=0;
	
	op3->hour = op1->hour+ op2->hour;
	op3->minute= op1->minute+ op2->minute;
	op3->second= op1->second + op2->second;
	
	if(op3->second>59){
		op3->second-= 60;
		op3->minute++;
	}
	if(op3->minute>59){
		op3->minute -= 60;
		op3->hour++;
	}
	if(op3->hour>23){
		op3->hour -= 24;
		addedDay++;
	}
	
	return addedDay;
	
	
}

int subtractTime(Time* op1, Time* op2, Time* op3)
{
	
	int subDay;
	
	op3->hour = op1->hour - op2->hour;
	op3->minute= op1->minute - op2->minute;
	op3->second= op1->second - op2->second;
	
	if(op3->second<0){
		op3->minute--;
		op3->second += 60;
	}
	if(op3->minute <0){
		op3->hour--;
		op3->minute += 60;
	}
	if(op3->hour<0){
		subDay++;
		op3->hour+=24;
	}
	
	return subDay;
}


void addDate(Date* op1, Date* op2, Date* op3,int carry){
	
	op3->day = op2->day + op1->day + carry;
	
	op3->month = op2->month+ op1->month;
	
	op3->year = op2->year + op1->year;
	
	
	if(op3->day > 30){
		op3->day -= 30;
		
		op3->month ++;
		
	} 
	
	if(op3->month > 12){
		op3->day -= 12;
		
		op3->year ++;
		
	} 
	
	
}

void subtractDate(Date* op1, Date* op2, Date* op3,int burrow ){
	
	op3->day = op1->day - op2->day - burrow;
	
	op3->month = op1->month - op2->month;
	
	op3->year = op1->year - op2->year;
	
	
	if(op3->day < 1 ){
		(op3->day) += 30;
		
		(op3->month )--;
		
	} 
	
	if(op3->month < 1){
		(op3->month) += 12;
		
		(op3->year) --;
		
	} 
	
	
}


void addExtendedTime(ExtendedTime* op1, ExtendedTime* op2, ExtendedTime* op3){
	int added = addTime(&(op1->hms), &(op2->hms), &(op3->hms));
	
	addDate(&(op1->ymd), &(op2->ymd), &(op3->ymd), added ) ;
	
	
	
}

void subtractExtendedTime(ExtendedTime* op1, ExtendedTime* op2, ExtendedTime* op3){
	
	int sub = subtractTime(&(op1->hms), &(op2->hms), &(op3->hms));
	
	subtractDate(&(op1->ymd), &(op2->ymd), &(op3->ymd), sub ) ;
	
}



void printExtendedTime(ExtendedTime *e_time){
	printf("Extended Time is %02d/%02d/%04d %02d:%02d:%02d\n", (e_time->ymd).day, (e_time->ymd).month, (e_time->ymd).year, (e_time->hms).hour ,(e_time->hms).minute ,(e_time->hms).second );
}

int main()
{
	
	ExtendedTime* a= (ExtendedTime*) malloc(sizeof(ExtendedTime));
	ExtendedTime* b= (ExtendedTime*) malloc(sizeof(ExtendedTime));
	ExtendedTime* c= (ExtendedTime*) malloc(sizeof(ExtendedTime));
	ExtendedTime* d= (ExtendedTime*) malloc(sizeof(ExtendedTime));
	
	printf("Enter timeA:");
	scanf("%d %d %d", &((a->hms).hour), &((a->hms).minute), &((a->hms).second)   );
	
	printf("Enter dateA:");
	scanf("%d %d %d", &((a->ymd).year), &((a->ymd).month), &((a->ymd).day)     );
	
	printf("Enter timeA:");
	scanf("%d %d %d",&((b->hms).hour), &((b->hms).minute), &((b->hms).second)  );
	
	printf("Enter dateA:");
	scanf("%d %d %d", &((b->ymd).year), &((b->ymd).month), &((b->ymd).day)  );
	
	addExtendedTime(a,b,c);
	subtractExtendedTime(a,b,d);
	
	printExtendedTime(c);
	printExtendedTime(d);
	
	free(a);
	free(b);
	free(c);
	free(d);
	return 0;
}
