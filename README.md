# Smart Industrial Material Tracking Using KiwisIoT

## Project Overview

This project demonstrates an IoT-based industrial material tracking system using the NodeMCU ESP8266 and KiwisIoT platform. It helps monitor material-related information and enables remote observation of tracking data through an online dashboard.

## Hardware Components

- NodeMCU ESP8266
- Tracking sensor or input module used in the project
- Jumper wires
- USB Power supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- Required Sensor Library
- KiwisIoT Arduino Library
- KiwisIoT Dashboard

## Circuit Connections

Connect the tracking sensor or input module to the NodeMCU ESP8266 according to the hardware configuration used in the project.

## Working Principle

The tracking hardware collects material-related information and sends the data to the NodeMCU ESP8266. The controller processes the information and transmits it to the KiwisIoT platform through Wi-Fi.

The online dashboard allows users to remotely monitor tracking data and observe material-related information without needing to access the monitoring hardware directly.

## KiwisIoT Dashboard

- Monitor material tracking data remotely.
- View updated information through the dashboard.
- Track connected system data online.
- Access IoT monitoring information remotely.

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the project configuration.

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

## Applications

- Industrial material tracking
- Manufacturing facilities
- Warehouse management
- Industrial inventory monitoring
- Material handling systems

## Project Reference

**Hackster.io Project:**
[Smart Industrial Material Tracking Using KiwisIoT](https://www.hackster.io/harispidy07/smart-industrial-material-tracking-using-kiwisiot-62e90d)

**KiwisIoT Platform:**
[https://kiwisiot.in/](https://kiwisiot.in/)

**KiwisIoT GitHub Repository:**
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Connecting industrial material monitoring with IoT technology._
