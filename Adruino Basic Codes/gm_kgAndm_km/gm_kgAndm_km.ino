void setup() {

  Serial.begin(9600);
   
  //gm to kg
 float gm=1500;
 float kg=gm/1000;
 Serial.println(kg);
  
  //m to km
    float m=2500;
    float km=m/1000;
    Serial.println(km);
  
  //kg to gm
 float kgm=34;
 gm=kgm*1000;
 Serial.println(gm);
  
   //km to m
    float kim=44;
    m=kim*1000;
    Serial.println(m);
  
  
}

void loop() {

}
