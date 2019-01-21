//Password: Rishav

 #include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<process.h>
#include<time.h>
#include<Windows.h>

using namespace std;

//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) 
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/*Class Declaration Starts*/
class Purchase
{
	char Name[80];    //Name of customer
	unsigned Bill_No;  //Bill Number Automatically generated
	unsigned Total_Cost;  //total cost 
	int items_purchased[10]; //code of items purchased;
	int NOI;  //Number of items purchased
	char mob[15];
	char email[80];
	int quantity[10];
	time_t current_time;
	unsigned COST[10];
	int Products[9];
	
	
	public:
		 Purchase()
		 {
		 	Bill_No=0;
		 	Products[0]=300;  Products[4]=50;
			Products[1]=200;  Products[5]=150;
			Products[2]=200;  Products[6]=100;
			Products[3]=300;   Products[7]=50;
			Products[8]=100;
			/*Pendrive=300;  Printer=200;    Antivirus=200; 
			Modem=300;     Processor=50;   Mouse=150; 
			Keyboard=100;  Motherboard=50; OS=100;*/
		 }
		
		void New_Purchase();
		void ask_items();
		void show_invoice();
		int show_products();
		void Product_detail(int);
		void Sale_invoice();
		void Bill1();
		void Bill2();
		void Products1();
		void Products2();
		void Show_Availability();
		int get_bill_no()
		{
			return Bill_No;
		}
		void mobile(char[]);
		
		
}p;

//show_products() Start
int Purchase::show_products()
{    int i;
	while(1)
	{ system("cls");
	gotoxy(30,6);
	cout<<"Place Order";
	gotoxy(28,7);
	cout<<"===============";	
	gotoxy(8,9);
	cout<<"1. Pendrive"; 
	gotoxy(8,10);
	cout<<"2. Printer"; 
	gotoxy(8,11);
	cout<<"3. Antivirus"; 
	gotoxy(8,12);
	cout<<"4. Modem"; 
	gotoxy(8,13);
	cout<<"5. Processor"; 
	gotoxy(8,14);
	cout<<"6. Mouse"; 
	gotoxy(8,15);
	cout<<"7. Keyboard;"; 
	gotoxy(8,16);
	cout<<"8. MotherBoard"; 
	gotoxy(8,17);
	cout<<"9. Operating Sytems"; 
	gotoxy(8,18);
	   cout<<"\n\tEnter Your Choice: ";char n; n=getche();
	   if(isdigit(n))
	     return (int(n-48));
	   else
	     {
	     	cout<<"Enter a Valid Entry";
	     	for(i=0;i<3;i++)
	     	 {
	     	 	Sleep(250);cout<<".";Sleep(250);
			  }
			  continue;
		   }  
	   
}
}
//show_products() end

