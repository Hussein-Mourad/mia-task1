#define ledPin 13
short shift = 1;
unsigned long time = 0;
unsigned long blinkTime = 0;
String password;

String decrypt(String text, short shift);

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("\nSet up your password:");
  while (Serial.available() == 0) {};
  password = Serial.readString();
  Serial.println("Password is set successfully.");

}

void loop()
{
  Serial.println("Enter your password: ");
  while(Serial.available()==0){};
  String inputPassword = Serial.readString();
  
  if (shift == 25) {
        shift = 1;
  }
  
  inputPassword=decrypt(inputPassword, shift++);
 
 
  if(inputPassword ==password){
    digitalWrite(ledPin, HIGH);
    delay(3000);
  }
  else {
    time = millis();
    blinkTime=millis();
    while (true){
      if(millis()-blinkTime>300){
        blinkTime=millis();
        digitalWrite(ledPin, !digitalRead(ledPin));
      }
      if(millis()-time>3000)break;
    }
  }
  digitalWrite(ledPin, LOW);
}


String decrypt(String text, short shift){
  String result = "";

  for (int i = 0; i < text.length(); i++) {
    if (isupper(text[i]))
      result += char(int(text[i] - shift - 65) % 26 + 65);
    else
      result += char(int(text[i] - shift - 97) % 26 + 97);
  }
  return result;
}

