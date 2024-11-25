#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup()
{
  

pinMode(7,INPUT);
delay(500);
}

void loop()
{

if(digitalRead(7)==HIGH)
{
 
  AudioPlay();
  delay(3000);
  }
  }

void AudioPlay()
{ 
tmrpcm.speakerPin = 9;
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");
return;
}

tmrpcm.setVolume(5);
tmrpcm.play("123.wav");
}
