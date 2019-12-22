#include"variables.cpp"
using namespace std;
extern int fatigue;
extern int intelligence;
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
		fatigue++;
	}
	if(choice1==2)
	{
		cout<<"You stay still and do not move, you try to figure out where you are and what happened to you."<<endl;
		intelligence++;
	cin.ignore();
	cout<<" "<<endl;;

}