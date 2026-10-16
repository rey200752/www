
const int R = 5;
const int G = 9;
const int B = 11;
const int button = A0;

int color = 0;
int lastButton = HIGH;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  int state = digitalRead(button);

  if (state == LOW && lastButton == HIGH) {
    color++;
    if (color > 5) color = 0;
    delay(200);
  }

  lastButton = state;

  switch (color) {
    case 0:
      analogWrite(R, 0);
      analogWrite(G, 255);
      analogWrite(B, 255);
      break;

    case 1:
      analogWrite(R, 255);
      analogWrite(G, 0);
      analogWrite(B, 255);
      break;

    case 2:
      analogWrite(R, 255);
      analogWrite(G, 255);
      analogWrite(B, 0);
      break;

    case 3:
      analogWrite(R, 0);
      analogWrite(G, 0);
      analogWrite(B, 255);
      break;

    case 4:
      analogWrite(R, 0);
      analogWrite(G, 255);
      analogWrite(B, 0);
      break;

    case 5:
      analogWrite(R, 255);
      analogWrite(G, 0);
      analogWrite(B, 0);
      break;
  }
}

