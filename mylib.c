#include<stdio.h>
typedef char* String;
typedef struct{
    int id;
    String name;
    int attack;
    int defense;
    int energy;
}Spec;

void greeting(){
    printf("Halo! Selamat datang di Dynasty Warrior!\n");
}

void rules(){
    printf("Peraturan permainan : \n");
    printf("1. Permainan dilakukan oleh dua pemain. Pemain pertama sebagai Player 1 dan pemain kedua sebagai Player 2.\n");
    printf("2. Player 1 akan memilih tim dan lima officer terlebih dahulu. Cara memilih cukup dengan mengetik angkanya.\n");
    printf("3. Setelah Player 1 memilih, giliran Player 2 memilih tim dan lima officer.\n");
    printf("4. Permainan dimulai. Player 1 menyerang terlebih dahulu. Cara menyerang adalah dengan mengetik index officer penyerang dan index officer yang akan diserang dengan dihubungkan tanda 'x'. Contoh : 3x4 berarti officer 3 menyerang officer 4 dari pihak lawan.\n");
    printf("5. Setelah Player 1 menyerang, giliran Player 2. Permainan dilakukan secara bergantian.\n");
    printf("6. Pemenang adalah pemain yang berhasil menyerang seluruh pasukan lawan hingga nyawanya bersisa 0.\n");
}

void showTeam(){
    printf("\nDaftar tim : \n1. Shu\n2. Wei\n3. Wu\n4. Jin\n5. Others\n");
}

void listOfficer(int x, String *nameOfficer, int *attack, int *defense){
    String name;
    int at, def;
    switch(x){
        case 1 : name="Liu Bei"; at=82; def=75; break;
        case 2 : name="Guan Yu"; at=90; def=92; break;
        case 3 : name="Zhang Fei"; at=90; def=89; break;
        case 4 : name="Zhao Yun"; at=90; def=91; break;
        case 5 : name="Ma Chao"; at=88; def=87; break;
        case 6 : name="Zhuge Liang"; at=68; def=70; break;
        case 7 : name="Wei Yan"; at=88; def=87; break;
        case 8 : name="Huang Zhong"; at=82; def=75; break;
        case 9 : name="Guan Ping"; at=80; def=80; break;
        case 10 : name="Pang Tong"; at=65; def=60; break;
        case 11 : name="Yueying"; at=60; def=55; break;
        case 12 : name="Jiang Wei"; at=82; def=80; break;
        case 13 : name="Liu Shan"; at=60; def=60; break;
        case 14 : name="Ma Dai"; at=80; def=79; break;
        case 15 : name="Guan Shuo"; at=82; def=83; break;
        case 16 : name="Xu Shu"; at=85; def=84; break;
        case 17 : name="Guan Xing"; at=84; def=85; break;
        case 18 : name="Zhang Bao"; at=85; def=84; break;
        case 19 : name="Guan Yinping"; at=62; def=50; break;
        case 20 : name="Cao Cao"; at=78; def=80; break;
        case 21 : name="Cao Pi"; at=82; def=84; break;
        case 22 : name="Cao Ren"; at=89; def=90; break;
        case 23 : name="Xiahou Dun"; at=90; def=92; break;
        case 24 : name="Xiahou Yuan"; at=87; def=90; break;
        case 25 : name="Guo Jia"; at=70; def=70; break;
        case 26 : name="Zhang He"; at=76; def=78; break;
        case 27 : name="Li Dian"; at=89; def=92; break;
        case 28 : name="Xun Yu"; at=80; def=75; break;
        case 29 : name="Dian Wei"; at=90; def=90; break;
        case 30 : name="Zhang Liao"; at=86; def=89; break;
        case 31 : name="Xu Zhu"; at=90; def=88; break;
        case 32 : name="Zhenji"; at=70; def=65; break;
        case 33 : name="Jia Xu"; at=87; def=84; break;
        case 34 : name="Pang De"; at=89; def=83; break;
        case 35 : name="Yu Jin"; at=84; def=82; break;
        case 36 : name="Sun Jian"; at=88; def=85; break;
        case 37 : name="Sun Ce"; at=89; def=90; break;
        case 38 : name="Sun Quan"; at=84; def=85; break;
        case 39 : name="Zhou Yu"; at=82; def=78; break;
        case 40 : name="Lu Meng"; at=82; def=85; break;
        case 41 : name="Lu Xun"; at=84; def=85; break;
        case 42 : name="Gan Ning"; at=90; def=92; break;
        case 43 : name="Taishi Ci"; at=90; def=90; break;
        case 44 : name="Huang Gai"; at=82; def=85; break;
        case 45 : name="Zhou Tai"; at=82; def=83; break;
        case 46 : name="Ling Tong"; at=90; def=89; break;
        case 47 : name="Sun Shangxiang"; at=72; def=65; break;
        case 48 : name="Han Dang"; at=80; def=81; break;
        case 49 : name="Zhu Ran"; at=84; def=86; break;
        case 50 : name="Xiao Qiao"; at=60; def=65; break;
        case 51 : name="Da Qiao"; at=60; def=65; break;
        case 52 : name="Lianshi"; at=62; def=66; break;
        case 53 : name="Sima Yi"; at=75; def=77; break;
        case 54 : name="Sima Shi"; at=74; def=75; break;
        case 55 : name="Sima Zhao"; at = 77; def=73; break;
        case 56 : name="Deng Ai"; at=89; def=88; break;
        case 57 : name="Wang Yuanji"; at=85; def=87; break;
        case 58 : name="Zhong Hui"; at=88; def=85; break;
        case 59 : name="Zhuge Dan"; at=76; def=78; break;
        case 60 : name="Xiahou Ba"; at=90; def=88; break;
        case 61 : name="Guo Hai"; at=87; def=85; break;
        case 62 : name="Jia Chong"; at=82; def=80; break;
        case 63 : name="Zhang Chunhua"; at=75; def=65; break;
        case 64 : name="Lu Bu"; at=95; def=95; break;
        case 65 : name="Diao Chan"; at=75; def=70; break;
        case 66 : name="Dong Zhuo"; at=88; def=85; break;
        case 67 : name="Yuan Shao"; at=89; def=88; break;
        case 68 : name="Meng Huo"; at=89; def=89; break;
        case 69 : name="Zhu Rong"; at=72; def=70; break;
        case 70 : name="Zuo Ci"; at=84; def=90; break;
        case 71 : name="Chen Gong"; at=88; def=82; break;
        case 72 : name="Lu Lingqi"; at=70; def=68; break;
    }
    *nameOfficer=name;
    *attack=at;
    *defense=def;
}

