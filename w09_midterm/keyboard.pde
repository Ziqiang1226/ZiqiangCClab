
import processing.serial.*;

Serial myPort;       

void setup(){
  printArray(Serial.list());

  myPort = new Serial(this, Serial.list()[3], 9600);

}


void keyPressed(){
  if(key == CODED){
    if(key == ENTER){
      myPort.write(0);
    }else if(key == UP){
      myPort.write(1);
    }else if(key == LEFT){
      myPort.write(2);
    }else if(key == RIGHT){
      myPort.write(3);
    }else if(key == DOWN){
      myPort.write(4);
    }
  }
}
