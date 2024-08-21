void setup() {

  Serial.begin(9600);
//1D Array 
  int array[]={10,30,20,15};
  char carray[]={'a','b'};
  float farray[]={3.155,9.4564,546.45};
  
  Serial.println("Number of elements of the integer array:");
  Serial.println(sizeof(array)/sizeof(array[0]));
  
  Serial.println("Number of elements of the character array:");
  Serial.println(sizeof(carray)/sizeof(carray[0]));
  
  Serial.println("Number of elements of the float array:");
  Serial.println(sizeof(farray)/sizeof(farray[0]));
  
  //putting 100 to 109 in array
  for(int i=100;i<=109;i++){
  array[i-100]=i;
  }
  
  //output of an array
  for(int i=0;i<10;i++){
  Serial.println(array[i]);
  }
 
  
//2D Array
  
  char Array[][3]={{'a','b','c',},{'d','e','f'},{'g','h','i'}};
  
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
     Serial.print(Array[i][j]);Serial.print(" ");
    }
     Serial.println("");
  }
  
  
}
void loop() {
}
