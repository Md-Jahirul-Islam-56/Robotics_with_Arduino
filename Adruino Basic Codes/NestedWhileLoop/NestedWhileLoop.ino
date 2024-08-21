void setup() {

  Serial.begin(9600);

while(1){
    if(Serial.read()=='s'){
    	 while(1){
 			 Serial.println("Hello");
   			 if(Serial.read()=='b'){
   				 break;
   			 }
		 }
  Serial.println("Loop Break");

    }
}
 
}
void loop() {
}
