#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int cases(int *b);
int file_ginit (int x6);
int intro();
int cases (int *a,int y)
{   ofstream f1;
	ifstream f2;
	switch(y)
	{
		case 1:
		{
		f1.open("twe1");
	    f1<<endl<<setw(80)<<"PROGRAMME FEE UNDER SCHOLARSHIP SCHEME :"<<endl;
	    f1<<setw(120)<<"========================================";
	    f1<<setw(575)<<"with EDB"<<setw(30)<<"w/o EDB";	
        f1<<setw(209)<<"Phase-I"<<setw(25)<<"Phase-II"<<setw(20)<<"Phase-III"<<endl;
	    f1<<setw(169)<<"Program fee(per semester)"<<setw(24)<<a[0]<<setw(25)<<a[1]<<setw(20)<<a[2];
	    f1.close();
	    system("cls");
	    cout<<endl<<endl<<endl;
		int n=10000;
	    char line[n];
	    f2.open("twe1");
	    while(f2)
        { 
		f2.getline(line,n);
	    cout<<line;
        }
	    f2.close();
		
		break;	
		}
		
		case 2:
		{
		f1.open("twe2");
	    f1<<endl<<setw(80)<<"PROGRAMME FEE UNDER SCHOLARSHIP SCHEME :"<<endl;
	    f1<<setw(120)<<"========================================";
	    f1<<setw(575)<<"with EDB"<<setw(30)<<"w/o EDB";	
        f1<<setw(209)<<"Phase-I"<<setw(25)<<"Phase-II"<<setw(20)<<"Phase-III"<<endl;
	    f1<<setw(169)<<"Program fee(per semester)"<<setw(24)<<a[3]<<setw(25)<<a[4]<<setw(20)<<a[5];
	    f1.close();
	    system("cls");
	    cout<<endl<<endl<<endl;
		int n=10000;
	    char line[n];
	    f2.open("twe2");
	    while(f2)
        { 
		f2.getline(line,n);
	    cout<<line;
        }
	    f2.close();
		
		break;	
		}
		
		case 3:
		{
		f1.open("twe3");
	    f1<<endl<<setw(80)<<"PROGRAMME FEE UNDER SCHOLARSHIP SCHEME :"<<endl;
	    f1<<setw(120)<<"========================================";
	    f1<<setw(575)<<"with EDB"<<setw(30)<<"w/o EDB";	
        f1<<setw(209)<<"Phase-I"<<setw(25)<<"Phase-II"<<setw(20)<<"Phase-III"<<endl;
	    f1<<setw(169)<<"Program fee(per semester)"<<setw(24)<<a[6]<<setw(25)<<a[7]<<setw(20)<<a[8];
	    f1.close();
	    system("cls");
	    cout<<endl<<endl<<endl;
		int n=10000;
	    char line[n];
	    f2.open("twe3");
	    while(f2)
        { 
		f2.getline(line,n);
	    cout<<line;
        }
	    f2.close();
		
		break;	
		}
		
		case 4:
		{
		f1.open("twe4");
	    f1<<endl<<setw(80)<<"PROGRAMME FEE UNDER SCHOLARSHIP SCHEME :"<<endl;
	    f1<<setw(120)<<"========================================";
	    f1<<setw(575)<<"with EDB"<<setw(30)<<"w/o EDB";	
        f1<<setw(209)<<"Phase-I"<<setw(25)<<"Phase-II"<<setw(20)<<"Phase-III"<<endl;
	    f1<<setw(169)<<"Program fee(per semester)"<<setw(24)<<a[9]<<setw(25)<<a[10]<<setw(20)<<a[11];
	    f1.close();
	    system("cls");
	    cout<<endl<<endl<<endl;
		int n=10000;
	    char line[n];
	    f2.open("twe4");
	    while(f2)
        { 
		f2.getline(line,n);
	    cout<<line;
        }
	    f2.close();
		
		break;	
		}
		
		
	}	
}


int cases(int *b )
{
	ofstream o1;
	ifstream o2;
	o1.open("show");
	o1<<endl<<setw(80)<<"PROGRAMME FEE UNDER SCHOLARSHIP SCHEME :"<<endl;
	o1<<setw(120)<<"========================================";
    o1<<setw(575)<<"with EDB"<<setw(30)<<"w/o EDB";	
    o1<<setw(209)<<"Phase-I"<<setw(25)<<"Phase-II"<<setw(20)<<"Phase-III"<<endl;
	o1<<setw(169)<<"Program fee(per semester)"<<setw(24)<<b[0]<<setw(25)<<b[1]<<setw(20)<<b[2];
	o1.close();
	system("cls");
	cout<<endl<<endl<<endl;
	int n=10000;
	char line[n];
	o2.open("show");
	while(o2)
    { 
	o2.getline(line,n);
	cout<<line;
    }
	o2.close();	
}

int file12 (int x, int y, int t=0)
   {
	int a[20];
	switch(x)
	{
		case 1:
		{
			void food();
			{
			int a[20]= {19500,29500,34500,29500,39500,44500,34500,44500,49500,39500,49500,54500};
		    cases(a,y);
		    }
			break;
		}
		 
		case 2:{ 
			void bio(int t);
	        {if(t==1)
	        {
			int a[20]={19500,24500,29500,29500,34500,39500,34500,39500,44500,39500,44500,49500};
			cases(a,y);
			}
	        else if(t==2)
	        int a[20]={24500,29500,34500,34500,39500,44500,39500,44500,49500,44500,49500,54500};
			cases(a,y);	
	        }
			break;
		}
		
		case 3:{
			void management(int t);
			{   if(t==1)
				{int a[20]={14500,19500,24500,24500,29500,34500,29500,34500,39500,34500,39500,44500};
				cases(a,y);}
				
				else if(t==2)
				{int a[20]={24500,29500,34500,34500,39500,44500,39500,44500,49500,44500,49500,54500};
				cases(a,y);
				}
				
				else if(t==3 || t==4 || t==5 )
				{int a[20]={14500,19500,24500,24500,29500,34500,29500,34500,39500,34500,39500,44500};
				cases(a,y);
				}
				
				else if(t==6 || t==7 || t==8)
				{int a[20]={19500,29500,34500,29500,39500,44500,34500,44500,49500,39500,49500,54500};
				cases(a,y);
				}
				
			}
			break;
		}
		
		case 4:{
			 void law();
			 {
			 	int a[20]={9500,19500,24500,29500,34500,44500,39500,49500,54500,49500,59500,64500};
				cases(a,y);
			 }
			
			break;
		}
		
		case 5:{ 
			void hotelM(int t);
			{
				if(t==1 || t==2)
				{
					int a[20]={14500,29500,34500,29500,39500,44500,39500,54500,59500,44500,54500,59500};
				cases(a,y);
				}
				
				else if(t==3)
			    {
			    	int a[20]={14500,24500,29500,24500,34500,39500,29500,39500,44500,34500,44500,49500};
				cases(a,y);
				}
			}
			
			break;
		}
		
		case 6:{
			void architecture(int t);
			{   if(t==2)
				{int a[20]={9500,19500,24500,29500,39500,44500,39500,49500,54500,49500,59500,64500};
				cases(a,y);}
				else if(t==1)
				{int a[20]={17500,24500,29500,42500,49500,54500,52500,54500,64500,62500,64500,74500};
				cases(a,y);
				}
			}
			break;
		}
		
		case 7:{
			void fashion();
			{
				int a[20]={19500,29500,34500,29500,39500,44500,39500,54500,59500,44500,54500,59500};
				cases(a,y);
			}
			break;
		}
		
		case 8:{
			void arts();
			{
				int a[20]={14500,19500,24500,14500,19500,24500,19500,24500,29500,24500,29500,29500};
				cases(a,y);
			}
			break;
		}
		
		case 9:{
			void phyedu();
			{int a[20]={12500,14500,19500,12500,14500,19500,17500,19500,24500,22500,24500,24500};
				cases(a,y);
			}
			break;
		}
		
		case 10:{
			void med();
			{
			int a[20]={19500,24500,29500,29500,34500,39500,34500,39500,44500,39500,44500,54500};
				cases(a,y);}
			break;
		}
		
		case 11:{
		    
			void engineering(int t);
			{
				if(t==1)
				{
				int a[20]={14500,24500,29500,39500,49500,54500,49500,59500,64500,59500,69500,74500};
				cases(a,y);	
				}
				
				if(t==2)
				{
					int a[20]={14500,24500,29500,24500,34500,39500,29500,39500,44500,34500,44500,49500};
				cases(a,y);
				}
				
			}
			break;
		}
		
		case 12:{  
		    void agriculture();
		    {
			int a[20]={19500,29500,34500,29500,39500,44500,39500,54500,59500,44500,54500,59500};
				cases(a,y);
			}
			
			break;
		}			
	}	
}


