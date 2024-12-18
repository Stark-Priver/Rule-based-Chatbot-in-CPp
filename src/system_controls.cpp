//
// Created by priver on 12/18/24.
//
#include "system_controls.h"
#include <cstdlib>
#include <iostream>

void shutdownComputer() {
#if defined(_WIN32) || defined(_WIN64)
    system("shutdown /s /t 0");
#else
    system("shutdown now");
#endif
}

void restartComputer() {
#if defined(_WIN32) || defined(_WIN64)
    system("shutdown /r /t 0");
#else
    system("reboot");
#endif
}

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

void turnOnHotspot() {
#if defined(_WIN32) || defined(_WIN64)
    system("netsh wlan start hostednetwork");
#else
    system("nmcli device wifi hotspot ifname wlan0 ssid MyHotspot password MyPassword");
#endif
}

