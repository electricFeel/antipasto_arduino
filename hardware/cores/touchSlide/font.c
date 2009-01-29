/*==============================================================================
 * PREPROCESSOR DIRECTIVES
 *============================================================================*/
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "graphics.h"
#include "font.h"
#include "binary.h"

/*==============================================================================
 * TYPES
 *============================================================================*/

 /*==============================================================================
 * GLOBAL CONSTANTS AND VARIABLES
 *============================================================================*/

/* CONSTANTS */

//////////////////////////////////////////
/*! Our 5x7 Font that we normally use
*/
////////////////////////////////////////////
const unsigned char font_5x7[752] PROGMEM ={  

   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000,    //letter Space


   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00000000, 
   B00100000,    //letter !

   B01010000, 
   B01010000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000,    //letter "

   B01010000, 
   B01010000, 
   B11111000, 
   B01010000, 
   B11111000, 
   B01010000, 
   B01010000,    //letter #

   B00100000, 
   B01111000, 
   B10100000, 
   B01110000, 
   B00101000, 
   B00110000, 
   B00100000,    //letter $

   B11000000, 
   B11001000, 
   B00010000, 
   B00100000, 
   B01000000, 
   B10011000, 
   B00011000,    //letter %


   B01000000, 
   B10100000, 
   B01000000, 
   B10100000, 
   B10010000, 
   B10001000, 
   B01110000,    //letter &

   B00010000, 
   B00010000, 
   B00100000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000,    //letter '

   B00100000, 
   B01000000, 
   B01000000, 
   B01000000, 
   B01000000, 
   B01000000, 
   B00100000,    //letter (

   B00010000, 
   B00001000, 
   B00001000, 
   B00001000, 
   B00001000, 
   B00001000, 
   B00010000,    //letter )

   B00000000, 
   B10001000, 
   B01010000, 
   B11111000, 
   B01010000, 
   B10001000, 
   B00000000,    //letter *

   B00000000, 
   B00100000, 
   B00100000, 
   B11111000, 
   B00100000, 
   B00100000, 
   B00000000,    //letter +

   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B01000000, 
   B01000000, 
   B10000000,    //letter ,

   B00000000, 
   B00000000, 
   B00000000, 
   B11111000, 
   B00000000, 
   B00000000, 
   B00000000,    //letter -

   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B11000000, 
   B11000000,   //letter .

   B00000000, 
   B00001000, 
   B00010000, 
   B00100000, 
   B01000000, 
   B10000000, 
   B00000000,   //letter /

   B01110000, 
   B10001000, 
   B10011000, 
   B10101000, 
   B11001000, 
   B10001000, 
   B01110000,   //letter 0
   
   B00100000, 
   B01100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B01110000,   //letter 1 

   B01110000, 
   B00001000, 
   B00001000, 
   B01110000, 
   B10000000, 
   B10000000, 
   B11111000,   //letter 2

   B11110000, 
   B00001000, 
   B00001000, 
   B01110000, 
   B00001000, 
   B00001000, 
   B11110000,   //letter 3

   B00001000, 
   B00011000, 
   B00101000, 
   B01001000, 
   B11111000, 
   B00001000, 
   B00001000,   //letter 4

   B11111000, 
   B10000000, 
   B10000000, 
   B11110000, 
   B00001000, 
   B10001000, 
   B01110000,   //letter 5
   
   B01110000, 
   B10000000, 
   B10000000, 
   B11110000, 
   B10001000, 
   B10001000, 
   B01110000,   //letter 6

   B11111000, 
   B00001000, 
   B00001000, 
   B00010000, 
   B00100000, 
   B01000000, 
   B10000000,   //letter 7

   B01110000, 
   B10001000, 
   B10001000, 
   B01110000, 
   B10001000, 
   B10001000, 
   B01110000,   //letter 8
   
   B01110000, 
   B10001000, 
   B10001000, 
   B01111000, 
   B00010000, 
   B00100000, 
   B01000000,   //letter 9

   B00000000, 
   B00000000, 
   B01100000, 
   B01100000, 
   B00000000, 
   B01100000, 
   B01100000,    //letter :

   B00000000, 
   B00000000, 
   B01100000, 
   B01100000, 
   B00000000, 
   B00100000, 
   B01000000,    //letter ;

   B00010000, 
   B00100000, 
   B01000000, 
   B10000000, 
   B01000000, 
   B00100000, 
   B00010000,    //letter <

   B00000000, 
   B00000000, 
   B11111000, 
   B00000000, 
   B11111000, 
   B00000000, 
   B00000000,    //letter =

   B01000000, 
   B00100000, 
   B00010000, 
   B00001000, 
   B00010000, 
   B00100000, 
   B01000000,    //letter >

   B01110000, 
   B10001000, 
   B00001000, 
   B00110000, 
   B01000000, 
   B00000000, 
   B01000000,    //letter ?

   B00100000, 
   B00100000, 
   B01110000, 
   B11110000, 
   B11110000, 
   B11111000, 
   B11111000,    //letter @

//-----------------------------------Capital Letters
   B00100000, 
   B01011000, 
   B10001000, 
   B11111000, 
   B10001000, 
   B10001000, 
   B10001000,    //letter A 

   B11110000, 
   B10001000, 
   B10001000, 
   B11110000, 
   B10001000, 
   B10001000, 
   B11110000,    //letter B

   B01110000, 
   B10001000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B10001000, 
   B01110000,    //letter C

   B11110000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B11110000,    //letter D

   B11111000, 
   B10000000, 
   B10000000, 
   B11110000, 
   B10000000, 
   B10000000, 
   B11111000,    //letter E

   B11111000, 
   B10000000, 
   B10000000, 
   B11110000, 
   B10000000, 
   B10000000, 
   B10000000,    //letter F

   B01110000, 
   B10001000, 
   B10000000, 
   B10000000, 
   B10011000, 
   B10001000, 
   B01111000,    //letter G

   B10001000, 
   B10001000, 
   B10001000, 
   B11111000, 
   B10001000, 
   B10001000, 
   B10001000,    //letter H

   B01110000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B01110000,    //letter I

   B11111000, 
   B00010000, 
   B00010000, 
   B00010000, 
   B10010000, 
   B10010000, 
   B01100000,    //letter J

   B10001000, 
   B10010000, 
   B10100000, 
   B11000000, 
   B10100000, 
   B10010000, 
   B10001000,    //letter K

   B10000000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B11111000,    //letter L

   B10001000, 
   B11011000, 
   B10101000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000,    //letter M

   B10001000, 
   B11001000, 
   B10101000, 
   B10011000, 
   B10001000, 
   B10001000, 
   B10001000,    //letter N

   B01110000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B01110000,    //letter O

   B11110000, 
   B10001000, 
   B10001000, 
   B11110000, 
   B10000000, 
   B10000000, 
   B10000000,    //letter P

   B01110000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10101000, 
   B10011000, 
   B01111000,    //letter Q

   B11110000, 
   B10001000, 
   B10001000, 
   B11110000, 
   B10100000, 
   B10010000, 
   B10001000,    //letter R

   B01111000, 
   B10000000, 
   B10000000, 
   B01110000, 
   B00001000, 
   B00001000, 
   B11110000,    //letter S

   B11111000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000,    //letter T

   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B01110000,    //letter U

   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B01010000, 
   B00100000,    //letter V

   B10001000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10101000, 
   B11011000, 
   B10001000,    //letter W

   B10001000, 
   B10001000, 
   B01010000, 
   B00100000, 
   B01010000, 
   B10001000, 
   B10001000,    //letter X

   B10001000, 
   B10001000, 
   B10001000, 
   B01010000, 
   B00100000, 
   B00100000, 
   B00100000,    //letter Y

   B11111000, 
   B00001000, 
   B00010000, 
   B00100000, 
   B01000000, 
   B10000000, 
   B11111000,    //letter Z
//-----------------------------------End capital letters
   B11100000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B11100000,    //letter [

   B00000000, 
   B10000000, 
   B01000000, 
   B00100000, 
   B00010000, 
   B00001000, 
   B00000000,    //letter

   B00111000, 
   B00001000, 
   B00001000, 
   B00001000, 
   B00001000, 
   B00001000, 
   B00111000,    //letter ]

   B00100000, 
   B01010000, 
   B10001000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000,    //letter ^

   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B11111000,    //letter _

   B00010000, 
   B00010000, 
   B00001000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000,    //letter '

   B00000000, 
   B00000000, 
   B01110000, 
   B10001000, 
   B10001000, 
   B10011000, 
   B01101000,    //letter a

   B10000000, 
   B10000000, 
   B11110000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B11110000,    //letter b

   B00000000, 
   B00000000, 
   B01111000, 
   B10000000, 
   B10000000, 
   B10000000, 
   B01111000,    //letter c

   B00001000, 
   B00001000, 
   B01111000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B01111000,    //letter d

   B00000000, 
   B00000000, 
   B01110000, 
   B10001000, 
   B11111000, 
   B10000000, 
   B01111000,    //letter e

   B00010000, 
   B00101000, 
   B01110000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000,    //letter f

   B00000000, 
   B00000000, 
   B01110000, 
   B10001000, 
   B01111000, 
   B00001000, 
   B01110000,    //letter g

   B10000000, 
   B10000000, 
   B11110000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10001000,    //letter h

   B00100000, 
   B00000000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000,    //letter i

   B00100000, 
   B00000000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B10100000, 
   B01000000,    //letter j

   B10000000, 
   B10000000, 
   B10001000, 
   B10010000, 
   B10100000, 
   B11010000, 
   B10001000,    //letter k

   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00100000,    //letter l

   B00000000, 
   B00000000, 
   B11010000, 
   B10101000, 
   B10101000, 
   B10101000, 
   B10101000,    //letter m

   B00000000, 
   B00000000, 
   B10110000, 
   B11001000, 
   B10001000, 
   B10001000, 
   B10001000,    //letter n

   B00000000, 
   B00000000, 
   B01110000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B01110000,    //letter o

   B00000000, 
   B00000000, 
   B11110000, 
   B10001000, 
   B11110000, 
   B10000000, 
   B10000000,    //letter p

   B00000000, 
   B00000000, 
   B01111000, 
   B10001000, 
   B01111000, 
   B00001000, 
   B00001000,    //letter q

   B00000000, 
   B00000000, 
   B10110000, 
   B11001000, 
   B10000000, 
   B10000000, 
   B10000000,    //letter r

   B00000000, 
   B00000000, 
   B01111000, 
   B10000000, 
   B01110000, 
   B00001000, 
   B11110000,    //letter s

   B00100000, 
   B00100000, 
   B01110000, 
   B00100000, 
   B00100000, 
   B00100000, 
   B00110000,    //letter t

   B00000000, 
   B00000000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B10011000, 
   B01101000,    //letter u

   B00000000, 
   B00000000, 
   B10001000, 
   B10001000, 
   B10001000, 
   B01010000, 
   B00100000,    //letter v

   B00000000, 
   B00000000, 
   B10001000, 
   B10001000, 
   B10101000, 
   B10101000, 
   B01010000,    //letter w

   B00000000, 
   B00000000, 
   B10001000, 
   B01010000, 
   B00100000, 
   B01010000, 
   B10001000,    //letter x

   B00000000, 
   B00000000, 
   B10001000, 
   B10001000, 
   B11111000, 
   B00001000, 
   B01110000,    //letter y

   B00000000, 
   B00000000, 
   B11111000, 
   B00010000, 
   B00100000, 
   B01000000, 
   B11111000,    //letter z

   B00100000, 
   B01000000, 
   B01000000, 
   B10000000, 
   B01000000, 
   B01000000, 
   B00100000,    //letter {

   B00100000, 
   B00100000, 
   B00100000, 
   B00000000, 
   B00100000, 
   B00100000, 
   B00100000,    //letter |

   B00100000, 
   B00010000, 
   B00010000, 
   B00001000, 
   B00010000, 
   B00010000, 
   B00100000,    //letter }

   B01010000, 
   B10100000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000, 
   B00000000    //letter ~ 

};