int file12_init (int x4)
   {
	int b[20];
	switch(x4)
	{
		case 1:
		{
			void food_12();
			{
			int b[20]= {49500,59500,59500};
		    cases(b);
		    }
			break;
		}
		
		case 2:{ int t;
		    loopt1:
			{cin>>t;}
			if(t<=0 || t>8)
            {
            	cout<<setw(40)<<"Wrong option.Try again : ";
            	goto loopt1;
			}
			void bio_12(int t);
	        {if(t==1)
	        {
			int b[20]={49500,54500,54500};
			cases(b);
			return t;
			}
	        else if(t==2)
	        int b[20]={54500,59500,59500};
			cases(b);
			return t;	
	        }
			break;
		}
		
		case 3:{
			int k;
			loopq:
			{cin>>k;}
			if(k<=0 || k>8)
            {
            	cout<<setw(40)<<"Wrong option.Try again : ";
            	goto loopq;
			}
			void management_12(int k);
			{   if(k==1)
				{int b[20]={44500,49500,49500};
				cases(b);
				return k;}
				
				else if(k==2)
				{int b[20]={54500,59500,59500};
				cases(b);
				return k;
				}
				
				else if(k==3 || k==4 || k==5 )
				{int b[20]={44500,49500,49500};
				cases(b);
				return k;
				}
				
				else if(k==6 || k==7 || k==8)
				{int b[20]={49500,59500,59500};
				cases(b);
				return k;
				}
				
			}
			break;
		}
		
		case 4:{
			 void law();
			 {
			 	int b[20]={69500,74500,74500};
				cases(b);
			 }
			
			break;
		}
		
		case 5:{ int t;
		    loopt:
			{cin>>t;}
			if(t<=0 || t>3)
            {
            	cout<<setw(40)<<"Wrong option.Try again : ";
            	goto loopt;
			}
			void hotelM(int t);
			{
				if(t==1 || t==2)
				{
					int b[20]={59500,64500,64500};
				cases(b);
				return t;
				}
				
				else if(t==3)
			    {
			    	int b[20]={44500,49500,49500};
				cases(b);
				return t;
				}
			}
			
			break;
		}
		
		case 6:{
			int e;
			loope:
			{cin>>e;}
			if(e<=0 || e>2)
            {
            	cout<<setw(40)<<"Wrong option.Try again : ";
            	goto loope;
			}
			void architecture(int e);
			{   if(e==2)
				{int b[20]={92500,94500,94500};
				cases(b);
				return e;}
				else if(e==1)
				{int b[20]={69500,74500,74500};
				cases(b);
				return e;
				}
			}
			break;
		}
		
		case 7:{
			void fashion();
			{
				int b[20]={47500,49500,49500};
				cases(b);
			}
			break;
		}
		
		case 8:{
			void arts();
			{
				int b[20]={29500,34500,34500};
				cases(b);
			}
			break;
		}
		
		case 9:{
			void phyedu();
			{int b[20]={27500,29500,29500};
				cases(b);
			}
			break;
		}
		
		case 10:{
			void med();
			{
			int b[20]={49500,54500,54500};
				cases(b);}
			break;
		}
		
		case 11:{int m;
				cin>>m;
			void engineering(int m);
			{
				if(m==1)
				{
				int b[20]={89500,94500,94500};
				cases(b);
				return m;	
				}
				
				else if(m==2 || m==3)
				{
					int b[20]={89500,105000,105000};
				cases(b);
				return m; 
				}
				
			}
			break;
		}
		
		case 12:{  
		    void agriculture();
		    {
			int b[20]={59500,64500,64500};
				cases(b);
			}
			
			break;
		}			
	}
}



int file10_init(int x5)
	{
		switch(x5){
			case 1:{
			void engg();
			{  int b1[20]={26500,29500,29500};
			    cases(b1);
				}	
				break;
			}
			
			case 2:{
				void agg();
				{int b1[20]={34500,39500,39500};
			    cases(b1);
				}
				break;
			}
			
			case 3:{
				void manage();
				{
				int b1[20]={34500,39500,39500};
			    cases(b1);	
				}
				break;
			}
			
			case 4:{
				void hotel();
				{
					int b1[20]={39500,49500,49500};
			    cases(b1);
				}
				break;
			}
			
			case 5:{
				void arc();
				{
					int b1[20]={27500,29500,29500};
			    cases(b1);
				}
				break;
			}
			
			case 6:{
				void fash();{
				int b1[20]={34500,39500,39500};
			    cases(b1);
				}
				break;
			}
			
			case 7:{
				void med();{
				int b1[20]={34500,39500,39500};
			    cases(b1);
				}
				break;
			}
		}
		}
		
int file10(int x1, int y1)
	{
		switch(x1){
			case 1:{
			void engg10();
			{  int a1[20]={11500,14500,19500,11500,14500,19500,16500,19500,24500,21500,24500,24500};
			    cases(a1,y1);
				}	
				break;
			}
			
			case 2:{
				void agg10();
				{int a1[20]={4500,9500,14500,14500,19500,24500,19500,24500,29500,24500,29500,34500};
			    cases(a1,y1);
				}
				break;
			}
			
			case 3:{
				void manage10();
				{
				int a1[20]={4500,9500,14500,14500,19500,24500,19500,24500,29500,24500,29500,34500};
			    cases(a1,y1);	
				}
				break;
			}
			
			case 4:{
				void hotel10();
				{
					int a1[20]={9500,19500,24500,19500,29500,34500,24500,34500,39500,29500,39500,44500};
			    cases(a1,y1);
				}
				break;
			}
			
			case 5:{
				void arc10();
				{
					int a1[20]={12500,14500,19500,12500,14500,19500,17500,19500,24500,22500,24500,24500};
			    cases(a1,y1);
				}
				break;
			}
			
			case 6:{
				void fash10();{
				int a1[20]={4500,9500,14500,14500,19500,24500,19500,24500,29500,24500,29500,34500};
			    cases(a1,y1);
				}
				break;
			}
			
			case 7:{
				void med10();{
				int a1[20]={4500,9500,14500,14500,19500,24500,19500,24500,29500,24500,29500,34500};
			    cases(a1,y1);
				}
				break;
			}
		}
		}			


	
