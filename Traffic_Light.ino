
int merah1 = D0;
int merah2 = D3;
int merah3 = D6;

int kuning1 = D1;
int kuning2 = D4;
int kuning3 = D7;

int hijau1 = D2;
int hijau2 = D5;
int hijau3 = D8;

void setup() {
  // put your setup code here, to run once:
  pinMode(merah1, OUTPUT);
  pinMode(merah2, OUTPUT);
  pinMode(merah3, OUTPUT);
  pinMode(kuning1, OUTPUT);
  pinMode(kuning2, OUTPUT);
  pinMode(kuning3, OUTPUT);
  pinMode(hijau1, OUTPUT);
  pinMode(hijau2, OUTPUT);
  pinMode(hijau3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //START LAMPU LALU LINTAS PERTAMA
  digitalWrite(merah1, LOW);
  digitalWrite(kuning1, LOW);
  digitalWrite(hijau3, LOW);
  digitalWrite(hijau2, LOW);
  digitalWrite(merah2, HIGH);
  digitalWrite(merah3, HIGH);
  digitalWrite(hijau1, HIGH);
  delay(2000);

  digitalWrite(hijau1, LOW);

  digitalWrite(kuning1, HIGH);
  delay(1000);
  digitalWrite(kuning1, HIGH);
  digitalWrite(merah1, LOW);
  delay(1000);

  //END LAMPU LALU LINTAS PERTAMA

  //START LAMPU LALU LINTAS KEDUA

  digitalWrite(kuning1, LOW);
  digitalWrite(hijau1, LOW);
  digitalWrite(merah1, HIGH);
  delay(2000);

  digitalWrite(hijau3, LOW);
  digitalWrite(merah3, LOW);
  delay(300);
  digitalWrite(kuning3, HIGH);
  delay(1000);
  digitalWrite(kuning3, HIGH);
  delay(1000);

  digitalWrite(merah3, LOW);
  digitalWrite(kuning3, LOW);
  digitalWrite(merah1, HIGH);
  digitalWrite(merah2, HIGH);
  digitalWrite(hijau3, HIGH);
  delay(2000);

  digitalWrite(kuning3, HIGH);
  digitalWrite(hijau3, LOW);
  delay(1000);

  //END LAMPU LALU LINTAS KEDUA

  //START LAMPU LALU LINTAS KETIGA
  digitalWrite(kuning3, LOW);
  digitalWrite(merah3, HIGH);

  digitalWrite(merah2, HIGH);
  delay(1000);

  digitalWrite(hijau2, LOW);
  digitalWrite(merah2, LOW);
  delay(300);
  digitalWrite(kuning2, HIGH);
  delay(1000);
  digitalWrite(kuning2, HIGH);
  delay(1000);

  digitalWrite(merah2, LOW);
  digitalWrite(kuning2, LOW);
  digitalWrite(merah1, HIGH);
  digitalWrite(merah3, HIGH);
  digitalWrite(hijau2, HIGH);
  delay(2000);

  //END LAMPU LALU LINTAS KETIGA
}
