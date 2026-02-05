#include<reg51.h>
sbit led = P1^1;
int main(){
	unsigned int i;
	while(1){
		led = 1;
		for(i=0;i<3000;i++);
		led = 0;
		for(i=0;i<3000;i++);
	}
}
	