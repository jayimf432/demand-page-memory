//Demand paging
/*q21Consider a scenario of demand paged memory. Page table is held in registers. It takes 8 milliseconds to service
a page fault if an empty page is available or the replaced page is not modified and 20 milliseconds if the replaced 
page is modified. Memory access time is 100 nanoseconds. Assume that the page to be replaced is modified 70 percent 
of the time. Generate a solution to find maximum acceptable page-fault rate for access time that is not more than
200 nanoseconds.
*/
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<unistd.h>
using namespace std;
int main()
{
float pf,pfn,pm,pmn,mat,succ,success,fail,failure,et,pasr,losr,mr,fn,fi,pn;

float n=1000000;
cout<<"Time For A Page Fault For Empty Page :\n ";
cin>>pf;
pfn=pf*n;
cout<<"Time For Modified Page :\n";
cin>>pm;
pmn=pm*n;
cout<<"Enter Memory Access Time :\n";
cin>>mat;
cout<<"Reading Updated Page Percentage :\n";
cin>>succ;
success=succ/100;
fail=100-succ;
failure=fail/100;
cout<<"Reading Unupdated Page Percetnage :"<<fail<<"%";
cout<<"\nEnter The Effective Time : ";
cin>>et;
losr=failure*pfn;
pasr=success*pmn;
mr=mat+pasr+losr;
fn=mat-mr;
fi=mat-et;
pn=fi/fn;
system("cls");
cout<<"Therefore Page Fault Related To Above Details is : ";
cout<<"\n\n is : "<<pn<<"ns.\n";
return 0;
}
