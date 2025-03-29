# H-Bridge Motor Control using ESP32 & L298N

## 🚀 Overview  
This project demonstrates how to control **DC motors** using an **H-Bridge (L298N) motor driver module** with an **ESP32** microcontroller.

### ✨ Features:
- Controls **speed** and **direction** of DC motors  
- Uses **ESP32 PWM signals**  
- No external libraries required  

---

## 🛠 Components Required  
- **ESP32 Development Board**  
- **L298N Motor Driver Module**  
- **Jumping Wires**  
- **Breadboard**  
- **12V Power Supply**  
- **DC Motors**  

---

##  H-Bridge (L298N) Motor Driver Module  
![L298N Module](https://github.com/im-Fatima/H-Bridge_using_ESP32/blob/main/h-bridge.png)  

---

##  Wiring Connections  
![Wiring Diagram](https://github.com/im-Fatima/H-Bridge_using_ESP32/blob/main/connections.png)  

### **Connections Table**  
| **L298N Pin**  | **ESP32 Pin**  | 
|--------------|-------------|
| EN A        | GPIO 18     | 
| EN B        | GPIO 19     | 
| IN 1        | GPIO 5      | 
| IN 2        | GPIO 17     | 
| IN 3        | GPIO 16     | 
| IN 4        | GPIO 4      |  
| GND         | GND         | 
| VCC         | 12V Power   | 

---

