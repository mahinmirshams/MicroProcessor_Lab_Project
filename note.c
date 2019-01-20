#include <stdio.h>

char digits[16] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D,
                   0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71};

unsigned int fn_data[24] = {440, 466, 494, 523, 554, 587, 622, 659, 698, 740,
                            784, 831, 880, 932, 988, 1047, 1109, 1175, 1245,
                            1319, 1397, 1480, 1568, 1661};

void main(void)
{

}

void my_init(void)
{
    DDRA = (0 << DDA7) | (0 << DDA6) | (0 << DDA5) | (0 << DDA4) | (0 << DDA3) | (0 << DDA2) | (0 << DDA1) | (0 << DDA0);
    
    PORTA = (0 << PORTA7) | (0 << PORTA6) | (0 << PORTA5) | (0 << PORTA4) | (0 << PORTA3) | (0 << PORTA2) | (0 << PORTA1) | (0 << PORTA0);

}
