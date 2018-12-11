#include<stdio.h>
#include "mylib.h"
int main(){
    int tim1,tim2;
    int i,officer;
    Spec p1Officer[6],p2Officer[6];
    String name;
    int attack,defense;
    int from,to;
    int giliran, what, kill;
    
    greeting();
    rules();
    showTeam();
    printf("Player 1, silahkan memilih tim : ");
    scanf("%d",&tim1);
    showOfficer(tim1);
    for(i=1;i<=5;i++){
        printf("Pilih officer ke-%d : ",i);
        scanf("%d",&officer);
        listOfficer(officer,&name,&attack,&defense);
        p1Officer[i].name=name;
        p1Officer[i].attack=attack;
        p1Officer[i].defense=defense;
        p1Officer[i].energy=100;
    }
    
    printf("Player 2, silahkan memilih tim : ");
    scanf("%d",&tim2);
    showOfficer(tim2);
    for(i=1;i<=5;i++){
        printf("Pilih officer ke-%d : ",i);
        scanf("%d",&officer);
        listOfficer(officer,&name,&attack,&defense);
        p2Officer[i].name=name;
        p2Officer[i].attack=attack;
        p2Officer[i].defense=defense;
        p2Officer[i].energy=100;
    }
    
    printf("\nMulai permainan!\n");
    showArena(p1Officer,p2Officer);
    giliran=1;
    what=3;
    while(what==3){
        switch(giliran){
            case 1 :
                printf("Giliran Player 1\nSerang : ");
                scanf("%dx%d",&from,&to);
                kill=doAttack(giliran,from,to,p1Officer,p2Officer);
                p2Officer[to].energy=p2Officer[to].energy-kill;
                p2Officer[to].energy=noMin(p2Officer[to].energy);
                showArena(p1Officer,p2Officer);
                break;
            case 2 :
                printf("Giliran Player 2\nSerang : ");
                scanf("%dx%d",&from,&to);
                kill=doAttack(giliran,from,to,p1Officer,p2Officer);
                p1Officer[to].energy=p1Officer[to].energy-kill;
                p1Officer[to].energy=noMin(p1Officer[to].energy);
                showArena(p1Officer,p2Officer);
                break;
        }
        giliran=whoNext(giliran);
        what=checkWinner(p1Officer,p2Officer);
        congrats(what);
    }
}