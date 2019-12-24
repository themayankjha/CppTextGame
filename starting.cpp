#include"variables.cpp"
using namespace std;
extern playerclass player;
void starting()
{
    int choice1;
	cout << "\"Open your eyes soldier.\" You hear someone speak softly in your ear." << endl;
    cin.ignore();
	cout << "Enter 1 to open your eyes." << endl;
	cout << "Enter 2 to lay back and do nothing." << endl;
	cin>>choice1;
	cout<<" "<<endl;
	if(choice1==1)
	{
		cout<<"You Gently Open Your Eyes. You cannot see properly,the light is hurting your eyes.You flinch and close your eyes rapidly."<<endl;
		player.fatiguechange(+1);
		cout<<" "<<endl;
		cout <<"Careful, Careful Now. You should stay still, the wound is still open. The bullet is out but try not to move too much and you'll be fine"<< endl;
		cin.ignore();
		cout<<"Open your eyes,Slowly,I need to check your pupils."<<endl;
		cin.ignore();
	}
	if(choice1==2)
	{
		cout<<"You stay still and do not move, you try to figure out where you are and what happened to you."<<endl;\
		player.intelligencechange(+1);
		cout<<" "<<endl;
		cout<<"I know you\'re awake soldier, slowly open your eyes , I need to check your pupils."<<endl;
		cin.ignore();
		cout<<"You should stay still, the wound is still open. The bullet is out but try not to move too much and you'll be fine"<<endl;
		cin.ignore();
	}
	
	cout<<" "<<endl;;
	cout << "You slowly force your eyes open. There is fog all around you. You cannot see anyone, not even the voice that is telling you to open your eyes" << endl;
	cin.ignore();
	cout << "Suddenly you feel a sharp light hitting your eyes, you reflexively close your eyes"<<endl;
	cin.ignore();
	cout << "Ouch!, You hear yourself cry out"<<endl;
	cin.ignore();
	cout << "Stay Still. You hear the soft voice tell you sternly."<<endl;
	cin.ignore();
	cout << "You've suffered a mild concussion, It'll be alright, you need some rest and youll be back to killing those germans soon"<<endl;
	cin.ignore();
}