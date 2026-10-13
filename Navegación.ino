void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT); // Pin de control del motor 1
  pinMode(9, OUTPUT); // Pin de control del motor 2
  pinMode(10, OUTPUT); // Pin de control del motor 3
  pinMode(11, OUTPUT); // Pin de control del motor 4
  delay(1000);
}

void loop() {
  long duracion;
  int valorLinea = SensorIA0(); // Leer el valor del sensor de línea

  Serial.println(valorLinea);
   
  if (valorLinea >500) { 
    girarDerecha();
  } else { 
    girarIzquierda();
  }
 
}

int SensorIA0() {
  int x;
  x = analogRead(A0);
  return x;
}

void girarDerecha() {
  analogWrite(6, 0);
  analogWrite(9, 225);
  analogWrite(10, 110);
  analogWrite(11, 0);
}

void girarIzquierda() {
  analogWrite(6, 200);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
}
