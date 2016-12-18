#include "PlanetClass.hpp"
#include <cmath>


void PlanetClass::setup(string s){
    a = s;
    planetGroup.add(name.set(a));
    planetGroup.add(rotateSpeed.set("speed", 0.1, 0.0, 9.0));
    planetGroup.add(distance.set("distance", 1.0, 0.0, 600));
    
    planetGroup.add(red.set("red", 255, 0, 255));
    planetGroup.add(green.set("green", 255, 0, 255));
    planetGroup.add(blue.set("blue", 255, 0, 255));
    
    planetGroup.add(radius.set("radius", 10, 1, 50));
}

void PlanetClass::update(){
    rotation++;
    posX= distance;
    posY= distance;
}

void PlanetClass::draw(){
    ofSetColor(red, green, blue);
    ofRotate(rotation* rotateSpeed);
    ofDrawCircle(posX, posY, radius);
    ofDrawBitmapString(a, posX+10, posY+10);
    
}
