#include <iostream>
#include<windows.h>
#include<mmsystem.h>
#include<conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char key;
	cout<<"Press any key to play piano and Q to quit:";
	
	while(key!='q'){
	key=_getch();
		switch(key){
			case'a':
				PlaySound(TEXT("a.wav"),NULL,SND_SYNC);
				break;
			case'h':
				PlaySound(TEXT("h.wav"),NULL,SND_SYNC);
				break;
			case'j':
				PlaySound(TEXT("j.wav"),NULL,SND_SYNC);
				break;
			case'u':
				PlaySound(TEXT("u.wav"),NULL,SND_SYNC);
				break;
			case'd'	:
				PlaySound(TEXT("d.wav"),NULL,SND_SYNC);	
				break;
			case's':
			    PlaySound(TEXT("s.wav"),NULL,SND_SYNC);
			    break;
			case'b':
		    	PlaySound(TEXT("b.wav"),NULL,SND_SYNC);
		    	break;
		    case'm':
		    	PlaySound(TEXT("m.wav"),NULL,SND_SYNC);
		    	break;
		    case'v':
		    	PlaySound(TEXT("v.wav"),NULL,SND_SYNC);
		    	break;
		    case'g':
		    	PlaySound(TEXT("g.wav"),NULL,SND_SYNC);
		    	break;
		}      
	}
	cout<<"Quiting Program.";
	return 0;
}
