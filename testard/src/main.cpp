#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // Инициализация MPU-6050
  Serial.println("Инициализация MPU6050...");
  mpu.initialize();
  
  if (!mpu.testConnection()) {
    Serial.println("Ошибка: MPU6050 не подключен!");
    while (1);
  }

  Serial.println("MPU6050 успешно подключен!");
}

void loop() {
  int16_t ax, ay, az;
  
  // Чтение данных акселерометра
  mpu.getAcceleration(&ax, &ay, &az);

  Serial.print("Ax: ");
  Serial.print(ax);
  Serial.print(" | Ay: ");
  Serial.print(ay);
  Serial.print(" | Az: ");
  Serial.println(az);

  delay(500);
}