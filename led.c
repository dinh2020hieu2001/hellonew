#include <REGX51.H>

void delay(int ms){
	while(ms--);
}

char q[8] = {0x80, 0x40,0x20,0x10,0x08,0x04,0x02,0x01}; 
char love[8]= {0xcf,0xb7,0xbb,0xdd,0xdd,0xbb,0xb7,0xcf};
int main (){
int i ;	
		while (1){
				for (i =0; i<8 ;i++) {
					P2=q[i];
					P0 = love[i];
					delay(100);
				}
		}
}
