/****************************************************************************
 * configs/max32660-evsys/include/board.h
 *
 *   Copyright (C) 2018 Gregory Nutt. All rights reserved.
 *   Author:  Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __CONFIG_MAX32660_EVSYS_INCLUDE_BOARD_H
#define __CONFIG_MAX32660_EVSYS_INCLUDE_BOARD_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Clocking *****************************************************************/

#define BOARD_HAVE_X32K    1 /* Have external 32.786KHz crystal oscialltor */

/* LED definitions **********************************************************/

/* The MAX32660-EVSYS board has a single red LED is connected to GPIO P0.13
 * for general user indication.  A low value illuminates the LED.
 *
 * If CONFIG_ARCH_LEDS is not defined, then the user can control the LED in
 * any way.  The following definitions are used to access individual LEDs.
 */

/* LED index values for use with board_userled() */

#define BOARD_LED         0
#define BOARD_NLEDS       1

/* LED bits for use with board_userled_all() */

#define BOARD_LED_BIT     (1 << BOARD_LED)

/* This LED is not used by the board port unless CONFIG_ARCH_LEDS is
 * defined.  In that case, the usage by the board port is defined in
 * include/board.h and src/max326_autoleds.c. The LEDs are used to
 * encode OS-related events as follows:
 *
 *   ------------------- ---------------------------- ------
 *   SYMBOL                  Meaning                  LED
 *   ------------------- ---------------------------- ------   */

#define LED_STARTED      0 /* NuttX has been started  OFF      */
#define LED_HEAPALLOCATE 0 /* Heap has been allocated OFF      */
#define LED_IRQSENABLED  0 /* Interrupts enabled      OFF      */
#define LED_STACKCREATED 1 /* Idle stack created      ON       */
#define LED_INIRQ        2 /* In an interrupt         N/C      */
#define LED_SIGNAL       2 /* In a signal handler     N/C      */
#define LED_ASSERTION    2 /* An assertion failed     N/C      */
#define LED_PANIC        3 /* The system has crashed  FLASH    */
#undef  LED_IDLE           /* MCU is is sleep mode    Not used */

/* Thus if LED is statically on, NuttX has successfully  booted and is,
 * apparently, running normally.  If LED is flashing at approximately
 * 2Hz, then a fatal error has been detected and the system has halted.
 */

/* Button definitions *******************************************************/

/* Buttons
 *
 * An single button, SW2,  is available on GPIO P0.12 for use by software.  A
 * low value will be sensed when the button is pressed.
 *
 * NOTE: There are no pull-up resistors connected to the generic user buttons
 * so it is necessary to enable the internal pull-up in the SAM E70 to use
 * the button.
 */

#define BUTTON_SW2        0
#define NUM_BUTTONS       1

#define BUTTON_SW2_BIT    (1 << BUTTON_SW2)

/* Pin Disambiguation *******************************************************/

/* UART0: No alternative pin configurations:
 *
 *   PORT0  PIN  SPI FUNCTION ALT FUNCTION COMMENT
 *   ------ ---- ------------ ------------ ----------------------------
 *   P0.4   5    TX           ALT2
 *   P0.5   6    RX           ALT2
 *   P0.7   10   CTS          ALT2
 *   P0.8   12   RTS          ALT2         Conflicts with I2C0 SDA
 */

/* UART1:
 *
 * UART1 Tx and Rx signals at port P0.10 and P0.11 are connected to the
 * programming and debug header JH2 pins 2 and 3 through 1k?? resistors.
 * This provides a convenient way to communicate with a PC though the
 * virtual serial port available in Maxim???s CMSIS-DAP debug adapter. The
 * series resistors allow for these signals to be overdriven by other
 * circuits without modifying the board.
 */

#define GPIO_UART1_RX     GPIO_UART1_RX_3  /* P0.11 */
#define GPIO_UART1_TX     GPIO_UART1_TX_3  /* P0.10 */

/* SPI0: No alternative pin configurations:
 *
 *   PORT0  PIN  SPI FUNCTION ALT FUNCTION COMMENT
 *   ------ ---- ------------ ------------ ----------------------------
 *   P0.4   5    MISO         ALT1
 *   P0.5   6    MOSI         ALT1
 *   P0.6   8    SCK          ALT1
 *   P0.7   10   SS0          ALT1
 */

/* SPI1:  Not recommended.  Not usable in current state due to pin
 * conflicts:
 *
 *   PORT0  PIN  SPI FUNCTION ALT FUNCTION COMMENT
 *   ------ ---- ------------ ------------ ----------------------------
 *   P0.0   13   MISO         ALT2         Conflicts with JTAG SWD
 *   P0.1   11   MOSI         ALT2         Conflicts with JTAG SWD
 *   P0.2   9    SCK          ALT2         Conflicts with I2C1 SCL
 *   P0.3   7    SS0          ALT2         Conflicts with I2C1 SDA
 *   P0.10  2    MISO         ALT1         Conflicts with serial console
 *   P0.11  4    MOSI         ALT1         Conflicts with serial console
 *   P0.12  1    SCK          ALT1
 *   P0.13  3    SS0          ALT1
 */

#define GPIO_SPI1_MISO    GPIO_SPI1_MISO_1
#define GPIO_SPI1_MOSI    GPIO_SPI1_MOSI_1
#define GPIO_SPI1_SCK     GPIO_SPI1_SCK_1
#define GPIO_SPI1_SS0     GPIO_SPI1_SS0_1

/* I2C0:  No alternative pin configurations
 *
 *   PORT0  PIN  SPI FUNCTION ALT FUNCTION COMMENT
 *   ------ ---- ------------ ------------ ----------------------------
 *   P0.8   12   SCL          ALT1         Conflicts with UART0 RTS
 *   P0.9   14   SDA          ALT1
 */

#define GPIO_I2C1_SCL    (GPIO_ALT1 | GPIO_PORT0 | GPIO_PIN2)
#define GPIO_I2C1_SDA    (GPIO_ALT1 | GPIO_PORT0 | GPIO_PIN3)

/* I2C1:  No alternative pin configurations
 *
 *   PORT0  PIN  SPI FUNCTION ALT FUNCTION COMMENT
 *   ------ ---- ------------ ------------ ----------------------------
 *   P0.2   9    SCL          ALT1         Conflicts with SPI1 SCK
 *   P0.3   7    SDA          ALT1         Conflicts with SPI1 SS0
 */

/* DMA **********************************************************************/

#endif /* __CONFIG_NUCLEO_F303ZE_INCLUDE_BOARD_H */
