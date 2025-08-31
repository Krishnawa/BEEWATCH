#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  while (!Serial)
    delay(10);

  // Initialize I2C on custom pins (GPIO 3 = SDA, GPIO 4 = SCL)
  Wire.begin(3, 4);
  Wire.setClock(100000); // Optional, for stability

  // Initialize MPU6050
  if (!mpu.begin(0x68, &Wire)) {
    Serial.println("MPU6050 not found!");
    while (1) delay(10);
  }

  Serial.println("MPU6050 ready. Outputting CSV for Serial Plotter:");
  Serial.println("AccelX,AccelY,AccelZ,GyroX,GyroY,GyroZ");

  mpu.setAccelerometerRange(MPU6050_RANGE_4_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Print accelerometer and gyro values comma-separated for Serial Plotter
  Serial.print(a.acceleration.x); Serial.print(",");
  Serial.print(a.acceleration.y); Serial.print(",");
  Serial.print(a.acceleration.z); Serial.print(",");
  Serial.print(g.gyro.x); Serial.print(",");
  Serial.print(g.gyro.y); Serial.print(",");
  Serial.println(g.gyro.z);

  delay(50); // Adjust for your sampling rate (~20Hz)
}
