int ledPin = 13;       // LEDをデジタルピン13に接続
int analogPin = 0;     // ポテンショメータのワイプ(中央の端子)に
                       // 両端はグランドと+5Vに接続
int val = 0;           // 読み取った値を格納する変数
double amplitude = 0;
double amp_buf = 0;
int threshold = 512;   // 閾値

void setup() {
  pinMode(ledPin, OUTPUT);   // ピン13を出力に設定
  Serial.begin(9600);        // シリアル通信の初期化
}

void loop() {
  val = analogRead(analogPin);    // アナログピンを読み取る
  amplitude = ((double)val - 511.0)*(300.0/1024);
  Serial.println(amplitude);            // デバグ用に送信
   delay(1000);
}
