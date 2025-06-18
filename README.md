# Aqua-Surface-Cleaner-Bot 🤖🌊

An Arduino-powered robot designed to clean waste from water surfaces, controlled via Bluetooth using an Android phone.

## 📦 Features
- Dual DC motor control via L298N motor driver
- LED headlight control
- Bluetooth communication (e.g., with HC-05 module)
- Mobile commands for movement: Forward, Backward, Left, Right, Stop, LED on/off

## 🧰 Components Used
- Arduino Uno
- L298N Motor Driver Module
- 2x DC Motors
- HC-05 Bluetooth Module
- 3x AAA Battery Pack
- LED (Headlight)
- Wires, chassis, and mechanical parts

## 🪛 Wiring Overview
| Component       | Arduino Pin |
|----------------|-------------|
| Left Motor FWD | D13         |
| Left Motor REV | D12         |
| Right Motor FWD| D11         |
| Right Motor REV| D10         |
| LED            | D9          |
| Bluetooth RX   | D1 (TX)     |
| Bluetooth TX   | D0 (RX)     |

> ⚠️ Note: Pins D0 and D1 are also used for USB Serial, so disconnect Bluetooth while uploading code.

## 🔧 Commands (Bluetooth)
| Command | Action           |
|---------|------------------|
| `F`     | Forward          |
| `B`     | Backward         |
| `L`     | Turn Right       |
| `R`     | Turn Left        |
| `S`     | Stop             |
| `W`     | LED ON           |
| `w`     | LED OFF          |

## 🧠 How to Upload Code
1. Open `AquaBot.ino` in Arduino IDE
2. Select board: Tools > Board > Arduino Uno
3. Select port: Tools > Port > COMxx
4. Click Upload

