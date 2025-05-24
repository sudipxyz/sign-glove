# sign-glove
# ✋ Sign Glove – Gesture to Speech Translator for the Mute

**Sign Glove** is a wearable device designed to help people who cannot speak communicate with others using verbal language. It uses **flex sensors** to detect finger gestures and converts them into speech through a **mobile app** built with MIT App Inventor.

---

## 🧠 Problem

Many people across the world who are mute rely on **sign language** for communication. However, most people do not understand sign language, making interaction difficult.

---

## 💡 Solution

The **Sign Glove** translates hand gestures (sign language) into **text and speech** using an Arduino and a smartphone app. This empowers non-verbal individuals to communicate more effectively with anyone.

---

## 🎯 Features

- Gesture recognition using **flex sensors**
- Real-time **serial output** of alphabet letters
- Bluetooth communication to Android app
- Mobile app that **displays and pronounces** the translated gestures

---

## 🧰 Components and Supplies

| Component               | Quantity |
|-------------------------|----------|
| Arduino UNO             | 1        |
| Flex Sensor             | 5        |
| Resistor (10kΩ)         | 5        |
| Breadboard              | 1        |
| Jumper Wires            | As needed |
| USB OTG Cable           | 1        |

---

## 🛠 Tools

- Scotch Tape (for sensor positioning)
- Hot Glue Gun (for securing parts)

---

## 💻 Platforms Used

