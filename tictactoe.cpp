#include<iostream>
#include<conio.h>
using namespace std;
void system ();
char ch[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin(){
if (ch[1]==ch[2]&& ch[2]==ch[3]){
    return 1;
}
else if(ch[4]==ch[5]&&ch[5]==ch[6]){
    return 1;
}
else if(ch[7]==ch[8]&&ch[8]==ch[9]){
    return 1;
}
else if(ch[1]==ch[5]&&ch[5]==ch[9]){
    return 1;
}
else if(ch[3]==ch[5]&&ch[5]==ch[7]){
    return 1;
}
else if(ch[1]==ch[4]&&ch[4]==ch[7]){
    return 1;
}
else if(ch[2]==ch[5]&&ch[5]==ch[8]){
    return 1;
}
else if(ch[3]==ch[6]&&ch[6]==ch[9]){
    return 1;
}
else if(ch[1]!='1' && ch[2]!='2' &&ch[3]!='3' && ch[4]!='4' &&ch[5]!='5' && ch[6]!='6' &&ch[7]!='7' && ch[8]!='8' &&ch[9]!='9' ){
    return 0;
}
else{
    return -1;
}
}
void board(){
    system("cls");
    cout<<"\n\n\tTic Tac Toe Game\n\n";
    cout<<"For player 1--(X) and For player 2--(0)"<<endl<<endl;
    cout<<endl;

    cout<<"Let's Play"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<ch[1]<<"  |  "<<ch[2]<<" |  "<<ch[3]<<"  |  "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<ch[4]<<"  |  "<<ch[5]<<" |  "<<ch[6]<<"  |  "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<ch[7]<<"  |  "<<ch[8]<<" |  "<<ch[9]<<"  |  "<<endl;
}
    int main()
    {
        int player = 1,i,choice; 
         
        char mark;
        do
        {
            board();
            player=(player%2)?1:2;

            cout<<"player"<<player<<",enter the number:";
            cin>>choice;
            
            mark=(player == 1) ? 'X': '0' ;
            
            if(choice == 1 && ch[1] == '1')
            {
                ch[1] = mark;
            }
            else if(choice == 2 && ch[2] == '2')
            {
                ch[2] = mark;
            }
            else if(choice == 3 && ch[3] == '3')
            {
                ch[3] = mark;
            }
            else if(choice == 4 && ch[4] == '4')
            {
                ch[4] = mark;
            }
            else if(choice == 5 && ch[5] == '5')
            {
                ch[5] = mark;
            }
            else if(choice == 6 && ch[6] == '6')
            {
                ch[6] = mark;
            }
            else if(choice == 7 && ch[7] == '7')
            {
                ch[7] = mark;
            }
            else if(choice == 8 && ch[8] == '8')
            {
                ch[8] = mark;
            }
            else if(choice == 9 && ch[9] == '9')
            {
                ch[9] = mark;
            } 
            else
            {
                cout<<"invalid move";

                player--;
                cin.ignore();
                cin.get();
            }

            i= checkwin();
            player++;

        } 
        while(i == -1);
        board();
        if(i == 1){
            cout<<" CONGRATS! PLAYER "<<player<<"WINS!";
        }
        else 
        {
            cout<<"GAME DRAW!";
        }
        cin.ignore();
        cin.get();
        return 0;

    }
