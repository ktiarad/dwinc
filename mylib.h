typedef char* String;
typedef struct{
    int id;
    String name;
    int attack;
    int defense;
    int energy;
}Spec;
void greeting();
void rules();
void showTeam();
void listOfficer(int x, String *nameOfficer, int *attack, int *defense);
void showOfficer(int x);
void showArena(Spec p1Officer[6],Spec p2Officer[6]);
int doAttack(int turn, int from, int to, Spec p1Officer[6], Spec p2Officer[6]);
int noMin(int energy);
int whoNext(int turn);
int checkWinner(Spec p1Officer[6],Spec p2Officer[6]);
void congrats(int what);