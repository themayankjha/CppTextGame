#include<stdlib.h>
using namespace std;
extern void splash();
void menuchoose();
void doaschoice();
void menu()
{
menuchoose();
doaschoice();
}
int menuchoice;
void menuchoose()
{   
	cout << "1. Start a New Game. " << endl;
	cout << "2. Continue Previous Game." <<endl;
	cout << "3. Misiion Select"<<endl;
	cout << "4. Credits"<<endl;
	cout << "5. Exit"<<endl;
	cin>>menuchoice;
}

void doaschoice()
{
/*if(menuchoice==1)
    newgame();
else if(menuchoice==2)
    continuegame();
else if(menuchoice==3)
    selectmission();*/
 if(menuchoice==4)
    splash();
else if(menuchoice==5)
    exit(0);



}