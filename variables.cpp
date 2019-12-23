class playerclass
{
int charm;
int intelligence;
int fatigue;
public:
playerclass()
{
    charm=0;
    intelligence=0;
    fatigue=0;
}
void fatiguechange(int a){
    fatigue=fatigue+a;
}
void intelligencechange(int a){
    intelligence=intelligence+a;
}
};
playerclass player;