//Product_detail() start
void Purchase::Product_detail(int n)
{   
    system("cls");
	switch(n)
	{
		case 1:
			{
				gotoxy(25,5);
				cout<<" Sony Pendrive(16GB)  :   Rs 350\n\n";
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
			
		case 2:
			{
				gotoxy(25,5);
				cout<<" HP Inkjet Printer    :   Rs 15,000\n\n"; 
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
		case 3:
			{
				gotoxy(25,5);
				cout<<" Norton Antivirus     :   Rs 875\n\n"; 
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}		
		case 4:
			{
				gotoxy(25,5);
				cout<<" Huawei 3G Modem      :   Rs 3000\n\n";
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
		case 5:
			{
				gotoxy(25,5);
				cout<<" Intel Core i3 4g     :   Rs 25,000\n\n";
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
		case 6:
			{
				gotoxy(25,5);
				cout<<" ProDot Mouse         :   Rs 300\n\n"; 
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
		case 7:
			{
				gotoxy(25,5);
				cout<<" iball Keyboard       :   Rs 550\n\n"; 
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
		case 8:
			{
				gotoxy(25,5);
				cout<<" Gigabyte Motherboard :   Rs 15,500\n\n"; 
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
		case 9:
			{
				gotoxy(25,6);
				cout<<" Windows 7 Ultimate   :   Rs 7,500\n\n"; 
				gotoxy(25,7);
				cout<<"Quantity: ";cin>>quantity[NOI]; 
				items_purchased[NOI]=n;
				NOI++;
				break;
			}
		default:
		    {
		    	gotoxy(25,5);
		    	cout<<"Enter a valid entry";
		    	for(int i=0;i<3;i++)
		    	{
		    		Sleep(250);
		    		cout<<".";
		    		Sleep(250);
				}
				system("cls");
				break;	
						
			}							
	}
	
}
//Product_detail() End

//ask_items() start
void Purchase::ask_items()
{
	int i=0,j,k; char ch;NOI=0;
	
    while(1)
     {
	   system("cls");
	   gotoxy(30,5);
       cout<<"Products";
	   gotoxy(29,6);
	   cout<<"___________";
	   gotoxy(29,7);
	   cout<<"-----------";
	   j=show_products();
	   Product_detail(j);
	    lab:
	   cout<<"\n\n\t\tDo You want to purchase more(Y/N)?";ch=getche();
	   if(ch=='N'||ch=='n')
	     break;
	   else if(ch=='y'||ch=='Y')
	     continue; 
		else
		 {
		 	cout<<"\n\nEnter a Valid Entry.";
		 	Sleep(1000);
		 	goto lab;
		   }  
	   
     }	
}
//ask_items() end

//New_Purchase() start
void Purchase::New_Purchase()
{
	system("cls");
    Bill2();
    Products2();
	Bill_No++;
	gotoxy(30,5);
	cout<<"New Order";
	gotoxy(29,6);
	cout<<"___________";
	gotoxy(29,7);
	cout<<"-----------";
	gotoxy(23,10);
	cout<<"Bill Number: ";gotoxy(40,10);cout<<Bill_No;
	gotoxy(23,12);
	cout<<"Enter Name:";
	gotoxy(40,12);
	cin.getline(Name,80);
	gotoxy(23,14);
	cout<<"Enter Mobile No:";
	gotoxy(40,14); cout<<"+91 "; mobile(mob);
	gotoxy(23,16);
	cout<<"Enter Email: ";
	gotoxy(40,16);
	cin.getline(email,80);
	ask_items();
	time(&current_time);
	Sale_invoice();
	cin.ignore();
	
}
//New_Purchase() End
//Sale_Invoice() start
void Purchase::Sale_invoice()
{   
    int i,j;
    Total_Cost=0;
	system("cls");
	gotoxy(30,1);
	cout<<"Sale Invoice";
	gotoxy(28,2);
	cout<<"________________";
	gotoxy(28,3);
	cout<<"----------------\n";
	gotoxy(5,5);
	cout<<"Bill Number: "<<Bill_No;
	gotoxy(5,6);
	cout<<"Customer Name: "<<Name;
	gotoxy(45,6);
	cout<<ctime(&current_time);
	gotoxy(5,8); cout<<"Mobile No.: +91 "<<mob;
	gotoxy(45,8); cout<<"Email: "<<email;
	gotoxy(3,9);
	cout<<"___________________________________________________________________________\n";
	gotoxy(10,10);
	cout<<"Items";
	gotoxy(40,10); cout<<"Quantity";
	gotoxy(60,10); cout<<"Cost";
	cout<<"\n   ___________________________________________________________________________\n\n";
	for(i=0;i<NOI;i++)
	{
		switch(items_purchased[i])
		{
		   case 1:
			{   gotoxy(5,13+i);
				cout<<i+1<<". Sony Pendrive(16GB)  ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*350;
				COST[i]=quantity[i]*350;
				Products[0]=Products[0]-quantity[i];break;
			}
			
		case 2:
			{
				gotoxy(5,13+i);
				cout<<i+1<<". HP Inkjet Printer   ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*15000;
				COST[i]=quantity[i]*15000;
				Products[1]=Products[1]-quantity[i];break;
			}
		case 3:
			{
				gotoxy(5,13+i);
				cout<<i+1<<". Norton Antivirus   ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*875;
				COST[i]=quantity[i]*875;
				Products[2]=Products[2]-quantity[i];break;
			}		
		case 4:
			{
				gotoxy(5,13+i);
				cout<<i+1<<". Huawei 3G Modem   ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*3000;
				COST[i]=quantity[i]*3000;
				Products[3]=Products[3]-quantity[i];break;
			}
		case 5:
			{
				gotoxy(5,13+i);
				cout<<i+1<<". Intel Core i3 4g   ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*25000;
				COST[i]=quantity[i]*25000;
				Products[4]=Products[4]-quantity[i];break;
			}
		case 6:
			{
				gotoxy(5,13+i);
				cout<<i+1<<". ProDot Mouse   ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*300;
				COST[i]=quantity[i]*300;
				Products[5]=Products[5]-quantity[i];break;
			}
		case 7:
			{
				gotoxy(5,13+i);
				cout<<i+1<<". iball Keyboard    ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*550;
				COST[i]=quantity[i]*550;
				Products[6]=Products[6]-quantity[i];break;
			}
		case 8:
			{
				gotoxy(5,13+i);
				cout<<i+1<<". Gigabyte Motherboard    ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*15500;
				COST[i]=quantity[i]*15500;
				Products[7]=Products[7]-quantity[i];break;
			}
		case 9:
			{
				gotoxy(5,13+i);
				cout<<i<<". Windows 7 Ultimate     ";
				gotoxy(40,13+i); cout<<quantity[i];
				gotoxy(58,13+i); cout<<"Rs"<<quantity[i]*7500;
				COST[i]=quantity[i]*7500;
				Products[8]=Products[8]-quantity[i];break;
			}	
		}
	}
	cout<<"\n   ___________________________________________________________________________\n";
	 
	for(j=0;j<NOI;j++)
	  Total_Cost=Total_Cost+COST[j];
	gotoxy(40,12+i+2);
	cout<<"Total Cost:       Rs"<<Total_Cost;  
}
//Sale invoice end

void Purchase::Bill1() 
{
	ofstream file;
	file.open("data.dat",ios::out);
	file<<Bill_No;
}
void Purchase::Bill2()
{
	
	ifstream file;
	unsigned i;
	file.open("data.dat",ios::in);
	if(!file)
	{cout<<".";
	}
	else
	{
	file>>i;
	Bill_No=i;}
}
void Purchase::Show_Availability()
{
	p.Products2();
	system("cls");
	gotoxy(25,2);
	cout<<"Products available";
	gotoxy(24,3);
	cout<<"====================";
	gotoxy(10,6);
	cout<<"Products";
	gotoxy(40,6);
	cout<<"Availability";
	gotoxy(8,7);
	cout<<"_______________________________________________________"; /*Pendrive=300;  Printer=200;    Antivirus=200; 
			                                                             Modem=300;     Processor=50;   Mouse=150; 
		                                                                 	Keyboard=100;  Motherboard=50; OS=100;*/
			
	gotoxy(8,9);
	cout<<"1. Pendrive"; gotoxy(40,9);cout<<Products[0];
	gotoxy(8,10);
	cout<<"2. Printer"; gotoxy(40,10);cout<<Products[1];
	gotoxy(8,11);
	cout<<"3. Antivirus"; gotoxy(40,11);cout<<Products[2];
	gotoxy(8,12);
	cout<<"4. Modem"; gotoxy(40,12);cout<<Products[3];
	gotoxy(8,13);
	cout<<"5. Processor"; gotoxy(40,13);cout<<Products[4];
	gotoxy(8,14);
	cout<<"6. Mouse"; gotoxy(40,14);cout<<Products[5];
	gotoxy(8,15);
	cout<<"7. Keyboard;"; gotoxy(40,15);cout<<Products[6];
	gotoxy(8,16);
	cout<<"8. MotherBoard"; gotoxy(40,16);cout<<Products[7];
	gotoxy(8,17);
	cout<<"9. Operating Sytems"; gotoxy(40,17);cout<<Products[8];
    cin.ignore();
	
}

void Purchase::Products1()
{
	ofstream file;
	file.open("obb.dat",ios::out);
	for(int i=0;i<9;i++)
	 file<<Products[i]<<" ";
	file.close();
}
void Purchase::Products2()
{
	int a[9],i;
	ifstream file;
	file.open("obb.dat",ios::in);
	if(!file)
	  {
	  cout<<".";}
	else
	  {
	  	  for(i=0;i<9;i++)
	  	      { file>>a[i];
				Products[i]=a[i];
			}
		} 
	file.close();

		 
}

void Purchase::mobile(char mob[])
{
	char ch;
	int k=0;
	do{
		ch=getch();
		 if(ch!=13)
		 {
		 	if(ch==8&&k>0)
		 	 {
			  cout<<"\b \b";k--;}
		 	else if(isdigit(ch)&&k>=0&&k<10)
		 	   {
		 	   	  mob[k++]=ch;
		 	   	  cout<<ch;
				}
		 }
	}while(ch!=13);
	mob[k]='\0';
}
/*Class Declaration Ends*/

/*Various Functions Used*/
void write_data()
{
	ofstream file;
	file.open("Record.dat",ios::out|ios::app);
	file.write((char*)&p,sizeof(p));
	file.close();
	p.Bill1();
	p.Products1();
}

void Search_Record()
{
	system("cls");
	fstream file;
	char found='f'; int search;
	gotoxy(30,2);
	cout<<"Search Record";
	gotoxy(29,3);
	cout<<"===============";
	gotoxy(25,6);
	cout<<"Enter Bill Number: ";
	gotoxy(45,6); 
	cin>>search;
	file.open("Record.dat",ios::in);
	if(!file)
	  cout<<"\n\n\t\t\tNo Purchasings Yet!";
	else
	{ 
	  while(!file.eof())
	  {
	  	file.read((char*)&p,sizeof(p));
	  	if(file.eof())
		   break;
	  	 else{
		    if(p.get_bill_no()==search)
	  	    
	  	      { found='t';
				p.Sale_invoice();
				break;}	
			  }
	  }
	  if(found=='f')
	   cout<<"\n \n\t\t\t No Records Found!\n";
		
	  }
	file.close(); 
	getch();   
}

void Delete_Record()
{
	system("cls");
	fstream file,file2;
	file.open("Record.dat",ios::in);
	file2.open("temp.dat",ios::out|ios::app);
	char found='f'; int search;
	gotoxy(30,2);
	cout<<"Delete Record";
	gotoxy(29,3);
	cout<<"===============";
	gotoxy(25,6);
	cout<<"Enter Bill Number: ";
	gotoxy(45,6); 
	cin>>search;
	if(!file)
	  cout<<"\n\n\t\t\tNo Purchasings Yet!";
	else
	{ 
	  while(!file.eof())
	  {
	  	file.read((char*)&p,sizeof(p));
	  	if(file.eof())
		   break;
	  	 else{
		    if(p.get_bill_no()==search)
	  	      {  found='t';
				 p.Sale_invoice();
	  	        cout<<"\n\n\t\tDo you want to delete this record(Y/N)?";
	  	        char ch;
	  	        ch=getche();
	  	        if(ch=='n'||ch=='N')
	  	          file2.write((char*)&p,sizeof(p));
	  	       	
			  }
			 else
			   file2.write((char*)&p,sizeof(p));
	  }
		
	  }
	  if(found=='f')
	   cout<<" \n \n\t\t\t No Records Found! \n";
	  file.close();
	  file2.close();
	  remove("Record.dat");
	  rename("temp.dat","Record.dat");
	  Sleep(1000);
	
}
}

char Welcome_Screen()
{
	system("cls");
	char choice;
	gotoxy(25,2);
	Sleep(250);
	  cout<<"Ultron Computer Shop";
	gotoxy(22,3);
	  cout<<"==========================";
	gotoxy(15,6);
	Sleep(150);
	  cout<<"1. New Purchase";
	Sleep(150);  
 	gotoxy(15,8);
   	  cout<<"2. Search Record";
   	Sleep(150);  
	gotoxy(15,10);
	  cout<<"3. Delete Record";
	Sleep(150);  
	gotoxy(15,12);
	  cout<<"4. Products Availabilty";
	Sleep(150);  
	gotoxy(15,14);
	  cout<<"5. About";
	Sleep(150);  
	gotoxy(15,16);
	  cout<<"0. Exit";
	Sleep(150);  
	gotoxy(18,18);
	Sleep(300);
	  cout<<"Enter your choice: "; choice=getche();
	 
	return choice;       
}
void about()
{    
    system("cls");
    gotoxy(25,5);
	cout<<"Not declared yet"<<char(3);
	getch();
}
/*Functions Declarations End*/
int main()
{
	char cH,I;
	char a[20],ch,g;
	char e[21]="Exiting From Program";
	int i,j=0,k=0;
	gotoxy(30,3);
	Sleep(100);
	cout<<"INTRODUCTION";
	gotoxy(30,4);
	Sleep(100);
	cout<<"------------";
	gotoxy(15,10);
	Sleep(100);
	cout<<"Partners:- i)Rishav Singh  \n\t\t\t  ii)Rajiv Nayan Choubay ";
	gotoxy(15,14);
	Sleep(100);
	cout<<"Class:- XII-Sci-A";
	gotoxy(15,16);
	Sleep(100);
	cout<<"In Assistance of:- Ajit Pratab Singh";
	gotoxy(15,18);
	Sleep(100);
	cout<<"Date:- 5th-October-2015";
	Sleep(3000);
	X:system("cls");
	gotoxy(33,3);
	cout<<"WELCOME \n\n\t\t\t\t    TO\n\n\t\t\t     ULTRON COMPUTERS";
	gotoxy(33,4);cout<<"-------";
	gotoxy(36,6);cout<<"--";
	gotoxy(29,8);cout<<"----------------";
	gotoxy(25,10);
	cout<<"Enter Password:";
	while(1)
	{
		ch=getch();
		if(ch=='\r') break;
		else if(ch=='\b')
		{	j=0;
			system("cls");
			goto X;
		}a[j]=ch;
		cout<<"*";
		j++;
	}a[j]='\0';
	if(strcmp(a,"Rishav")==0)
	{
		system("cls");
		//load();
		gotoxy(30,18);
		cout<<"Loading:";
	    for(i=0,j=0;j<=50;i++,j++)
	{
		gotoxy(j+15,20);
		cout<<(char)219;
		gotoxy(38,18);		
		cout<<i*2<<"%"<<"\b\b";
		Sleep(50);
	}
	}
	else
	{
		
		if(k==3)
		{
			
			system("cls");
			gotoxy(25,10);
			{   for(i=0;e[i]!='\0';i++)
	            {
		            cout<<e[i];
		            Sleep(100);
	            }
			}
			Sleep(3000);
			system("cls");
			exit(0);			
		}
		++k;
		j=0;
		goto X;
	}
	while(1)
	{
		cH=Welcome_Screen();
		if(isdigit(cH))
		{		
		   switch(cH)
		 {
			case '1':
				{
					p.New_Purchase();
					write_data();
					break;
				}
			case '2':
			    {
			    	Search_Record();
			    	break;
				}
			case '3':
			    {
				    Delete_Record();
			        break;
			    }
			case '4':
			    {
			    	p.Show_Availability();
			    	break;
		    	}
			case '5':
		     	{
			    	about();
			    	break;
		     	}
			case '0':
		    	{
			    	exit(0);
		    	}
		    default:
		    	{
			    	cout<<"\n\n\t\t Enter a Valid Entry";
			    	for(I=0;I<3;I++)
			    	  {
			    	  	Sleep(250);
			    	  	cout<<".";
			    	  	Sleep(250);
			     	  }
			    	continue;
				}	
									
	     }
	}
	else
	{
		cout<<"\n\n\t\tEnter a Valid Entry: ";
		for(I=0;I<3;I++)
			    	  {
			    	  	Sleep(250);
			    	  	cout<<".";
			    	  	Sleep(250);
			     	  }
			     continue;	  
	}
		cin.ignore();
	}
	return 0;
}


