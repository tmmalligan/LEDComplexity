/*
 * Week 5: LED Complexity
 * By Taylor Malligan
 */

// A0 has the pushbutton attached to it. Give it a name:
  int pushButton = A0;

//constant integers created to equal to where each variable is placed on the board
  const int ExternalLED = 13;
  const int InternalLED = 12;
 
  void setup() { // the setup routine runs once when you press reset:
    Serial.begin(9600); // initialize serial communication at 9600 bits per second:
  
     // make the pushbutton's pin an input:
    pinMode(pushButton, INPUT);
    pinMode(ExternalLED,OUTPUT);
    pinMode(InternalLED,OUTPUT);

  }


  void loop() { // (the loop where variables run
   
  int sensorValue = analogRead(pushButton); /// new variable 
  Serial.println(sensorValue);   // print out sensorValue
  delay(1);        // delay in between reads for stability
  sensorValue = constrain(sensorValue, 1300, 3700);
//  int brightness = map(sensorValue, 0, 40, 0 ,255);

  if (sensorValue > 1300 && sensorValue <3500){
    digitalWrite(ExternalLED, HIGH);
    delay(200);
    digitalWrite(InteralLED,LOW);
    delay(200);
    }
  }
  else {
    digitalWrite(ExternalLED, LOW);
    digitalWrite(InternalLED,HIGH);
  }
   
  
  
  
//    if(buttonState == 0) {
//      digitalWrite(ExternalLED, HIGH); 
//    }
//    else {
//      digitalWrite(ExternalLED, LOW); 
//    }
//   
//  }
