#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

//-------------------Keypad Configuration-------------------
const byte ROWS = 4; 
const byte COLS = 4; 

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; // Rows connected to pins 9, 8, 7, 6
byte colPins[COLS] = {5, 4, 3, 2}; // Columns connected to pins 5, 4, 3, 2

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

//-------------------LCD Configuration-----------------------
LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD address, columns, rows

//-------------------Variables-------------------------------
const char pass[] = "3328";  // Correct passcode
char checkPass[5] = "";      // Array to store input
int passIndex = 0;           // To track the current position in checkPass
int relay = 10;              // Relay pin

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (passIndex < 4) {
      checkPass[passIndex] = key;
      passIndex++;
      checkPass[passIndex] = '\0';  // Null-terminate the string

      // Print the key to the LCD (optional)
      lcd.setCursor(passIndex - 1, 1);
      lcd.print('*'); // To display * instead of the actual key
    }

    if (passIndex == 4) {
      bool match = true;
      for (int i = 0; i < 4; i++) {
        if (checkPass[i] != pass[i]) {
          match = false;
          break;
        }
      }

      if (match) {
        lcd.setCursor(0, 0);
        lcd.print("Light ON!");
        digitalWrite(relay, HIGH);
        delay(2000);
      } else {
        lcd.setCursor(0, 0);
        lcd.print("Try again!");
        delay(2000);
      }

      // Reset for the next attempt
      lcd.clear();
      passIndex = 0;
      for (int i = 0; i < 5; i++) {
        checkPass[i] = '\0'; // Clear the input array
      }
    }
  }

  digitalWrite(relay, LOW);
}
