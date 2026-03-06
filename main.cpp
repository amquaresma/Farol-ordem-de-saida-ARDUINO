int vermelho1 = 6;
int amarelo1 = 5;
int verde1 = 3;
int verde2 = 9;
int amarelo2 = 10;
int vermelho2 = 13;
void setup()
{
 pinMode(verde2, OUTPUT);

pinMode(amarelo2, OUTPUT);

pinMode(vermelho2, OUTPUT);
  pinMode(verde1, OUTPUT);

pinMode(amarelo1, OUTPUT);

pinMode(vermelho1, OUTPUT);

}
 
void loop(){

digitalWrite(vermelho1, HIGH);

digitalWrite(verde1, LOW);

digitalWrite(amarelo1, LOW);

digitalWrite(vermelho2, LOW);

digitalWrite(verde2, HIGH);

digitalWrite(amarelo2, LOW);

delay(2000);

digitalWrite(vermelho1, HIGH);

digitalWrite(verde1, LOW);

digitalWrite(amarelo1, LOW);

digitalWrite(vermelho2, LOW);

digitalWrite(verde2, LOW);

digitalWrite(amarelo2, HIGH);

  delay(2000);

  digitalWrite(vermelho1, LOW);

digitalWrite(verde1, HIGH);

digitalWrite(amarelo1, LOW);

digitalWrite(vermelho2, HIGH);

digitalWrite(verde2, LOW);

digitalWrite(amarelo2, LOW);

  delay(2000);

  digitalWrite(vermelho1, LOW);

digitalWrite(verde1, LOW);

digitalWrite(amarelo1, HIGH);

digitalWrite(vermelho2, HIGH);

digitalWrite(verde2, LOW);

digitalWrite(amarelo2, LOW);

  delay(2000);

  digitalWrite(vermelho1, HIGH);

digitalWrite(verde1, LOW);

digitalWrite(amarelo1, LOW);

digitalWrite(vermelho2, LOW);

digitalWrite(verde2, HIGH);

digitalWrite(amarelo2, LOW);

  delay(2000);

}
//c++ - Matheus Quaresma 2025