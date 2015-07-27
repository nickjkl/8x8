//D51 PB 2 is the master data out
//d52 PB 1 is the clock pin
//d53 PB 0 will be our latch pin it appears the ss pin must be used for latch
//page 200 or so for spi config
//byte del = 2;

void setup() {
  // put your setup code here, to run once:
DDRB |=B00000111;
PORTB |=B00000001;
//DDRL |=B00000001;
//SPCR |= (1<<SPE)|(1<<MSTR)|(1<<SPR1);

SPSR |=(1<<SPI2X);
SPCR = (1<<MSTR)| (1<<SPE);               // Set as Master
    SPCR |= (1<<SPR1)|(1<<SPR0);     // divided clock by 128
//    SPCR |= (1<<SPE);    
}

void loop() {
  // put your main code here, to run repeatedly:
//test();
//drawsamp4();
//drawx();
//letterk();
nicky();
}


void sendspi(byte data){
 SPDR = data;
while((SPSR & (1<<SPIF)) ==0){
} 
  
}

void drawsamp1(){

//dot1
PORTB &=~B00000001;
sendspi(128);
sendspi(128);
PORTB |=B00000001;
//delay(1);
//dot2
PORTB &=~B00000001;
sendspi(128);
sendspi(1);
PORTB |=B00000001;
//delay(1);
//dot3
PORTB &=~B00000001;
sendspi(1);
sendspi(1);
PORTB |=B00000001;
//delay(1);
//dot4
PORTB &=~B00000001;
sendspi(1);
sendspi(128);
PORTB |=B00000001;
//delay(1);
}

void drawsamp2(){
 //dot1
PORTB &=~B00000001;
sendspi(64);
sendspi(64);
PORTB |=B00000001;
//delay(1);
//dot2
PORTB &=~B00000001;
sendspi(64);
sendspi(2);
PORTB |=B00000001;
//delay(1);
//dot3
PORTB &=~B00000001;
sendspi(2);
sendspi(2);
PORTB |=B00000001;
//delay(1);
//dot4
PORTB &=~B00000001;
sendspi(2);
sendspi(64);
PORTB |=B00000001;
//delay(1);
}

void drawsamp3(){
 //dot1
PORTB &=~B00000001;
sendspi(32);
sendspi(32);
PORTB |=B00000001;
//delay(1);
//dot2
PORTB &=~B00000001;
sendspi(32);
sendspi(4);
PORTB |=B00000001;
//delay(1);
//dot3
PORTB &=~B00000001;
sendspi(4);
sendspi(4);
PORTB |=B00000001;
//delay(1);
//dot4
PORTB &=~B00000001;
sendspi(4);
sendspi(32);
PORTB |=B00000001;
 //delay(1);
}
void drawsamp4(){
 //dot1
PORTB &=~B00000001;
sendspi(16);
sendspi(16);
PORTB |=B00000001;
//delay(1);
//dot2
PORTB &=~B00000001;
sendspi(16);
sendspi(8);
PORTB |=B00000001;
//delay(1);
//dot3
PORTB &=~B00000001;
sendspi(8);
sendspi(8);
PORTB |=B00000001;
//delay(1);
//dot4
PORTB &=~B00000001;
sendspi(8);
sendspi(16);
PORTB |=B00000001;
//delay(1);
}

void drawx(){
drawsamp1();
drawsamp2();
drawsamp3();
drawsamp4();
}

void lettern(){
PORTB &=~B00000001;
sendspi(128);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(64);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(32);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(1);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(8);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(2);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(2);
sendspi(2);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(4);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(8);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(16);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(32);
sendspi(32);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(64);
sendspi(64);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(64);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(32);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(8);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(128);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(2);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(128);
PORTB |=B00000001;
}

void letteri(){
PORTB &=~B00000001;
sendspi(1);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(2);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(4);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(8);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(1);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(32);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(64);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(2);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(2);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(16);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(8);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(8);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(32);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(32);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(64);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(64);
sendspi(16);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(128);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(2);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(4);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(32);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(128);
sendspi(64);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(128);
PORTB |=B00000001;
}

void letterc(){
PORTB &=~B00000001;
sendspi(1);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(64);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(32);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(16);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(1);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(4);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(2);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(2);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(8);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(32);
sendspi(1);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(64);
sendspi(1);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(2);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(4);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(32);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(64);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(128);
PORTB |=B00000001; 
}


void letterk(){
PORTB &=~B00000001;
sendspi(1);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(2);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(8);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(32);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(64);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(8);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(8);
sendspi(16);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(4);
sendspi(32);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(2);
sendspi(64);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(1);
sendspi(128);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(16);
sendspi(16);
PORTB |=B00000001; 
PORTB &=~B00000001;
sendspi(32);
sendspi(32);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(64);
sendspi(64);
PORTB |=B00000001;
PORTB &=~B00000001;
sendspi(128);
sendspi(128);
PORTB |=B00000001;
}


void nicky(){
for (int count = 0; count <1500; count++){
lettern();
}  
for (int count = 0; count <1500; count++){
letteri();
}
for (int count = 0; count <1500; count++){
letterc();
}
for (int count = 0; count <2000; count++){
letterk();
}  
}
