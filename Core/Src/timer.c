/*
 * timer.c
 *
 *  Created on: 17 Oct 2022
 *      Author: Bao Quoc
 */


#include "main.h"
#include "input_reading.h"
#include "timer.h"
#include "global.h"

void setTimer_MODE ( int duration ){
	timer_MODE_counter = duration / TIMER_CYCLE ;
	timer_MODE_flag = 0;
 }

void setTimer_VALUE (int duration ) {
	 timer_VALUE_counter = duration / TIMER_CYCLE ;
	 timer_VALUE_flag = 0;
}


void timer_run () {
	if( timer_MODE_counter > 0) {
		timer_MODE_counter --;
		if( timer_MODE_counter == 0) timer_MODE_flag = 1;
	}
	if( timer_VALUE_counter > 0) {
		timer_VALUE_counter --;
		if( timer_VALUE_counter == 0) timer_VALUE_flag = 1;
	 }
}
void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim ) {
	 if( htim -> Instance == TIM2 ){
		 button_reading () ;}
	    timer_run () ;
	 }
