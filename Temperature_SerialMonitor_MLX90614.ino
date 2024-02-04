#include <Wire.h>
#include <Adafruit_MLX90614.h>

// Inisialisasi objek sensor MLX90614
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {

  Serial.begin(115200);
  Wire.begin(21,22);
  mlx.begin();

}

void loop() {

  // Membaca dan menampilkan suhu lingkungan (Ambient) dan suhu objek
  Serial.print("Suhu Lingkungan: ");
  Serial.print(mlx.readAmbientTempC());
  Serial.print("C\tSuhu Objek: ");
  Serial.print(mlx.readObjectTempC());
  Serial.println("C");

  // Delay 1s
  delay(1000);

}
