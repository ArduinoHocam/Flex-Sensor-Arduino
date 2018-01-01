     /*ARDUINO HOCAM SENSÖRLERİ TANIYALIM#13
           FLEX SENSÖR KULLANIMI*/
 int deger;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
deger=analogRead(A0);
Serial.print("Okunan Deger: ");
Serial.println(deger);
delay(50);
}
