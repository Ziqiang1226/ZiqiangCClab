
#ifndef PlanetClass_hpp
#define PlanetClass_hpp

#include "ofMain.h"

class PlanetClass{
public:
    void setup(string s);
    void update();
    void draw();
    
    ofParameterGroup planetGroup;
    ofParameter<float> rotateSpeed;
    ofParameter<float> distance;
    ofParameter<float> posX;
    ofParameter<float> posY;
    ofParameter<float> radius;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    ofParameter<string> name;
    
    float rotation= 0.0;
    string a;
};

#endif /* PlanetClass_hpp */
