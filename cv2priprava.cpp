#include "mbed.h"
#include <vector>
#include <map>

Serial pc( USBTX, USBRX );

// Dve ledky na boku
DigitalOut led1 ( PTA1 );
DigitalOut led2 ( PTA2 );

// Button on K64F-KIT - instance of class DigitalIn
DigitalIn butt (PTC9);
DigitalIn butt1 (PTC10);
DigitalIn butt2 (PTC11);
DigitalIn butt3 (PTC12);
bool flag=false;

bool stisk(){
    if (!butt||!butt1||!butt2||!butt3){
	while(true){
	    if(butt&&butt1&&butt2&&butt3){
		flag=!flag;
		return true;
	    }
    }
    return false:
}

/*int timeOn=500;


void blikejteCikCakLedky(int time){
    led1!=led2=led1;
    wait_ms(time);
}
void blikejteCikCakStiskJedeme(){
    while (1){
        if (!butt||!butt1||!butt2||!butt3){
            blikejteCikCakLedky(timeOn/10);
        } else {
            blikejteCikCakLedky(timeOn);
        }
    }
}

void blikejLedko(int time, DigitalIn which){
    which!=which;
    wait

}*/

void blikejteLedky(int time) {              //funkce, ktera obema blika na stridacku, pokud zmackne tlacitko, tak se jedna zrychli
    int i = 0, aButt=1;
    while(1) {
        while (flag) {
            if(stisk())break;

            i = i % time;
            if (!i) {
                led1 != led2 = led1;
            }
            ++i;
        }
        while(!flag){
            if (stisk())break;
            if (i%time){
                led1!=led1;
            }
            if (i%(time/10)){
                led2!=led2;
            }
            ++i;
        }
    }
}

stisk())breaki;





int main() {
    pc.baud( 115200 );


    return 0;
}
