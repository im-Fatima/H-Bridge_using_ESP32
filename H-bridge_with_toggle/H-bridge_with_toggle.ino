 //use PWM pins for controlling speed using Enable pins

#define ENA 19 //pin for controlling speed of MOTOR A
#define IN1 5
#define IN2 17

#define ENB 18  //pin for controlling speed of MOTOR B
#define IN3 16
#define IN4 4

//define pins for the Toggle Switch
#define state1 32
#define state2 33

//set up the functions for movements
void moveForward();
void moveBackward();


void setup() {

  //define pinModes
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(state1, INPUT_PULLUP);
  pinMode(state2, INPUT_PULLUP);

  //for Serial Monitor
  Serial.begin(115200);
}

void loop() {

  //read the toggle pins as HIGH or LOW
  bool toggle1 = digitalRead(state1);
  bool toggle2 = digitalRead(state2);

  //checks for toggle1 to be LOW
  if (!toggle1){
    moveForward();
  } 
  //checks if toggle2 is LOW
  else if (!toggle2) {
    moveBackward();
  }
  //if both of the toggle pins become high it stops. Only happens if you are using a three state switch for forward,backward and stop
   else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    Serial.println("Stopped.");
  }


}

//Function for moving Forward
void moveForward(){
    Serial.println("Moving Forward");
    digitalWrite (IN1, HIGH);
    digitalWrite (IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite (ENA, 130);
    delay(500);
  }
//Function for moving Backward
  void moveBackward(){
    Serial.println("Moving Backward");
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, HIGH);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, HIGH);
    analogWrite (ENA, 130);
    delay(500);
  }