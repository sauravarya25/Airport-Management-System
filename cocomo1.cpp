/*COCOMO 1
Effort Applied (E) = ab(KLOC)bb [person-months]

Development Time (D) = cb(Effort Applied)db [months]

Average staff size (SS) = Effort Applied / Development Time [person]

Productivity (P) =KLOC/Effort Applied [KLOC/PM]

where, KLOC is the estimated number of delivered lines (expressed in thousands ) of code for project. */


#include<bits/stdc++.h>
#include<conio.h>

using namespace std;



int fround(float x)
{

  int a;

  x=x+0.5;

  a=x;

  return(a);

}

int main()

{

  float e,t,s,p;

  float table[3][4]={2.4,1.05,2.5,0.38,3.0,1.12,2.5,0.35,3.6,1.20,2.5,0.32};

  int size,model;

  char mode[][15]={"Organic","Semi-Detached","Embedded"};

  cout<<"\nEnter LOC in thousands: ";

  cin>>size;

  if(size>=2 && size<=50)

    model=0;     //organic

  else if(size>50 && size<=300)

    model=1;     //semi-detached

  else if(size>300)

    model=2;     //embedded

  cout<<"\nMode:"<<mode[model]<<"\n";

  e=table[model][0]*pow(size,table[model][1]);

  t=table[model][2]*pow(e,table[model][3]);

  s=e/t;

  p=size/e;

  cout<<"\nEffort="<<e<<" Person-Month"<<"\n";

  cout<<"\nDevelopment Time="<<t<<" Months"<<"\n";

  cout<<"\nAverage Staff Needed="<<fround(s)<<" Persons"<<"\n";

  cout<<"\nProductivity="<<p<<" KLOC/Person-Month"<<"\n";

getch();
return 0;
}

