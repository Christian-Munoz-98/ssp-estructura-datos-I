#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;


void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}   
    
int main(){   
    int tope=180;
    for(int i=0;i<5;i++){
	    int ban=0;
	    for(int j=0;j<tope;j++){
            gotoxy(j,9);cout<< "  " <<i;
	        gotoxy(j,10);cout<< "  o";
		    gotoxy(j,11); cout<< " /|\\";
		    if(ban==0){
				gotoxy(j,12); cout<< " / ";
			    ban=1;
		    }
            else{
			    gotoxy(j,12); cout<< "   \\";
			    ban=0;
		    }
	        Sleep(10);
	    }
        gotoxy(tope,12);cout<< "/ \\";
        for (int x=0;x<160;x++){
            gotoxy(x,14);cout<<"                    [\\"<<endl;
            gotoxy(x,15);cout<<"               .----' `-----."<<endl;
            gotoxy(x,16);cout<<"              //^^^^;;^^^^^^`\\"<<endl;
            gotoxy(x,17);cout<<"      _______//_____||_____()_\\________"<<endl;
            gotoxy(x,18);cout<<"     /826    :      : ___              `\\"<<endl;
            gotoxy(x,19);cout<<"    |>   ____;      ;  |/\\><|   ____   _<)"<<endl;
            gotoxy(x,20);cout<<"   {____/    \\_________________/    \\____}"<<endl;
            gotoxy(x,21);cout<<"        \\ '' /                 \\ '' /"<<endl;
            gotoxy(x,22);cout<<"         '--'                   '--'"<<endl;
            Sleep(10);        
        }
        gotoxy(tope,9);cout<< "   ";
        gotoxy(tope,10);cout<< "   ";
        gotoxy(tope,11);cout<< "    ";
        gotoxy(tope,12);cout<< "   ";
        gotoxy(i*20,0);cout<<"           "<<endl;
        gotoxy(i*20,1);cout <<"                    "<< endl;
        gotoxy(i*20,2);cout <<"      "<<endl;
        gotoxy(i*20,3);cout<<"                 "<<endl;
        gotoxy(i*20,4);cout<<"           "<<endl;
        Sleep(100);
        for (int x=160;x<180;x++){
            gotoxy(x,14);cout<<"                    [\\"<<endl;
            gotoxy(x,15);cout<<"               .----' `-----."<<endl;
            gotoxy(x,16);cout<<"              //^^^^;;^^^^^^`\\"<<endl;
            gotoxy(x,17);cout<<"      _______//__()__||_____()_\\________"<<endl;
            gotoxy(x,18);cout<<"     /826    :      : ___              `\\"<<endl;
            gotoxy(x,19);cout<<"    |>   ____;      ;  |/\\><|   ____   _<)"<<endl;
            gotoxy(x,20);cout<<"   {____/    \\_________________/    \\____}"<<endl;
            gotoxy(x,21);cout<<"        \\ '' /                 \\ '' /"<<endl;
            gotoxy(x,22);cout<<"         '--'                   '--'"<<endl;
            Sleep(10);        
        }
        system("cls");          
    }
}

/*









*/