# Arduino-ESP32-ESP8266
arduino-esp32-esp8266的例程和库

## ESP32使用时注意
- 启动设置 芯片默认(2,12)内部下拉(0,5,15)内部上拉
- CMD CLK SD0 SD1 SD2 SD3 用于连接模块flash
- ADC1:32,33,(34,35,36,37,38,39)仅输入
- ADC2:0,2,4,12,13,14,15,25,26,27 打开WIFI不可用

![Build Status](https://github.com/espressif/arduino-esp32/workflows/ESP32%20Arduino%20CI/badge.svg) [![Documentation Status](https://readthedocs.com/projects/espressif-arduino-esp32/badge/?version=latest)](https://docs.espressif.com/projects/arduino-esp32/en/latest/?badge=latest)

### Need help or have a question? Join the chat at [![https://gitter.im/espressif/arduino-esp32](https://badges.gitter.im/espressif/arduino-esp32.svg)](https://gitter.im/espressif/arduino-esp32?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

## Contents

- [Development Status](#development-status)
- [Decoding Exceptions](#decoding-exceptions)
- [Issue/Bug report template](#issuebug-report-template)

### Development Status

Latest Stable Release  [![Release Version](https://img.shields.io/github/release/espressif/arduino-esp32.svg?style=plastic)](https://github.com/espressif/arduino-esp32/releases/latest/) [![Release Date](https://img.shields.io/github/release-date/espressif/arduino-esp32.svg?style=plastic)](https://github.com/espressif/arduino-esp32/releases/latest/) [![Downloads](https://img.shields.io/github/downloads/espressif/arduino-esp32/latest/total.svg?style=plastic)](https://github.com/espressif/arduino-esp32/releases/latest/)

Latest Development Release  [![Release Version](https://img.shields.io/github/release/espressif/arduino-esp32/all.svg?style=plastic)](https://github.com/espressif/arduino-esp32/releases/) [![Release Date](https://img.shields.io/github/release-date-pre/espressif/arduino-esp32.svg?style=plastic)](https://github.com/espressif/arduino-esp32/releases/) [![Downloads](https://img.shields.io/github/downloads-pre/espressif/arduino-esp32/latest/total.svg?style=plastic)](https://github.com/espressif/arduino-esp32/releases/)

### Documentation

You can use [Arduino-ESP32 Online Documentation](https://docs.espressif.com/projects/arduino-esp32/en/latest/) to get all information about this project.

* [Getting Started](https://docs.espressif.com/projects/arduino-esp32/en/latest/getting_started.html)
* [Installing (Windows, Linux and macOS)](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)
* [Libraries](https://docs.espressif.com/projects/arduino-esp32/en/latest/libraries.html)
* [ESP-IDF as Component](https://docs.espressif.com/projects/arduino-esp32/en/latest/esp-idf_component.html)
* [FAQ](https://docs.espressif.com/projects/arduino-esp32/en/latest/faq.html)
* [Troubleshooting](https://docs.espressif.com/projects/arduino-esp32/en/latest/troubleshooting.html)

### Supported Chips

Visit the [supported chips](https://docs.espressif.com/projects/arduino-esp32/en/latest/getting_started.html#supported-soc-s) documentation to see the list of current supported ESP32 SoCs.

### Decoding exceptions

You can use [EspExceptionDecoder](https://github.com/me-no-dev/EspExceptionDecoder) to get meaningful call trace.

### Issue/Bug report template
Before reporting an issue, make sure you've searched for similar one that was already created. Also make sure to go through all the issues labelled as [Type: For reference](https://github.com/espressif/arduino-esp32/issues?q=is%3Aissue+label%3A%22Type%3A+For+reference%22+).

Finally, if you are sure no one else had the issue, follow the **Issue template** or **Feature request template** while reporting any [new Issue](https://github.com/espressif/arduino-esp32/issues/new/choose).

### Contributing

We welcome contributions to the Arduino ESP32 project!

See [contributing](https://docs.espressif.com/projects/arduino-esp32/en/latest/contributing.html) in the documentation for more information on how to contribute to the project.
