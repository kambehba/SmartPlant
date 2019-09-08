const int WET_SENSOR = A0;
int value = 0;

void setup() {
  Serial.begin(115200);

  
}

void loop() {

   Serial.print("MOISTURE LEVEL : ");
   value= analogRead(WET_SENSOR);
   value= value/10;
   Serial.println(value);

   delay(1000);

  
}




 
