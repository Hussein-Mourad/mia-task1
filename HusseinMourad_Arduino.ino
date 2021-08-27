#define ledPin 13
short shift = 1;
unsigned long time = 0;
unsigned long blinkTime = 0;
char password[100];
String str;

void decrypt(char *text, short shift);

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("\nSet up your password:");
  while (Serial.available() == 0) {};
  str = Serial.readString();
  Serial.println("Password is set successfully.");
  str.toCharArray(password, str.length()+1);
}

void loop()
{
  Serial.println("Enter your password: ");
  while(Serial.available()==0){};
  str = Serial.readString();
  
  char inputPassword[str.length()];
  str.toCharArray(inputPassword, str.length()+1);
  
  decrypt(inputPassword, shift);
 
  if(strcmp(inputPassword,password)==0){
    Serial.println("Correct password.");
    shift++;
    digitalWrite(ledPin, HIGH);
    delay(3000);
  }
  else {
    Serial.println("Incorrect password.");
    time = millis();
    blinkTime=millis();
    while (true){
      if(millis()-blinkTime>300){
        blinkTime=millis();
        digitalWrite(ledPin, !digitalRead(ledPin));
      }
      if(millis()-time>3000) break;
    }
  }
  digitalWrite(ledPin, LOW);
}


void decrypt(char *text, short shift) {
    const int length = strlen(text);

    for (int i = 0; i < length; i++) {
        if (isupper(*(text + i)))
            *(text + i) = char(int(*(text + i) - shift - 65) % 26 + 65);
        else
            *(text + i) = char(int(*(text + i) - shift - 97) % 26 + 97);
    }
}