void showOfficer(int x){
    int i;
    String name;
    int attack,defense;
    switch(x){
        case 1 :
            for(i=1;i<=19;i++){
                listOfficer(i,&name,&attack,&defense);
                printf("%d. %s\n",i,name);
            }
            break;
        case 2 :
            for(i=20;i<=35;i++){
                listOfficer(i,&name,&attack,&defense);
                printf("%d. %s\n",i,name);
            }
            break;
        case 3 :
            for(i=36;i<=52;i++){
                listOfficer(i,&name,&attack,&defense);
                printf("%d. %s\n",i,name);
            }
            break;
        case 4 :
            for(i=53;i<=63;i++){
                listOfficer(i,&name,&attack,&defense);
                printf("%d. %s\n",i,name);
            }
            break;
        case 5 :
            for(i=64;i<=72;i++){
                listOfficer(i,&name,&attack,&defense);
                printf("%d. %s\n",i,name);
            }
            break;
    }
}

void showArena(Spec p1Officer[6],Spec p2Officer[6]){
    int i;
    printf("\n============================================================================\n");
    printf("Player 1 \t\t\t\t\t Player 2\n");
    for(i=1;i<=5;i++){
        printf("%d. %s - %d \t\t\t\t %d. %s - %d\n",i,p1Officer[i].name,p1Officer[i].energy,i,p2Officer[i].name,p2Officer[i].energy);
    }
}

int doAttack(int turn, int from, int to, Spec p1Officer[6], Spec p2Officer[6]){
    int kill;
    switch(turn){
        case 1 :
            if(p1Officer[from].energy!=0){
                kill=((p1Officer[from].energy*0.2)+(p1Officer[from].attack*0.5))-((p2Officer[to].defense*0.2)+((100-p2Officer[to].energy)*0.2)); break;
            }
            else{
                kill=1;
            }
        case 2 :
            if(p2Officer[from].energy!=0){
                kill=((p2Officer[from].energy*0.2)+(p2Officer[from].attack*0.5))-((p1Officer[to].defense*0.2)+((100-p1Officer[to].energy)*0.2)); break;
            }
            else{
                kill=1;
            }
    }
    return kill;
}

int noMin(int energy){
    if(energy<=0){
        return 0;
    }
}

int whoNext(int turn){
    switch(turn){
        case 1 : return 2; break;
        case 2 : return 1; break;
    }
}

int checkWinner(Spec p1Officer[6],Spec p2Officer[6]){
    if(p1Officer[1].energy==0 && p1Officer[2].energy==0 && p1Officer[3].energy==0 && p1Officer[4].energy==0 && p1Officer[5].energy==0){
        return 2;
    }
    else if(p2Officer[1].energy==0 && p2Officer[2].energy==0 && p2Officer[3].energy==0 && p2Officer[4].energy==0 && p2Officer[5].energy==0){
        return 1;
    }
    else{
        return 3;
    }
}

void congrats(int what){
    switch(what){
        case 1 : printf("Player 1 menang! \n\n"); break;
        case 2 : printf("Player 2 menang! \n\n"); break;
    }
}