/* INPUT VARIABLES */
/* OUTPUT VARIABLES */
/* None */

/*==============================================================================
 * LOCAL CONSTANTS, VARIABLES AND FUNCTION PROTOTYPES
 *============================================================================*/

/* CONSTANTS */
/* None */

/* VARIABLES */
/* None */

/* LOCAL FUNCTION PROTOTYPES */
/* None */

/*==============================================================================
 * LOCAL FUNCTIONS
 *============================================================================*/
/* None */

/*==============================================================================
 * GLOBAL FUNCTIONS
 *============================================================================*/

/* ===========================================================================
*  FUNCTION: 
*
*  DESIGN DESCRIPTION:
*
*
*  PARAMETER LIST:
*     
*
*  RETURNED:
*     
*
*  DESIGN OUTLINE:
*
*  DESIGN NOTES/CONSTRAINTS:
*     None.
*
*=========================================================================== */
void dispPutC(unsigned char ch, unsigned int x_pos,unsigned int y_pos,COLOR fc, COLOR bc)
{
unsigned int x,shifted,on_off,letter;
unsigned int row,byte;

	letter=ch-(32);
	letter=(letter*7);

	dispColor(fc);


	for (row=0;row<7;row++)
	{
		byte = pgm_read_byte(font_5x7+letter+row);

		shifted = byte;
		
		for (x=0;x<5;x++)
		{
			
			//oled_setXY(x_pos+x, y_pos+row);

			on_off = shifted & B10000000;
			on_off = on_off>>7; 
			shifted = shifted << 1;
			if (on_off > 0)
			{
				dispColor(fc);
				dispPixel(x_pos+x,y_pos+row); //write the pixel
			}
			else
			{
				dispColor(bc);
				dispPixel(x_pos+x, y_pos+row); //write the pixel
			}
			
		}
	}

}

/* ===========================================================================
*  FUNCTION: 
*
*  DESIGN DESCRIPTION:
*
*
*  PARAMETER LIST:
*     
*
*  RETURNED:
*     
*
*  DESIGN OUTLINE:
*
*  DESIGN NOTES/CONSTRAINTS:
*     None.
*
*=========================================================================== */
void dispPutS(char * string,unsigned int x_pos, unsigned int y_pos, COLOR fc, COLOR bc)
{

while(*string)
	{
	dispPutC(*string++,x_pos,y_pos,fc, bc);
	x_pos=x_pos+6;
	}

}