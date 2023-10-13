//Analog 
int analogInputs[3]; //Incrementamos el valor del Array por cada analog que utilicemos en arduino. Aunque aun no uso ninguno.


//Digital
//--Constantes
//----Tornillos
const int screw01 = 22; //  Marron - Verde
const int screw02 = 23; //  Blanco Marron - Marron
const int screw03 = 24; //  Azul - Azul
const int screw04 = 25; //  Naranja - Blanco
const int screw05 = 26; //  Verde - Violeta
const int screw06 = 27; //  Blanco Azul - Naranja
const int screw07 = 28; //  Blanco Naranja - Gris claro


//--Variables
//----Tornillos
int screwState01 = 0; //
int screwState02 = 0; //
int screwState03 = 0; //
int screwState04 = 0; //
int screwState05 = 0; //
int screwState06 = 0; //
int screwState07 = 0; //


//Pwm and Com






void setup() 
{
  Serial.begin(9600);
  //Analog

  //Digital
  //--Tornillos
  pinMode(screw01, INPUT);
  pinMode(screw02, INPUT);
  pinMode(screw03, INPUT);
  pinMode(screw04, INPUT);
  pinMode(screw05, INPUT);
  pinMode(screw06, INPUT);
  pinMode(screw07, INPUT);
  
  delay(5);
}


void loop() 
{
  //Analog
  for(int i = 0; i < 3; i++) //Incrementamos el valor de i < 3 al valor de analogInputs
  {
    analogInputs[i] = analogRead(i);
    Serial.print(analogInputs[i]);
    Serial.print(" ");
  }

  //Digital
  screwState01 = digitalRead(screw01);
  Serial.print(screwState01);
  Serial.print(" ");
  screwState02 = digitalRead(screw02);
  Serial.print(screwState02);
  Serial.print(" ");
  screwState03 = digitalRead(screw03);
  Serial.print(screwState03);
  Serial.print(" ");
  screwState04 = digitalRead(screw04);
  Serial.print(screwState04);
  Serial.print(" ");
  screwState05 = digitalRead(screw05);
  Serial.print(screwState05);
  Serial.print(" ");
  screwState06 = digitalRead(screw06);
  Serial.print(screwState06);
  Serial.print(" ");
  screwState07 = digitalRead(screw07);
  Serial.print(screwState07);
  Serial.print(" ");
  
  Serial.println();


}
