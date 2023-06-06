
char stringToMorseCode[] = "";
int audio8 = 8;      // output audio on pin 8
int note = 1200;      // music note/pitch
int dotLen = 100;     // length of the morse code 'dot'
int led12 = 12; // output led morse on pin 12
int led5 = 5; // output led erreur on pin 5
int dashLen = dotLen * 3;    // length of the morse code 'dash'

void setup() {  
  Serial.begin(9600); 
               
}

void loop()
{ 

  char inChar = 0;          
  char inData[100] = "";        // data length of 6 characters
  String variable = "";
  String variable1 = "";
  int index1 = 0;
  if ( Serial.available() > 0 ) {                      // Read from Rx from atmega16

    while (Serial.available() > 0 && index1 < 100)     // read till 6th character
    {
      delay(100);
      inChar = Serial.read();      // start reading serilly and save to variable
      Serial.print(inChar);
      Serial.println(inChar,DEC);
      if (inChar=='\0'){Serial.print('a');}
      inData[index1] = inChar;
      index1++;
      inData[index1] = '\0';         // Add a null at the end

    }
    variable.toUpperCase();       // convert to uppercase
    for (byte  i = 0 ; i < 100 ; i++) {
      variable.concat(String(inData[i]));    // concat strings
    }
    delay(20);
  }
  String  stringToMorseCode = String(variable); 
  Serial.println(stringToMorseCode);                          
  for (int i = 0; i < sizeof(stringToMorseCode) - 1; i++)
  {
  char tmpChar = stringToMorseCode[i];
  tmpChar = toLowerCase(tmpChar); 
 // Serial.print("->");
  //Serial.println(tmpChar);
  GetChar(tmpChar);
  //if (char stringToMorseCode[]!=)
 }
}
void MorseDot()
{
  
  tone(audio8, note, dotLen); // start playing a tone
  //delay(dotLen);              // hold in this position
  digitalWrite(led12,HIGH);// start turn on led3
  delay(dotLen);
  digitalWrite(led12,LOW);
}
void MorseDash()
{
 
  tone(audio8, note, dashLen);  // start playing a tone
  //delay(dashLen);               // hold in this position
   digitalWrite(led12,HIGH);
  delay(dashLen);
  digitalWrite(led12,LOW);
}

void GetChar(char tmpChar)

{

  switch (tmpChar) {

    case 'a': 

    MorseDot();
    MorseDash();
    Serial.print("a");
    
    break;

    case 'b':

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);
    Serial.print("b");
    break;

    case 'c':

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);
Serial.print("c");
    break;

    case 'd':

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100); 
Serial.print("d");
    break;

    case 'e':

    MorseDot();

    delay(100);
Serial.print("e");
    break;

    case 'f':

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);
Serial.print("f");
    break;

    case 'g':

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);
Serial.print("g");
    break;

    case 'h':

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);
Serial.print("h");
    break;

    case 'i':

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);
Serial.print("i");
    break;

    case 'j':

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);
Serial.print("j");
    break;

    case 'k':

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);
Serial.print("k");
    break;

    case 'l':

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);
Serial.print("l");
    break;

    case 'm':

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);
Serial.print("m");
    break;

    case 'n':

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);
Serial.print("n");
    break;

    case 'o':

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);
Serial.print("o");
    break;

    case 'p':

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);
Serial.print("p");
    break;

    case 'q':

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);
Serial.print("q");
    break;

    case 'r':

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);
Serial.print("r");
    break;

    case 's':

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);
Serial.print("s");
    break;

    case 't':

    MorseDash();

    delay(300);
Serial.print("t");
    break;

    case 'u':

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);
Serial.print("u");
    break;

    case 'v':

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);
Serial.print("v");
    break;

    case 'w':

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);
Serial.print("w");
    break;

    case 'x':

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);
Serial.print("x");
    break;

    case 'y':

    MorseDash();

    delay(300);

    MorseDot();

    delay(100);

    MorseDash();

    delay(300);

    MorseDash();

    delay(300);
Serial.print("y");
    break;

    case 'z':

    MorseDash();

    delay(300);
//nicheic
    MorseDash();

    delay(300);   

    MorseDot();

    delay(100);

    MorseDot();

    delay(100);
    Serial.print("z");
    break;
    
    case ' ':

    MorseDash();

    delay(300);
Serial.print(" ");
    break; 
    
    default:

    break;
 

    
  }

}
