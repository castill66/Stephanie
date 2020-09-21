/************************************************************************************************************************************************************************                                              
 * - Author               : BELKHIR Mohamed                        *                                               
 * - Profession           : (Electrical Ingineer) MEGA DAS owner   *                                                                                              
 * - Main purpose         : Industrial Application                 *                                                                                 
 * - Copyright (c) holder : All rights reserved                    *
 * - License              : BSD 2-Clause License                   * 
 * - Date                 : 20/04/2017                             *
 * ***********************************************************************************************************************************************************************/
 
 /*********************************** NOTE **************************************/
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:

// * Redistributions of source code must retain the above copyright notice, this
//  list of conditions and the following disclaimer.

// * Redistributions in binary form must reproduce the above copyright notice,
//  this list of conditions and the following disclaimer in the documentation
//  and/or other materials provided with the distribution.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED


//#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// OLED display TWI address
#define OLED_ADDR   0x3C
Adafruit_SSD1306 display(-1);

void happy();
void cierra();
void enfado();
void enfado1();
void entorna();
void triste();
void abre();
 
void setup() 
{
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();
  delay(1000);


}

void loop() 
{

  happy();
  delay (random (500, 1000));
  cierra();
  delay (random (1000, 3000));
  enfado();
  delay (random (1000, 3000));
  cierra();
  delay (150);
  entorna();
  delay (random (1000, 3000));
  cierra();
  delay (150);
  enfado1();
  delay (random (1000, 3000));
  cierra();
  delay (150);
  triste();
  delay (random (1000, 3000));
  cierra();
  delay (150);
  abre();
  delay (random (500, 3000));
  cierra();
  delay (150);
  happy();
  delay (random (500, 1000));
      
}


void abre() {
  display.clearDisplay();
  display.fillCircle (50, 15, 12, WHITE); //ojo izquierdo grande
  display.fillCircle (82, 20, 7, WHITE); //ojo derecho pequeo
  display.display();
}

void cierra() {
  display.clearDisplay();
  display.drawFastHLine(40, 15, 20, WHITE);
  display.drawFastHLine(72, 20, 15, WHITE);
  display.display();
}


void entorna() {
  display.clearDisplay();
  display.fillCircle (42, 10, 20, WHITE); //ojo izquierdo grande
  display.fillCircle (82, 10, 15, WHITE); //ojo derecho pequeo
  display.fillRect (0, 0, 128, 15, BLACK); //ceja superior
  display.fillRect (0, 40, 128, 15, BLACK); //ceja inferior
  display.display();
}

void triste() {
  display.clearDisplay();
  display.fillCircle (42, 10, 17, WHITE); //ojo izquierdo grande
  display.fillCircle (82, 10, 17, WHITE); //ojo derecho pequeo
  display.fillTriangle (0, 0, 0, 35, 78, 0, BLACK); //ceja superior
  display.fillTriangle (50, 0, 128, 35, 128, 0, BLACK); //ceja superior
  display.display();
}

void happy() {
  display.clearDisplay();
  display.fillCircle (42, 25, 15, WHITE); //ojo izquierdo grande
  display.fillCircle (82, 25, 15, WHITE); //ojo derecho pequeo
  display.fillCircle (42, 33, 20, BLACK); //ojo izquierdo grande
  display.fillCircle (82, 33, 20, BLACK); //ojo derecho pequeo
  display.display();
}

void enfado() {
  display.clearDisplay();
  display.fillCircle (42, 10, 18, WHITE); //ojo izquierdo grande
  display.fillCircle (82, 10, 12, WHITE); //ojo derecho pequeo
  display.fillTriangle (0, 0, 54, 26, 118, 0, BLACK); //ceja superior
  display.display();
}
void enfado1() {
  display.clearDisplay();
  display.fillCircle (42, 10, 18, WHITE); //ojo izquierdo grande
  display.fillCircle (82, 10, 12, WHITE); //ojo derecho pequeo
  display.fillTriangle (0, 0, 65, 15, 120, 0, BLACK); //ceja superior
  display.display();
}