- [MIT App Inventor 2](https://appinventor.mit.edu/)
- [Tinkercad](https://www.tinkercad.com/) (for simulation)

---

## 🧪 How It Works

1. **Flex sensors** are attached to each finger. As fingers bend, sensor resistance changes.
2. Arduino reads sensor values from analog pins:
    ```cpp
    a = analogRead(A0); // Thumb  
    c = analogRead(A1); // Index  
    d = analogRead(A2); // Middle  
    b = analogRead(A3); // Ring  
    e = analogRead(A4); // Little
    ```
3. Based on finger positions, it identifies letters of the alphabet. For example:
    ```cpp
    if (a < 900 && b > 900 && c > 900 && d > 900 && e > 900 && a > 800) {
      Serial.println("a");
    }
    ```
4. The app reads the **serial output via Bluetooth**, displays the letter, and speaks it out loud.

---

## 📱 Mobile App

- Built using **MIT App Inventor**
- Connects to Arduino via **Bluetooth**
- Receives letters from serial monitor
- **Displays and pronounces** the letters/words

---

## 📦 Folder Structure

# ✋ Sign Glove – Gesture to Speech Translator for the Mute

**Sign Glove** is a wearable device designed to help people who cannot speak communicate with others using verbal language. It uses **flex sensors** to detect finger gestures and converts them into speech through a **mobile app** built with MIT App Inventor.

---

## 🧠 Problem

Many people across the world who are mute rely on **sign language** for communication. However, most people do not understand sign language, making interaction difficult.

---

## 💡 Solution

The **Sign Glove** translates hand gestures (sign language) into **text and speech** using an Arduino and a smartphone app. This empowers non-verbal individuals to communicate more effectively with anyone.

---

## 🎯 Features

- Gesture recognition using **flex sensors**
- Real-time **serial output** of alphabet letters
- Bluetooth communication to Android app
- Mobile app that **displays and pronounces** the translated gestures

---

## 🧰 Components and Supplies

| Component               | Quantity |
|-------------------------|----------|
| Arduino UNO             | 1        |
| Flex Sensor             | 5        |
| Resistor (10kΩ)         | 5        |
| Breadboard              | 1        |
| Jumper Wires            | As needed |
| USB OTG Cable           | 1        |

---

## 🛠 Tools

- Scotch Tape (for sensor positioning)
- Hot Glue Gun (for securing parts)

---

## 💻 Platforms Used

- [MIT App Inventor 2](https://appinventor.mit.edu/)
- [Tinkercad](https://www.tinkercad.com/) (for simulation)

---

## 🧪 How It Works

1. **Flex sensors** are attached to each finger. As fingers bend, sensor resistance changes.
2. Arduino reads sensor values from analog pins:
    ```cpp
    a = analogRead(A0); // Thumb  
    c = analogRead(A1); // Index  
    d = analogRead(A2); // Middle  
    b = analogRead(A3); // Ring  
    e = analogRead(A4); // Little
    ```
3. Based on finger positions, it identifies letters of the alphabet. For example:
    ```cpp
    if (a < 900 && b > 900 && c > 900 && d > 900 && e > 900 && a > 800) {
      Serial.println("a");
    }
    ```
4. The app reads the **serial output via Bluetooth**, displays the letter, and speaks it out loud.

---

## 📱 Mobile App

- Built using **MIT App Inventor**
- Connects to Arduino via **Bluetooth**
- Receives letters from serial monitor
- **Displays and pronounces** the letters/words

---

## 📦 Folder Structure

# ✋ Sign Glove – Gesture to Speech Translator for the Mute

**Sign Glove** is a wearable device designed to help people who cannot speak communicate with others using verbal language. It uses **flex sensors** to detect finger gestures and converts them into speech through a **mobile app** built with MIT App Inventor.

---

## 🧠 Problem

Many people across the world who are mute rely on **sign language** for communication. However, most people do not understand sign language, making interaction difficult.

---

## 💡 Solution

The **Sign Glove** translates hand gestures (sign language) into **text and speech** using an Arduino and a smartphone app. This empowers non-verbal individuals to communicate more effectively with anyone.

---

## 🎯 Features

- Gesture recognition using **flex sensors**
- Real-time **serial output** of alphabet letters
- Bluetooth communication to Android app
- Mobile app that **displays and pronounces** the translated gestures

---

## 🧰 Components and Supplies

| Component               | Quantity |
|-------------------------|----------|
| Arduino UNO             | 1        |
| Flex Sensor             | 5        |
| Resistor (10kΩ)         | 5        |
| Breadboard              | 1        |
| Jumper Wires            | As needed |
| USB OTG Cable           | 1        |

---

## 🛠 Tools

- Scotch Tape (for sensor positioning)
- Hot Glue Gun (for securing parts)

---

## 💻 Platforms Used

- [MIT App Inventor 2](https://appinventor.mit.edu/)
- [Tinkercad](https://www.tinkercad.com/) (for simulation)

---

## 🧪 How It Works

1. **Flex sensors** are attached to each finger. As fingers bend, sensor resistance changes.
2. Arduino reads sensor values from analog pins:
    ```cpp
    a = analogRead(A0); // Thumb  
    c = analogRead(A1); // Index  
    d = analogRead(A2); // Middle  
    b = analogRead(A3); // Ring  
    e = analogRead(A4); // Little
    ```
3. Based on finger positions, it identifies letters of the alphabet. For example:
    ```cpp
    if (a < 900 && b > 900 && c > 900 && d > 900 && e > 900 && a > 800) {
      Serial.println("a");
    }
    ```
4. The app reads the **serial output via Bluetooth**, displays the letter, and speaks it out loud.

---

## 📱 Mobile App

- Built using **MIT App Inventor**
- Connects to Arduino via **Bluetooth**
- Receives letters from serial monitor
- **Displays and pronounces** the letters/words

---

## 📦 Folder Structure
📂 sign-glove/
├── sign_glove.ino # Arduino code for gesture recognition
├── SignGlove.aia # MIT App Inventor project file (optional)
├── README.md # This file


---

## 🚀 Getting Started

1. Upload the Arduino sketch to your board.
2. Connect your flex sensors to the specified analog pins.
3. Install the app on an Android device.
4. Pair your phone with a Bluetooth module (e.g., HC-05) connected to Arduino.
5. Launch the app → Select the paired device → Start communicating!

---

## 🧭 Future Enhancements

- Add support for **words** instead of letters
- Improve gesture resolution using **machine learning**
- Store frequently used phrases
- Add LCD or LED feedback

