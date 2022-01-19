# 研究で役に立つかも？Arduinoレシピ集

LFCで研究にArduinoを用いる際，すぐにでも実験に導入できるようにまとめた備忘録的なもの．

## Requirement

### Arduino

迷ったらとりあえず [Arduino Uno](https://store-usa.arduino.cc/collections/boards/products/arduino-uno-rev3) を選べば良いかと．また互換品もあるので購入前に軽く調べるのがおすすめ．

### Python

* python 3.8

### Pythonモジュール

* pyserial

## Installation

Pythonモジュールについては以下のコマンドで一括でインストール可能．

```bash
pip install -r requirements.txt
```

## Usage

適当なレポジトリ内でこのプロジェクトをクローンする．

```bash
git clone https://github.com/wakky927/arduino.git
```

<br>

なお，各モジュールやレシピの詳細については`docs`を参照．

## Note

Arduinoは5V以上の電圧負荷がかかってしまうと壊れてしまう可能性があるので，使用前にテスター等で必ず確認して使った方が良い．

## Author

* 和田拓弥
* 北海道大学大学院工学院エネルギー環境システム専攻流れ制御研究室
* wada@ring-me.eng.hokudai.ac.jp

## License

[MIT license](https://en.wikipedia.org/wiki/MIT_License)
