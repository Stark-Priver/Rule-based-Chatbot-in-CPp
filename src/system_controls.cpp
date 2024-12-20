//
// Created by priver on 12/18/24.
//
#include "system_controls.h"
#include <cstdlib>
#include <iostream>
// the function to shutdown the computer
void shutdownComputer() {
#if defined(_WIN32) || defined(_WIN64)
    system("shutdown /s /t 0");
#else
    system("shutdown now");
#endif
}

// Function to Restart  the Computer
void restartComputer() {
#if defined(_WIN32) || defined(_WIN64)
    system("shutdown /r /t 0");
#else
    system("reboot");
#endif
}
//Function to Turn on the Wifi
void toggleWiFi(bool enable) {
#if defined(_WIN32) || defined(_WIN64)
    if (enable) {
        system("netsh interface set interface name=\"Wi-Fi\" admin=ENABLED");
    } else {
        system("netsh interface set interface name=\"Wi-Fi\" admin=DISABLED");
    }
#else
    if (enable) {
        system("nmcli radio wifi on");
    } else {
        system("nmcli radio wifi off");
    }
#endif
}
//Function to turn on the Hotsport with the SSID Myhotspot and Password MyPassord
void turnOnHotspot() {
#if defined(_WIN32) || defined(_WIN64)
    system("netsh wlan start hostednetwork");
#else
    system("nmcli device wifi hotspot ifname wlan0 ssid MyHotspot password MyPassword");
#endif
}

void turnOnBluetooth() {
#if defined(_WIN32) || defined(_WIN64)
    // Windows specific Bluetooth turn-on command
    std::cout << "Turning on Bluetooth on Windows..." << std::endl;
    system("netsh wlan start bluetooth"); // Command to turn on Bluetooth
#elif defined(__linux__)
    // Linux (Kali and others) specific Bluetooth turn-on command
    std::cout << "Turning on Bluetooth on Linux..." << std::endl;
    system("systemctl start bluetooth"); // Command to start Bluetooth service
#else
    std::cerr << "Platform not supported for Bluetooth turning on." << std::endl;
#endif
}