int file_g (int x2, int y2, int t2=0)
   {
	int a2[20];
	switch(x2)
	{
		case 1:
		{
			void food_g();
			{
			int a2[20]= {19500,29500,34500,29500,39500,44500,34500,44500,49500,39500,49500,54500};
		    cases(a2,y2);
		    }
			break;
		}
		
		case 2:{ 
			void bio_g();
	        
	        {
			int a2[20]={24500,29500,34500,34500,39500,44500,39500,44500,49500,44500,49500,54500};
			cases(a2,y2);}
			
			break;
		}
		
		case 3:{
			void management_g(int t2);
			{   if(t2==1)
				{int a2[20]={24500,40500,45500,49500,65500,70000,59500,75500,80000,69500,85000,90000};
				cases(a2,y2);}
				
				else if(t2==2)
				{int a2[20]={39500,55000,60000,64500,80000,85000,74500,90000,95000,84500,100000,105000};
				cases(a2,y2);
				}
				
				else if(t2==3 || t2==4 || t2==5 )
				{int a2[20]={9500,29500,34500,34500,54500,59500,44500,64500,69500,54500,74500,79500};
				cases(a2,y2);
				}
				
				else if(t2==6 || t2==7 )
				{int a2[20]={24500,55000,60000,49500,80000,85000,59500,90000,95000,69500,100000,105000};
				cases(a2,y2);
				}
				
			}
			break;
		}
		
		case 4:{
			 void law_g();
			 {
			 	int a2[20]={19500,24500,29500,29500,34500,39500,34500,39500,44500,39500,44500,49500};
				cases(a2,y2);
			 }
			
			break;
		}
		
		case 5:{ 
			void hotelM_g();
			{
				
				int a2[20]={19500,29500,34500,29500,39500,44500,39500,54500,59500,44500,54500,59500};
				cases(a2,y2);
				
			}
			
			break;
		}
		
		case 6:{
		
			void architecture_g(int t2);
			{   if(t2==1)
				{int a2[20]={9500,19500,24500,29500,39500,44500,39500,49500,54500,49500,59500,64500};
				cases(a2,y2);}
				else if(t2==2)
				{int a2[20]={17500,24500,29500,42500,49500,54500,52500,54500,64500,62500,64500,74500};
				cases(a2,y2);
				}
			}
			break;
		}
		
		case 7:{
			void fashion_g();
			{
				int a2[20]={19500,29500,34500,29500,39500,44500,39500,54500,59500,44500,54500,59500};
				cases(a2,y2);
			}
			break;
		}
		
		case 8:{
			void arts_g();
			{
				int a2[20]={14500,19500,24500,14500,19500,24500,19500,24500,29500,24500,29500,29500};
				cases(a2,y2);
			}
			break;
		}
		
		
		case 9:{
			void med_g();
			{
			int a2[20]={19500,24500,29500,29500,34500,39500,34500,39500,44500,39500,44500,49500};
				cases(a2,y2);}
			break;
		}
		
		case 11:{
			void engineering_g();
			{
			
				int a2[20]={19500,29500,34500,29500,39500,44500,39500,54500,59500,44500,54500,59500};
				cases(a2,y2);	
				
			}
			break;
		}
		
		case 12:{  
		    void agriculture_g();
		    {
			int a2[20]={19500,24500,29500,29500,34500,39500,34500,39500,44500,39500,44500,49500};
				cases(a2,y2);
			}
			
			break;
		}
	
	case 13:{
			void phyedu();
			{int a2[20]={12500,14500,19500,12500,14500,19500,17500,19500,24500,22500,24500,24500};
				cases(a2,y2);
			}
			break;
		}			
	}	}


int file_ginit (int x6)
{
    int b2[20];
	switch(x6)
	{
		case 1:
		{
			void food();
			{
			int b2[20]= {49500,54500,54500};
		    cases(b2);
		    }
			break;
		}
		
		case 2:{ 
			void bio();
	        
	        {
			int b2[20]={54500,59500,59500};
			cases(b2);}
			
			break;
		}
		
		case 3:{
			int k;
			loopk1:
			{cin>>k;}
			if(k<=0 || k>7)
            {
            	cout<<setw(40)<<"Wrong option.Try again : ";
            	goto loopk1;
			}
			void management(int k);
			{   if(k==1)
				{int b2[20]={99500,110000,110000};
				cases(b2);
				return k;}
				
				else if(k==2)
				{int b2[20]={114500,125000,125000};
				cases(b2);
				return k;
				}
				
				else if(k==3 || k==4 || k==5 )
				{int b2[20]={84500,99500};
				cases(b2);
				return k;
				}
				
				else if(k==6 || k==7 )
				{int b2[20]={99500,125000,125000};
				cases(b2);
				return k;
				}
				
			}
			break;
		}
		
		case 4:{
			 void law();
			 {
			 	int b2[20]={49500,54500,54500};
				cases(b2);
			 }
			
			break;
		}
		
		case 5:{ 
			void hotelM();
			{
				
				int b2[20]={59500,64500,64500};
				cases(b2);
				
			}
			
			break;
		}
		
		case 6:{
			int e;
			loope1:
			{cin>>e;}
			if(e<=0 || e>2)
            {
            	cout<<setw(40)<<"Wrong option.Try again : ";
            	goto loope1;
			}
			void architecture(int e);
			{   if(e==1)
				{int b2[20]={39500,49500,49500};
				cases(b2);
				return e;}
				else if(e==2)
				{int b2[20]={59500,64500,64500};
				cases(b2);
				return e;
				}
			}
			break;
		}
		
		case 7:{
			void fashion();
			{
				int b2[20]={59500,64500,64500};
				cases(b2);
			}
			break;
		}
		
		case 8:{
			void arts();
			{
				int b2[20]={29500,34500,34500};
				cases(b2);
			}
			break;
		}
		
		
		case 9:{
			void med();
			{
			int b2[20]={49500,54500,54500};
				cases(b2);}
			break;
		}
		
		case 11:{
			void engineering();
			{
			
				int b2[20]={59500,64500,64500};
				cases(b2);	
				
			}
			break;
		}
		
		case 12:{  
		    void agriculture();
		    {
			int b2[20]={49500,54500,54500};
				cases(b2);
			}
			
			break;
		}
	
	case 13:{
			void phyedu();
			{int b2[20]={27500,29500,29500};
				cases(b2);
			}
			break;
		}			
	}}

int file_late (int x3, int y3)
   {
	int a3[20];
	switch(x3)
	{
		case 1:
			{
				void engg_late();
				{
					int a3[20]={11500,14500,19500,11500,14500,19500,16500,19500,24500,21500,24500,24500};
					cases(a3,y3);
									}
				break;					
			}
			
		case 2:{
			
			void arc_late();
			{int a3[20]={12500,14500,19500,12500,14500,19500,17500,19500,24500,22500,24500,24500};
					cases(a3,y3);
				
			}
			break;
		}	
	}}
	




int file_latei (int x7)
   {
	int b3[20];
	switch(x7)
	{
		case 1:
			{
				void engg_latei();
		       {
					int b3[20]={26500,29500,29500};
					cases(b3);
				}
				break;					
			}
			
		case 2:{
			
			void arc_latei();
			{int b3[20]={27500,29500,29500};
					cases(b3);
				
			}
			break;
		}	
	}}
	

class lpu{
	public:
	void ten();
	void twelve();
	void graduation();
	void lateral();	
	
};

int main()
{
	int y;
	lpu obj;
    y=intro();
  switch(y){
  	case 1:
	  {
	    obj.ten();
  	break;}
  	case 2: {
  		obj.twelve();
		break;
	  }
    case 3:{
    	obj.graduation();
		break;
	}
	
	case 4:{
		obj.lateral();
		break;
	}

}
}


int intro(){
	
	int k,m=0;
	loop1:{ system("cls");
	cout<<endl<<endl<<endl<<endl;
	cout<<setw(62)<<"LPU Marks Calculator";
	cout<<endl<<endl<<endl;
	cout<<setw(55)<<"1. After 10th"<<endl<<setw(55)<<"2. After 12th"<<endl<<setw(61)<<"3. After Graduation"<<endl<<setw(58)<<"4. Lateral entry";
	cout<<endl<<endl<<endl<<endl;
	if(m==0)
	{
	cout<<setw(60)<<"Enter your choice : ";
	cin>>k;}
	else
	{
	cout<<setw(50)<<"Wrong choice! Try again : ";
	cin>>k;}
	if(k<=0 || k>4)
	{
		m=1;
		goto loop1;
	}
	
	
}		
	return k;
}



