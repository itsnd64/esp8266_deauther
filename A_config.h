/* This software is licensed under the MIT License: https://github.com/spacehuhntech/esp8266_deauther */

#pragma once

#define ENABLE_DEBUG
#define DEBUG_PORT Serial
#define DEBUG_BAUD 115200

// ========== CONFIGS ========== //
#define SSD1306_I2C
#define FLIP_DIPLAY true
#define DISPLAY_TEXT "Hardware by DSTIKE"
#define BUTTON_UP 12
#define BUTTON_DOWN 13
#define BUTTON_A 14
#define BUTTON_B 255
#define RESET_BUTTON 255
#define USE_LED false
#define USE_DISPLAY true
#define DISPLAY_TIMEOUT 600
#define AUTOSAVE_ENABLED true
#define AUTOSAVE_TIME 60
#define ATTACK_ALL_CH false
#define RANDOM_TX false
#define ATTACK_TIMEOUT 600
#define DEAUTHS_PER_TARGET 50
#define DEAUTH_REASON 7
#define BEACON_INTERVAL_100MS true
#define PROBE_FRAMES_PER_SSID 1
#define CH_TIME 200
#define MIN_DEAUTH_FRAMES 3
#define AP_SSID "pwned"
#define AP_PASSWD "deauther"
#define AP_HIDDEN false
#define AP_IP_ADDR { 192, 168, 4, 1 }
#define WEB_ENABLED true
#define WEB_CAPTIVE_PORTAL false
#define WEB_USE_SPIFFS false
#define DEFAULT_LANG "en"
#define CLI_ENABLED true
#define CLI_ECHO true
#define I2C_ADDR 0x3C
#define I2C_SDA 5
#define I2C_SCL 4
#define WEB_IP_ADDR (192, 168, 4, 1)
#define WEB_URL "deauth.me"
#define ENABLE_MAC_LIST // comment out if you want to save memory

// ======== CONSTANTS ========== //
// Do not change these values unless you know what you're doing!
#define DEAUTHER_VERSION "-1.0.0"
#define DEAUTHER_VERSION_MAJOR 0
#define DEAUTHER_VERSION_MINOR 0
#define DEAUTHER_VERSION_REVISION 0

#define EEPROM_SIZE 4095
#define BOOT_COUNTER_ADDR 1
#define SETTINGS_ADDR 100