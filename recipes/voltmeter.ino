const int analogInPin = A0;
const int R1 = 20;
const int R2 = 100;

void setup() {
  // シリアル通信用ポートの設定
  Serial.begin(9600);
}

void loop() {
  // 読み取り用変数の設定
  double value = analogRead(analogInPin);

  // 電圧に変換
  value = value * 5 / 1024;        // 5Vを1024等分した値であり
  value = value / R2 * (R1 + R2);  // これを分圧回路で発生した係数で校正

  // シリアル通信でシリアルモニター等に出力
  Serial.println(value);

  // 時刻差の設定[ms]
  delay(500);
}