void lpu::ten()
{   int z,x=0;
	int r;
	loop2:{ 
	system("cls");
    cout<<endl<<endl<<endl<<endl;
	cout<<setw(55)<<"PROGRAMMES AVAILABLE :";
	cout<<endl<<endl<<endl;
	cout<<setw(50)<<"1. Engineering"<<endl<<setw(50)<<"2. Agriculture"<<endl<<setw(49)<<"3. Management"<<endl<<setw(65)<<"4. Hotel Management & Tourism"<<endl<<setw(51)<<"5. Architecture";
    cout<<endl<<setw(53)<<"6. Fashion Design"<<endl<<setw(66)<<"7. Medical Laboratory Sciences"<<endl;}
    cout<<endl<<endl;
    if(x==0)
	{
	cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	cin>>r;}
	else
	{
	cout<<setw(50)<<"Wrong choice! Try again : ";
	cin>>r;}
	if(r<=0 || r>7)
	{
		x=1;
		goto loop2;
	}
	switch(r){
		case 1:{int a,j,m=0; 
		loop3:{
			 system("cls");
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"Enter your choice of Program :"<<endl<<endl;
			cout<<setw(60)<<"1.CSE"<<endl<<setw(60)<<"2.ECE"<<endl<<setw(60)<<"3.MEC"<<endl<<setw(59)<<"4.CE"<<endl<<setw(59)<<"5.IT"<<endl;}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>5)
	        {
		    m=1;
		    goto loop3;
	        }
	        cout<<endl<<endl<<endl;
			cout<<setw(60)<<"Choose Duration :"<<endl<<endl;
			cout<<setw(60)<<"1.Dimploma (Engg.)(3 yrs)"<<endl<<endl;
			cout<<endl<<setw(83)<<"2.Dual Programming Diploma(Engg.)-B.Tech(6 yrs.)";
			cout<<endl<<endl<<endl<<endl<<endl;
			cin>>j;
			loop4:{
			system("cls");
			file10_init(1);
			
			int g,h,b;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        {cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file10(1,1);
	       	else if(h>100 && h<=200)
	       	file10(1,2);
	       	else if(h>200 && h<=300)
	       	file10(1,3);
	       	else if(h>300 && h<=400)
	       	file10(1,4);
	       	else
			cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop4;
	        else
	        main();
			}
	        else if(g==2)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file10(1,1);
	       	else if(i>=90 && i<=97.99)
	       	file10(1,2);
	       	else if(i>=80 && i<=89.99)
	       	file10(1,3);
	       	else if(i>=70 && i<=79.99)
	       	file10(1,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop4;
	        else
	        main();
			}
			
	        
	        break;
	        
	        
	    }
           }
           
        case 2:
		{   int a,j,m=0,b;
		   loop5:{system("cls");
		    cout<<endl<<endl<<endl;
			cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
			cout<<setw(60)<<"1.Dimploma in Agricluture(2 yrs)"<<endl<<endl;
			cout<<endl<<setw(88)<<"2.Dual Programming Diploma in Agriculture-B.Sc(Hons)(6 yrs.)";
			cout<<endl<<endl<<endl<<endl<<endl;}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop5;
	        }
			loop6:{
			system("cls");
			file10_init(2);
			int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        {cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file10(2,1);
	       	else if(h>100 && h<=200)
	       	file10(2,2);
	       	else if(h>200 && h<=300)
	       	file10(2,3);
	       	else if(h>300 && h<=400)
	       	file10(2,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop6;
	        else
	        main();}
	        else if(g==2)
	        {
	        cout<<endl<<endl<<setw(70)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file10(2,1);
	       	else if(i>=90 && i<=97.99)
	       	file10(2,2);
	       	else if(i>=80 && i<=89.99)
	       	file10(2,3);
	       	else if(i>=70 && i<=79.99)
	       	file10(2,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop6;
	        else
	        main();;
			}
	        break;}
		   }
		
		case 3:
		{   loop7:{int b;
		    system("cls");
		    file10_init(3);
		    int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        {cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file10(3,1);
	       	else if(h>100 && h<=200)
	       	file10(3,2);
	       	else if(h>200 && h<=300)
	       	file10(3,3);
	       	else if(h>300 && h<=400)
	       	file10(3,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop7;
	        else
	        main();
			}
	        else if(g==2)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file10(3,1);
	       	else if(i>=90 && i<=97.99)
	       	file10(3,2);
	       	else if(i>=80 && i<=89.99)
	       	file10(3,3);
	       	else if(i>=70 && i<=79.99)
	       	file10(3,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop7;
	        else
	        main();
			}
	        break;
		}
			  }      

        case 4:{
        	int a,j,b,m=0;
        	loop8:{system("cls");
			cout<<endl<<endl<<endl;
        	cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	        cout<<setw(68)<<"1.Dimploma in Food Production(1 yr.)"<<endl<<endl;
	        cout<<endl<<setw(83)<<"2.Dual Programming in Bakery & Confectionery(1 yr.)";
            cout<<endl<<endl<<endl<<endl<<endl;}
        	if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop8;
	        }
        	loop9:{file10_init(4);
		    int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        {cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file10(4,1);
	       	else if(h>100 && h<=200)
	       	file10(4,2);
	       	else if(h>200 && h<=300)
	       	file10(4,3);
	       	else if(h>300 && h<=400)
	       	file10(4,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop9;
	        else
	        main();	
			}
	        else if(g==2)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file10(4,1);
	       	else if(i>=90 && i<=97.99)
	       	file10(4,2);
	       	else if(i>=80 && i<=89.99)
	       	file10(4,3);
	       	else if(i>=70 && i<=79.99)
	       	file10(4,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop9;
	        else
	        main();	
			}
			break;}
		}
        
        case 5:
        {int a,j,b,m=0;
		loop10:{system("cls");
		    cout<<endl<<endl<<endl;
			cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	        cout<<setw(63)<<"1.Dimploma in Architectural Assistantship (3 yrs)"<<endl;
	        cout<<endl<<setw(85)<<"2.Dual Programming Diploma Architectural Assistantship-B.Design(6 yrs.)"<<endl;
	        cout<<endl<<setw(83)<<"3.Dual Programming Diploma Architectural Assistantship-B.Tech(6 yrs.)"<<endl;
            cout<<endl<<endl<<endl<<endl<<endl;}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>3)
	        {
		    m=1;
		    goto loop10;
	        }
			loop11:{
			system("cls");
			file10_init(5);
			
			int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        {cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file10(5,1);
	       	else if(h>100 && h<=200)
	       	file10(5,2);
	       	else if(h>200 && h<=300)
	       	file10(5,3);
	       	else if(h>300 && h<=400)
	       	file10(5,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop11;
	        else
	        main();	
			}
	        else if(g==2)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file10(5,1);
	       	else if(i>=90 && i<=97.99)
	       	file10(5,2);
	       	else if(i>=80 && i<=89.99)
	       	file10(5,3);
	       	else if(i>=70 && i<=79.99)
	       	file10(5,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop11;
	        else
	        main();
			}
	        break;
        }
			}	
		
		case 6:
		{int a,j,b,m=0;
		loop12:{system("cls");
		    cout<<endl<<endl<<endl;
			cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	        cout<<setw(68)<<"1.Dimploma in Fashion Design(3 yrs.)"<<endl<<endl;
	cout<<endl<<setw(93)<<"2.Dual Programming Diploma in Fashion Design-B.Design(6 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop12;
	        }
			loop13:{
			system("cls");
			file10_init(6);
			
			int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        {cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file10(6,1);
	       	else if(h>100 && h<=200)
	       	file10(6,2);
	       	else if(h>200 && h<=300)
	       	file10(6,3);
	       	else if(h>300 && h<=400)
	       	file10(6,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop13;
	        else
	        main();	
			}
	        else if(g==2)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file10(6,1);
	       	else if(i>=90 && i<=97.99)
	       	file10(6,2);
	       	else if(i>=80 && i<=89.99)
	       	file10(6,3);
	       	else if(i>=70 && i<=79.99)
	       	file10(6,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop13;
	        else
	        main();
			}
	        break;
		}
			}	

        case 7:
        {int a,j,b,m=0;
        loop14:{	system("cls");
		    cout<<endl<<endl<<endl;
			cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(68)<<"1.Dimploma in Lab Technology(DMLT)(3 yrs.)"<<endl<<endl;
	cout<<endl<<setw(86)<<"2.Dual Programme DMLT-B.Sc (Medical Lab. Technology)(5 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop14;
	        }
			loop15:{
			system("cls");
			file10_init(7);
			
			int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        {cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file10(7,1);
	       	else if(h>100 && h<=200)
	       	file10(7,2);
	       	else if(h>200 && h<=300)
	       	file10(7,3);
	       	else if(h>300 && h<=400)
	       	file10(7,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop15;
	        else
	        main();	
			}
	        else if(g==2)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file10(7,1);
	       	else if(i>=90 && i<=97.99)
	       	file10(7,2);
	       	else if(i>=80 && i<=89.99)
	       	file10(7,3);
	       	else if(i>=70 && i<=79.99)
	       	file10(7,4);
	       	else
	        cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop15;
	        else
	        main();
			}
	        break;}	
			}

}}

void lpu::twelve()
{int a,m=0;
	loop16:{system("cls");
    cout<<endl<<endl<<endl<<endl;
	cout<<setw(55)<<"PROGRAMMES AVAILABLE :";
	cout<<endl<<endl<<endl;
	cout<<setw(50)<<"1. Engineering"<<endl<<setw(50)<<"2. Agriculture"<<endl<<setw(49)<<"3. Management"<<endl<<setw(65)<<"4. Hotel Management & Tourism"<<endl<<setw(51)<<"5. Architecture";
    cout<<endl<<setw(53)<<"6. Fashion Design"<<endl<<setw(66)<<"7. Medical Laboratory Sciences"<<endl<<setw(54)<<"8. Food technology"<<endl;
    cout<<setw(52)<<"9. Biotechnology"<<endl<<setw(43)<<"10. Law"<<endl<<setw(49)<<"11. Fine Arts"<<endl;
    cout<<setw(55)<<"12. Performing Arts"<<endl<<setw(58)<<"13. Physical Education"<<endl<<endl;}
        if(m==0)
	    {
	    cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	    cin>>a;}
	    else
	    {
	    cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>13)
	        {
		    m=1;
		    goto loop16;
	        }	
    switch(a){
    case 1:{int q,a,b,m=0;
	        system("cls");
	 loop17:{cout<<endl<<endl<<setw(55)<<"COURSES AVAILABLE :"<<endl<<endl<<endl;
			cout<<setw(60)<<"1. Computer Science & Engg. (CSE)"<<endl<<setw(61)<<"2. Electronics & comm. Engg. (ECE)"<<endl<<setw(57)<<"3. Information Technology (IT)"<<endl<<setw(57)<<"4. Mechanical Engineering (ME)"<<endl;
			cout<<setw(58)<<"5. Agriculture Engineering (AE)"<<endl<<setw(51)<<"6.Civil Engineering (CE)"<<endl<<setw(56)<<"7.Electrical Engineering (EE)"<<endl<<setw(64)<<"8. Electrical & Electronics Engg. EEE"<<endl;
			cout<<setw(48)<<"9. Biotechnology (BT)"<<endl<<setw(58)<<"10. Automobile Engineering (AE)"<<endl<<setw(51)<<"11. Chemical Engineering"<<endl;}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>11)
	        {
		    m=1;
		    goto loop17;
	        }
		     cout<<endl<<endl<<endl;
			cout<<setw(60)<<"Choose the type of Program : "<<endl<<endl<<endl;
		    cout<<setw(57)<<"1. Regular Program (4 years)"<<endl<<setw(60)<<"2. Integrated Program (5 years)"<<endl;
			q=file12_init (11);
			int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop18:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(11,1,q);
	       	else if(h>100 && h<=200)
	       	file12(11,2,q);
	       	else if(h>200 && h<=300)
	       	file12(11,3,q);
	       	else if(h>300 && h<=400)
	       	file12(11,4,q);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop19;
	        else
	        main();	
			}
	        else if(g==2)
	        loop19:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(11,1,q);
	       	else if(i>=90 && i<=97.99)
	       	file12(11,2,q);
	       	else if(i>=80 && i<=89.99)
	       	file12(11,3,q);
	       	else if(i>=70 && i<=79.99)
	       	file12(11,4,q);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop18;
	        else
	        main();
			}
		    
		break;
	}
	
	case 2:{
		int a,b,m=0;
	    loop20:{system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose the type of Program : "<<endl<<endl<<endl;
		cout<<setw(58)<<"1. B.Sc (Hons) Agriculture (4 yrs.)"<<endl<<setw(60)<<"2. B.Sc (Hons) Horticulture (4 yrs.) "<<endl;}
	    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop20;
	        }
	    file12_init (12);
	    int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop21:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(12,1);
	       	else if(h>100 && h<=200)
	       	file12(12,2);
	       	else if(h>200 && h<=300)
	       	file12(12,3);
	       	else if(h>300 && h<=400)
	       	file12(12,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop22;
	        else
	        main();	
			}
	        else if(g==2)
	        loop22:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(12,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(12,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(12,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(12,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop21;
	        else
	        main();
			}
		break;
	}
	
	case 3:{
		int c,b;
	 system("cls");
	cout<<endl<<endl<<endl;
	cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(53)<<"1. BBA (3 yrs.)"<<endl;
	cout<<endl<<setw(68)<<"2. Integrated BBA-MBA (4 yrs.)"<<endl;
	cout<<endl<<setw(68)<<"3. Dual Degree BBA-MMA(5 yrs.)"<<endl;
	cout<<endl<<setw(77)<<"4. BBA (Information Technology)(3 yrs.)"<<endl;
	cout<<endl<<setw(77)<<"5. BBA (Oil and Gas Management)(3 yrs.)"<<endl;
	cout<<endl<<setw(60)<<"6. BBA (Hons.)(3 yrs.)"<<endl;
	cout<<endl<<setw(76)<<"7. Dual Degree BBA (Hons.)-MBA(5 yrs.)"<<endl;
	cout<<endl<<setw(71)<<"8. BBA(Financial Markets)(3 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    c=file12_init(3);
	int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop23:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(3,1,c);
	       	else if(h>100 && h<=200)
	       	file12(3,2,c);
	       	else if(h>200 && h<=300)
	       	file12(3,3,c);
	       	else if(h>300 && h<=400)
	       	file12(3,4,c);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop24;
	        else
	        main();
			}
	        else if(g==2)
	        loop24:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(3,1,c);
	       	else if(i>=90 && i<=97.99)
	       	file12(3,2,c);
	       	else if(i>=80 && i<=89.99)
	       	file12(3,3,c);
	       	else if(i>=70 && i<=79.99)
	       	file12(3,4,c);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop23;
	        else
	        main();
			}
		break;
	}
	
	case 4:{
		int c,b;
	    system("cls");
		cout<<endl<<endl<<endl;
	cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(93)<<"1. Bachelor of Hotel Mgt & Catering Technology (BHMCT)(4 yrs.)"<<endl;
	cout<<endl<<setw(66)<<"2. B.Sc. (Hotel Management)(3 yrs.)"<<endl;
	cout<<endl<<setw(80)<<"3. B.Sc. (Airlines,Tourism & Hospitality)(3 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    c=file12_init(5);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop25:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(5,1,c);
	       	else if(h>100 && h<=200)
	       	file12(5,2,c);
	       	else if(h>200 && h<=300)
	       	file12(5,3,c);
	       	else if(h>300 && h<=400)
	       	file12(5,4,c);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop26;
	        else
	        main();	
			}
	        else if(g==2)
	        loop26:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(5,1,c);
	       	else if(i>=90 && i<=97.99)
	       	file12(5,2,c);
	       	else if(i>=80 && i<=89.99)
	       	file12(5,3,c);
	       	else if(i>=70 && i<=79.99)
	       	file12(5,4,c);
	       	else
	        cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop25;
	        else
	        main();
			}
		break;
	}
	
	case 5:{
		int c,b;
	    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(58)<<"1. B.Arch. (5 yrs.)"<<endl<<endl;
	cout<<endl<<setw(58)<<"2. B.Plan. (4 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;
    c=file12_init(6);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop27:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(6,1,c);
	       	else if(h>100 && h<=200)
	       	file12(6,2,c);
	       	else if(h>200 && h<=300)
	       	file12(6,3,c);
	       	else if(h>300 && h<=400)
	       	file12(6,4,c);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop28;
	        else
	        main();
			}
	        else if(g==2)
	        loop28:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(6,1,c);
	       	else if(i>=90 && i<=97.99)
	       	file12(6,2,c);
	       	else if(i>=80 && i<=89.99)
	       	file12(6,3,c);
	       	else if(i>=70 && i<=79.99)
	       	file12(6,4,c);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop27;
	        else
	        main();
			}
		break;
	}
	
	case 6:{int b;
		file12_init(7);
		int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop29:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(7,1);
	       	else if(h>100 && h<=200)
	       	file12(7,2);
	       	else if(h>200 && h<=300)
	       	file12(7,3);
	       	else if(h>300 && h<=400)
	       	file12(7,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop30;
	        else
	        main();
			}
	        else if(g==2)
	        loop30:{
	        cout<<endl<<endl<<setw(45)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(7,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(7,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(7,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(7,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop29;
	        else
	        main();
			}
		break;
	}
	
	case 7:{
		file12_init(10);
		int g,h,b;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop31:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(10,1);
	       	else if(h>100 && h<=200)
	       	file12(10,2);
	       	else if(h>200 && h<=300)
	       	file12(10,3);
	       	else if(h>300 && h<=400)
	       	file12(10,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop32;
	        else
	        main();	
			}
	        else if(g==2)
	        loop32:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(10,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(10,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(10,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(10,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop31;
	        else
	        main();
			}
		break;
	}
	
	case 8:{int b;
		file12_init(1);
		int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop33:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(1,1);
	       	else if(h>100 && h<=200)
	       	file12(1,2);
	       	else if(h>200 && h<=300)
	       	file12(1,3);
	       	else if(h>300 && h<=400)
	       	file12(1,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop34;
	        else
	        main();
			}
	        else if(g==2)
	        loop34:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(1,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(1,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(1,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(1,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop33;
	        else
	        main();
			}
		break;
	}
	
	case 9:{
			int c,b;
	    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(69)<<"1.B.Sc. (Biotechnology)(3 yrs.)"<<endl<<endl;
	cout<<endl<<setw(76)<<"2.B.Sc. (Hons.) Biotechnology (3 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;
    c=file12_init(2);
	int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop35:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(2,1,c);
	       	else if(h>100 && h<=200)
	       	file12(2,2,c);
	       	else if(h>200 && h<=300)
	       	file12(2,3,c);
	       	else if(h>300 && h<=400)
	       	file12(2,4,c);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop36;
	        else
	        main();
			}
	        else if(g==2)
	        loop36:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(2,1,c);
	       	else if(i>=90 && i<=97.99)
	       	file12(2,2,c);
	       	else if(i>=80 && i<=89.99)
	       	file12(2,3,c);
	       	else if(i>=70 && i<=79.99)
	       	file12(2,4,c);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop35;
	        else
	        main();
			}
		break;
	}
	
	case 10:{
		int a,b,m=0;
	loop37:{    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(63)<<"1. B.A, LL.B (Hons.)(5 yrs.)"<<endl;
	cout<<endl<<setw(66)<<"2. B.Com., LL.B (Hons.)(5 yrs.)"<<endl;
	cout<<endl<<setw(63)<<"3. BBA, LL.B (Hons.)(5 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>3)
	        {
		    m=1;
		    goto loop37;
	        }
    file12_init(4);
	int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop38:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(4,1);
	       	else if(h>100 && h<=200)
	       	file12(4,2);
	       	else if(h>200 && h<=300)
	       	file12(4,3);
	       	else if(h>300 && h<=400)
	       	file12(4,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop39;
	        else
	        main();	
			}
	        else if(g==2)
	        loop39:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(4,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(4,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(4,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(4,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop38;
	        else
	        main();
			}	
		break;
	}
	
	case 11:{
		int a,b,m=0;
	loopo: {    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(63)<<"1. B.A.(Fine Arts)(3 yrs.)"<<endl;
	cout<<endl<<setw(71)<<"2. B.A. (Performing Arts) (3 yrs.)"<<endl;
	cout<<endl<<setw(75)<<"3. Bachelor of Fine Arts (BFA)(4 yrs.)"<<endl;
	cout<<endl<<setw(81)<<"4. Bachelor of Performing Arts (BPA)(4 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
            if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>4)
	        {
		    m=1;
		    goto loopo;
	        }
	file12_init(8);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop41:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(8,1);
	       	else if(h>100 && h<=200)
	       	file12(8,2);
	       	else if(h>200 && h<=300)
	       	file12(8,3);
	       	else if(h>300 && h<=400)
	       	file12(8,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop42;
	        else
	        main();	
			}
	        else if(g==2)
	        loop42:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(8,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(8,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(8,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(8,4);
	       	else
			cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop41;
	        else
	        main();
	       	
			}	
		break;
	}
	
	case 12:{int a,b,m=0;
	loop43:{    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(63)<<"1. B.A.(Fine Arts)(3 yrs.)"<<endl;
	cout<<endl<<setw(71)<<"2. B.A. (Performing Arts) (3 yrs.)"<<endl;
	cout<<endl<<setw(75)<<"3. Bachelor of Fine Arts (BFA)(4 yrs.)"<<endl;
	cout<<endl<<setw(81)<<"4. Bachelor of Performing Arts (BPA)(4 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>4)
	        {
		    m=1;
		    goto loop43;
	        }
	file12_init(8);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop44:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(8,1);
	       	else if(h>100 && h<=200)
	       	file12(8,2);
	       	else if(h>200 && h<=300)
	       	file12(8,3);
	       	else if(h>300 && h<=400)
	       	file12(8,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop45;
	        else
	        main();	
			}
	        else if(g==2)
	        loop45:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(8,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(8,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(8,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(8,4);
	       	else
			cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop44;
	        else
	        main();
	       	
			}	
		break;

	}
	
	case 13:{
		int a,b,m=0;
	 loop46:{   system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(93)<<"1. B.Sc. (Physical Education, Health Education and Sports)(3 yrs.)"<<endl;
	cout<<endl<<setw(84)<<"2. Bachelor of Physical Eduction and Sports(BPES)(3 yrs.)"<<endl;
	cout<<endl<<setw(78)<<"3. Diploma in Physical Education (D.P. Ed.)(2 yrs.)"<<endl;
	cout<<endl<<setw(52)<<"4. Diploma in Yoga(1 yr.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>4)
	        {
		    m=1;
		    goto loop46;
	        }
    file12_init(9);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop47:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file12(9,1);
	       	else if(h>100 && h<=200)
	       	file12(9,2);
	       	else if(h>200 && h<=300)
	       	file12(9,3);
	       	else if(h>300 && h<=400)
	       	file12(9,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop48;
	        else
	        main();	
	        
			}
	        else if(g==2)
	        loop48:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file12(9,1);
	       	else if(i>=90 && i<=97.99)
	       	file12(9,2);
	       	else if(i>=80 && i<=89.99)
	       	file12(9,3);
	       	else if(i>=70 && i<=79.99)
	       	file12(9,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop47;
	        else
	        main();
			}
		
		break;
	}		}}
    	
    	
void lpu::graduation()
{   int a,m=0;
	loop49:{system("cls");
    cout<<endl<<endl<<endl<<endl;
	cout<<setw(55)<<"PROGRAMMES AVAILABLE :";
	cout<<endl<<endl<<endl;
	cout<<setw(50)<<"1. Engineering"<<endl<<setw(50)<<"2. Agriculture"<<endl<<setw(49)<<"3. Management"<<endl<<setw(65)<<"4. Hotel Management & Tourism"<<endl<<setw(51)<<"5. Architecture";
    cout<<endl<<setw(53)<<"6. Fashion Design"<<endl<<setw(66)<<"7. Medical Laboratory Sciences"<<endl<<setw(54)<<"8. Food technology"<<endl;
    cout<<setw(52)<<"9. Biotechnology"<<endl<<setw(43)<<"10. Law"<<endl<<setw(49)<<"11. Fine Arts"<<endl;
    cout<<setw(55)<<"12. Performing Arts"<<endl<<setw(58)<<"13. Physical Education"<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>13)
	        {
		    m=1;
		    goto loop49;
	        }	
    switch(a){case 1:{int a,m=0,b;
	       loop50:{ system("cls");
			cout<<endl<<endl<<setw(55)<<"COURSES AVAILABLE :"<<endl<<endl<<endl;
			cout<<setw(60)<<"1. Computer Science & Engg. (CSE)"<<endl<<setw(61)<<"2. Electronics & comm. Engg. (ECE)"<<endl<<setw(57)<<"3. Information Technology (IT)"<<endl<<setw(57)<<"4. Mechanical Engineering (ME)"<<endl;
			cout<<setw(58)<<"5. Agriculture Engineering (AE)"<<endl<<setw(51)<<"6.Civil Engineering (CE)"<<endl<<setw(56)<<"7.Electrical Engineering (EE)"<<endl<<setw(64)<<"8. Electrical & Electronics Engg. EEE"<<endl;
			cout<<setw(48)<<"9. Biotechnology (BT)"<<endl<<setw(58)<<"10. Automobile Engineering (AE)"<<endl<<setw(51)<<"11. Chemical Engineering"<<endl;}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>11)
	        {
		    m=1;
		    goto loop50;
	        }
			file_ginit (11);
			int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop51:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (11,1);
	       	else if(h>100 && h<=200)
	       	file_g (11,2);
	       	else if(h>200 && h<=300)
	       	file_g (11,3);
	       	else if(h>300 && h<=400)
	       	file_g (11,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop52;
	        else
	        main();	
			}
	        else if(g==2)
	        loop52:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (11,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (11,2);
	       	else if(i>=80 && i<=89.99)
	        file_g (11,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (11,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop51;
	        else
	        main();
			}
		    
		break;
	}
	
	case 2:{
		int a,m=0,b;
	    loop53:{system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(63)<<"1. M.Sc.(Argonomy) (2 yrs.)"<<endl;
	cout<<endl<<setw(72)<<"2. M.Sc. (Vegetable Science)(2 yrs.)"<<endl;
	cout<<endl<<setw(68)<<"3. M.Sc. (Fruit Science)(2 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
	if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>3)
	        {
		    m=1;
		    goto loop53;
	        }
	    file_ginit (12);
	    int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop54:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (12,1);
	       	else if(h>100 && h<=200)
	       	file_g (12,2);
	       	else if(h>200 && h<=300)
	       	file_g (12,3);
	       	else if(h>300 && h<=400)
	       	file_g (12,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop55;
	        else
	        main();	
	        
			}
	        else if(g==2)
	        loop55:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (12,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (12,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (12,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (12,4);
	       	else
	        cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop54;
	        else
	        main();
			}
		break;
	}
	
	case 3:{
		int q,b;
	    system("cls");
		cout<<endl<<endl<<endl;
	cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(53)<<"1. MBA (3 yrs.)"<<endl;
	cout<<endl<<setw(61)<<"2. MBA (Hons.) (2 yrs.)"<<endl;
	cout<<endl<<setw(65)<<"3. MBA (E-Commerce)(2 yrs.)"<<endl;
	cout<<endl<<setw(77)<<"4. MBA (Information Technology)(2 yrs.)"<<endl;
	cout<<endl<<setw(77)<<"5. MBA (Oil and Gas Management)(2 yrs.)"<<endl;
	cout<<endl<<setw(80)<<"6. MBA (Supply Chain & Logistics) (2 yrs.)"<<endl;
	cout<<endl<<setw(71)<<"7. MBA(Financial Markets)(2 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    q=file_ginit (3);
	int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop56:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (3,1,q);
	       	else if(h>100 && h<=200)
	       	file_g (3,2,q);
	       	else if(h>200 && h<=300)
	       	file_g (3,3,q);
	       	else if(h>300 && h<=400)
	       	file_g (3,4,q);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop57;
	        else
	        main();	
			}
	        else if(g==2)
	        loop57:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (3,1,q);
	       	else if(i>=90 && i<=97.99)
	       	file_g (3,2,q);
	       	else if(i>=80 && i<=89.99)
	       	file_g (3,3,q);
	       	else if(i>=70 && i<=79.99)
	       	file_g (3,4,q);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop56;
	        else
	        main();
			}
		break;
	}
	
	case 4:{
		int b;
	    system("cls");
    file_ginit (5);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop58:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (5,1);
	       	else if(h>100 && h<=200)
	       	file_g (5,2);
	       	else if(h>200 && h<=300)
	       	file_g (5,3);
	       	else if(h>300 && h<=400)
	       	file_g (5,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop60;
	        else
	        main();	
			}
	        else if(g==2)
	        loop60:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (5,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (5,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (5,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (5,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop58;
	        else
	        main();
			}
		break;
	}
	
	case 5:{
		int q,b;
	    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(58)<<"1. M.Arch. (3 yrs.)"<<endl<<endl;
	cout<<endl<<setw(58)<<"2. M.Plan. (2 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;
    q=file_ginit (8);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop61:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	        file_g (8,1,q);
	       	else if(h>100 && h<=200)
	       	file_g (8,2,q);
	       	else if(h>200 && h<=300)
	       	file_g (8,3,q);
	       	else if(h>300 && h<=400)
	       	file_g (8,4,q);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop62;
	        else
	        main();
			}
	        else if(g==2)
	        loop62:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (8,1,q);
	       	else if(i>=90 && i<=97.99)
	       	file_g (8,2,q);
	       	else if(i>=80 && i<=89.99)
	       	file_g (8,3,q);
	       	else if(i>=70 && i<=79.99)
	       	file_g (8,4,q);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop61;
	        else
	        main();
			}
		break;
	}
	
	case 6:{
		file_ginit (7);
		int g,h,b;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop63:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (7,1);
	       	else if(h>100 && h<=200)
	       	file_g (7,2);
	       	else if(h>200 && h<=300)
	       	file_g (7,3);
	       	else if(h>300 && h<=400)
	       	file_g (7,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop64;
	        else
	        main();
			}
	        else if(g==2)
	        loop64:{
	        cout<<endl<<endl<<setw(40)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (7,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (7,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (7,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (7,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop63;
	        else
	        main();
			}
		break;
	}
	
	case 7:{int a,m=0;
	loop65:{    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(68)<<"1. M.Sc. (Clinical Microbiology)(2 yrs.)"<<endl<<endl;
	cout<<endl<<setw(68)<<"2. M.Sc. (Clinical Biochemistry)(2 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop65;
	        }
		file_ginit (9);
		int g,h,b;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop66:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (9,1);
	       	else if(h>100 && h<=200)
	       	file_g (9,2);
	       	else if(h>200 && h<=300)
	       	file_g (9,3);
	       	else if(h>300 && h<=400)
	       	file_g (9,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop67;
	        else
	        main();
			}
	        else if(g==2)
	        loop67:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (9,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (9,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (9,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (9,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop66;
	        else
	        main();
			}
		break;
	}
	
	case 8:{
		int a,m,b=0;
	loop68: {   system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(68)<<"1. M.Sc. (Food Technology)(2 yrs.)"<<endl<<endl;
	cout<<endl<<setw(74)<<"2. M.Sc. (Nutrition & Dietetics)(2 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop68;
	        }
		file_ginit (1);
		int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop69:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (1,1);
	       	else if(h>100 && h<=200)
	       	file_g (1,2);
	       	else if(h>200 && h<=300)
	       	file_g (1,3);
	       	else if(h>300 && h<=400)
	       	file_g (1,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop70;
	        else
	        main();	
			}
	        else if(g==2)
	        loop70:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (1,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (1,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (1,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (1,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop69;
	        else
	        main();
			}
		break;
	}
	
	case 9:{
			int a,m=0,b;
	    loop71:{system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(69)<<"1.B.Sc. (Biotechnology)(3 yrs.)"<<endl<<endl;
	cout<<endl<<setw(76)<<"2.B.Sc. (Hons.) Biotechnology (3 yrs.)";
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop71;
	        }
    file_ginit (2);
	int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop72:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (2,1);
	       	else if(h>100 && h<=200)
	       	file_g (2,2);
	       	else if(h>200 && h<=300)
	       	file_g (2,3);
	       	else if(h>300 && h<=400)
	       	file_g (2,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop73;
	        else
	        main();
			}
	        else if(g==2)
	        loop73:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (2,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (2,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (2,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (2,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop72;
	        else
	        main();
			}
		break;
	}
	
	case 10:{
    file_ginit (4);
	int g,h,b;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop74:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (4,1);
	       	else if(h>100 && h<=200)
	       	file_g (4,2);
	       	else if(h>200 && h<=300)
	       	file_g (4,3);
	       	else if(h>300 && h<=400)
	       	file_g (4,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop75;
	        else
	        main();	
			}
	        else if(g==2)
	        loop75:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (4,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (4,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (4,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (4,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop74;
	        else
	        main();
			}	
		break;
	}
	
	case 11:{
		int a,b,m=0;
	loop76:{    system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(63)<<"1. Masters of Fine Arts (MFA)(2 yrs.)"<<endl;
	cout<<endl<<setw(54)<<"2. M.A. (Fine Arts) (2 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop76;
	        }
    file_ginit (8);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop77:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (8,1);
	       	else if(h>100 && h<=200)
	       	file_g (8,2);
	       	else if(h>200 && h<=300)
	       	file_g (8,3);
	       	else if(h>300 && h<=400)
	       	file_g (8,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop78;
	        else
	        main();	
	       }
	        else if(g==2)
	        loop78:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (8,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (8,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (8,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (8,4);
	       	else
	       	 cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop77;
	        else
	        main();
			}	
		break;
	}
	
	case 12:{
		int a,b,m=0;
	    loop791:{system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(63)<<"1. M.A.(Performing Arts- Music)(2 yrs.)"<<endl;
	cout<<endl<<setw(66)<<"2. M.A. (Performing Arts-Theatre) (2 yrs.)"<<endl;
	cout<<endl<<setw(63)<<"3. M.A.(Performing Arts- Dance)(2 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>3)
	        {
		    m=1;
		    goto loop791;
	        }
	        
    file_ginit (8);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop80:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (8,1);
	       	else if(h>100 && h<=200)
	       	file_g (8,2);
	       	else if(h>200 && h<=300)
	       	file_g (8,3);
	       	else if(h>300 && h<=400)
	       	file_g (8,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop81;
	        else
	        main();	
			}
	        else if(g==2)
	        loop81:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (8,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (8,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (8,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (8,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop80;
	        else
	        main();
			}
		
		break;
	}
	
	case 13:{
		int a,m=0,b;
	    loop82:{system("cls");
		cout<<endl<<endl<<endl;
		cout<<setw(60)<<"Choose Duration :"<<endl<<endl<<endl<<endl;
	cout<<setw(63)<<"1. B.P.Ed. (2 yrs.)"<<endl;
	cout<<endl<<setw(63)<<"2. M.P.Ed. (2 yrs.)"<<endl;
	cout<<endl<<setw(84)<<"3. Master of Physical Education and Sports (MPES)(2 yrs.)"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>3)
	        {
		    m=1;
		    goto loop82;
	        }
    file_ginit (13);
    int g,h;
	float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop83:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_g (13,1);
	       	else if(h>100 && h<=200)
	       	file_g (13,2);
	       	else if(h>200 && h<=300)
	       	file_g (13,3);
	       	else if(h>300 && h<=400)
	       	file_g (13,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop84;
	        else
	        main();	
			}
	        else if(g==2)
	        loop84:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_g (13,1);
	       	else if(i>=90 && i<=97.99)
	       	file_g (13,2);
	       	else if(i>=80 && i<=89.99)
	       	file_g (13,3);
	       	else if(i>=70 && i<=79.99)
	       	file_g (13,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop83;
	        else
	        main();
			}
		
		break;
	}		}
    	
}
	
void lpu::lateral(){
	int r,a,b,m=0;
	loop85:{system("cls");
    cout<<endl<<endl<<endl<<endl;
	cout<<setw(55)<<"PROGRAMMES AVAILABLE :";
	cout<<endl<<endl<<endl;
	cout<<setw(65)<<"1. Engineering (Diploma)(2 yrs.)"<<endl<<endl<<setw(97)<<"2. Architecture (Diploma in Architectural Assistantship)(2 yrs.)"<<endl<<endl;}
    if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop85;
	        }	
	switch(a)
	{
		case 1:
		{   int a,b,m=0;
		    loop86:{system("cls");
			cout<<endl<<endl<<setw(55)<<"COURSES AVAILABLE :"<<endl<<endl<<endl;
			cout<<setw(60)<<"1. Computer Science & Engg. (CSE)"<<endl<<setw(61)<<"2. Electronics & comm. Engg. (ECE)"<<endl<<setw(57)<<"3. Information Technology (IT)"<<endl<<setw(57)<<"4. Mechanical Engineering (ME)"<<endl;
			cout<<setw(51)<<"5.Civil Engineering (CE)"<<endl<<setw(56)<<"7.Electrical Engineering (EE)";}
			if(m==0)
	        {
	        cout<<endl<<endl<<setw(60)<<"Enter the program you want to choose : ";
	        cin>>a;}
	        else
	        {
	        cout<<setw(50)<<endl<<"Wrong choice! Try again : ";
	        cin>>a;}
	        if(a<=0 || a>2)
	        {
		    m=1;
		    goto loop86;
	        }
			file_latei (1);
			int g,h;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 12th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop87:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_late (1,1);
	       	else if(h>100 && h<=200)
	       	file_late (1,2);
	       	else if(h>200 && h<=300)
	       	file_late (1,3);
	       	else if(h>300 && h<=400)
	       	file_late (1,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 12th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop88;
	        else
	        main();
			}
	        else if(g==2)
	        loop88:{
	        cout<<endl<<endl<<setw(60)<<"Enter your 12th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_late (1,1);
	       	else if(i>=90 && i<=97.99)
	       	file_late (1,2);
	       	else if(i>=80 && i<=89.99)
	       	file_late (1,3);
	       	else if(i>=70 && i<=79.99)
	       	file_late (1,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop87;
	        else
	        main();
			}
		break;
		 } 
		 
	case 2:
	{  
	system("cls");
			cout<<endl<<endl<<endl;
			file_latei (2);
			int g,h,b;
	        float i;
	        cout<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(70)<<"SCHOLARSHIP CALCULATOR :"<<endl;
			cout<<setw(70)<<"========================";
	        cout<<endl<<endl<<setw(53)<<"Select the criteria for scholarship : "<<endl;
	        cout<<setw(30)<<"1. LPUNEST rank"<<endl<<setw(42)<<"2. Aggregate marks in 10th "<<endl<<endl;
	        cin>>g;
	        if(g==1)
	        loop89:{cout<<endl<<endl<<setw(45)<<"Enter your LPUNEST rank : ";
	        cin>>h;
	       	if(h>=1 && h<=100)
	       	file_late (2,1);
	       	else if(h>100 && h<=200)
	       	file_late (2,2);
	       	else if(h>200 && h<=300)
	       	file_late (2,3);
	       	else if(h>300 && h<=400)
	       	file_late (2,4);
	       	else
	       	cout<<endl<<endl<<setw(70)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with 10th aggregate "<<endl;
	        cout<<endl<<setw(63)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop90;
	        else
	        main();
			}
	        else if(g==2)
	        loop90:{
	        cout<<endl<<endl<<setw(40)<<"Enter your 10th Aggregate percent : ";
			cin>>i;
			if(i>=98)
	       	file_late (2,1);
	       	else if(i>=90 && i<=97.99)
	       	file_late (2,2);
	       	else if(i>=80 && i<=89.99)
	       	file_late (2,3);
	       	else if(i>=70 && i<=79.99)
	       	file_late (2,4);
	       	else
	       	cout<<endl<<endl<<setw(74)<<"Sorry scholarship is not available for this rank. ";
	       	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	        cout<<setw(80)<<"Press 1 to check scholarship with LPUNEST rank "<<endl;
	        cout<<endl<<setw(65)<<"Press 2 to go back to main menu ";
	        cout<<endl<<endl<<setw(60)<<"Enter your choice : ";
	        cin>>b;
	        if(b==1)
	        goto loop89;
	        else
	        main();
			}
		break;
		 }	 
	}
}	

