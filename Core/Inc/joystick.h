/*
 * joystick.h
 *
 *  Created on: Jul 24, 2024
 *      Author: uedso
 */

#ifndef INC_JOYSTICK_H_
#define INC_JOYSTICK_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct {
	uint8_t report_id;	// Report Id
	struct{
		uint8_t btn_left: 1; // Bit 0: Switch 1
		uint8_t btn_right: 1; // Bit 1: Switch 2
		uint8_t padding: 6; // Bits 2-7: Padding
	} switches;
} joystick_t;


void update_joystick_buttons(joystick_t *joystick);

#endif /* INC_JOYSTICK_H_ */
