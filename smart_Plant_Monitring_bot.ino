//Smart Plant Monitring BOT Using Esp8266 by Nilesh:

int MoistureSensor = A0;
int   Waterpump = 4;
float MoistureSensorVal;


void setup() {
   Serial.begin(9600);
   pinMode(MoistureSensor, INPUT);
   pinMode(Waterpump, OUTPUT);
   Serial.println("Plant Monitring BOT is READY to WORK");
  
}

void loop() {
    MoistureSensorVal = analogRead(MoistureSensor);

    if(MoistureSensorVal >= 400)
    { 
     Serial.println("Plant need Water");
      delay(2000);
      digitalWrite(Waterpump, HIGH);
      Serial.println("Water Pump ON 'no worries'");
      }
    else
    {

      Serial.println("Plant Have enough water");
      digitalWrite(Waterpump, LOW);
      }
 
   
}
