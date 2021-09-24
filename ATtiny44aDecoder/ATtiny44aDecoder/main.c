/*
 * ATtiny44aDecoder.c
 *
 * Created: 01.06.2021 10:25:18
 * Author : Leo
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/delay.h>

#define  F_CPU 1000000 UL;

ISR(TIM1_OVF_vect)
{
		
}

int main(void)
{
	/////////////////INTERRUPTION///////////
	
	TIMSK1 |= (1<<TOIE1);//Разрешение на работу таймера.счётчика
	TCCR1B |= (0<<CS12)|(0<<CS11)|(1<<CS10); //Работа без прескейлера
	TCNT1 = 0;//обнуляем таймер/счётчик
	
	sei();//Глобально разрешаем прерывания
	
	//////////////ПЕРЕМЕННЫЕ/////////////////
	
	uint8_t START_BIT = 0;
	
    while (1) 
    {
    }
}

