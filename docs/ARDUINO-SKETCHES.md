# Arduino test sketches

Test sketches for BEEWATCH MK2 (ESP32).

| Path | What it tests | Libraries #included | Pins used (as written) | Serial baud rate |
|------|---------------|---------------------|------------------------|------------------|
| `Arduino/Display/HelloWorld_display (1)/HelloWorld_display.ino` | Display initialization and text output | `Arduino_GFX_Library.h` | `GFX_BL` 7; Bus: DC 9, CS 10, SCK 12, MOSI 11; Display RST 8 | 115200 |
| `Arduino/Display/HelloWorld_display/HelloWorld_display.ino` | Display initialization and text output | `Arduino_GFX_Library.h` | `GFX_BL` 7; Bus: DC 9, CS 10, SCK 12, MOSI 11; Display RST 8 | 115200 |
| `Arduino/Display/spi_display/spi_display.ino` | GC9A01A graphics primitives and benchmarks | `SPI.h`, `Adafruit_GFX.h`, `Adafruit_GC9A01A.h` | `TFT_DC` 9, `TFT_CS` 10 | 9600 |
| `Arduino/Gyro/MPU6050_plotter/MPU6050_plotter.ino` | MPU6050 accelerometer/gyro data for Serial Plotter | `Wire.h`, `Adafruit_MPU6050.h`, `Adafruit_Sensor.h` | Wire: SDA 3, SCL 4; I2C Address 0x68 | 115200 |
| `Arduino/Gyro/MPU6050_test_code/MPU6050_test_code.ino` | MPU6050 accelerometer/gyro/temperature values | `Wire.h`, `Adafruit_MPU6050.h`, `Adafruit_Sensor.h` | Wire: SDA 3, SCL 4; I2C Address 0x68 | 115200 |
| `Arduino/Gyro/MPU/MPU.ino` | MPU6050 configuration and sensor readings | `Adafruit_MPU6050.h`, `Adafruit_Sensor.h`, `Wire.h` | Not stated in the code | 115200 |

The two `HelloWorld_display` folders contain identical code.

## HelloWorld_display (1)
When it works, the Serial Monitor prints "Arduino_GFX Hello World example". The display shows "Hello World!" in red at cursor (10, 10) for 5 seconds, then cycles random colors, sizes, and positions every 10 milliseconds.

## HelloWorld_display
When it works, the Serial Monitor prints "Arduino_GFX Hello World example". The display shows "Hello World!" in red at cursor (10, 10) for 5 seconds, then cycles random colors, sizes, and positions every 10 milliseconds.

## spi_display
When it works, the Serial Monitor prints benchmark times for screen fill, text, lines, rectangles, circles, triangles, and rounded rectangles. The display cycles through 4 rotations, showing text output during each rotation.

## MPU6050_plotter
When it works, the Serial Monitor prints a header "AccelX,AccelY,AccelZ,GyroX,GyroY,GyroZ" followed by comma-separated values every 50 milliseconds. These values can be viewed in the Arduino Serial Plotter.

## MPU6050_test_code
When it works, the Serial Monitor prints "MPU6050 Found!" followed by Acceleration X/Y/Z, Rotation X/Y/Z, and Temperature in degrees Celsius every 1000 milliseconds.

## MPU
When it works, the Serial Monitor prints "Adafruit MPU6050 test!", then prints the configured Accelerometer range, Gyro range, and Filter bandwidth. It then prints Acceleration X/Y/Z in m/s^2, Rotation X/Y/Z in rad/s, and Temperature in degC every 500 milliseconds.

## How to upload
1. Open the `.ino` file in the Arduino IDE.
2. Select the ESP32 board in the Tools menu.
3. Select the correct port.
4. Click Upload.
5. Open the Serial Monitor and set the baud rate to the value in the table for that sketch.

---
Written by the local model (Qwen 3.6) from the code in Arduino/; pins, baud rates, libraries and the identical HelloWorld folders checked against the code.
