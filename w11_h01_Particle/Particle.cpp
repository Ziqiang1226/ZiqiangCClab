

#include "Particle.hpp"

Particle::Particle(ofVec2f position)
:mPosition(position)
, mVelocity( ofRandom(-2.f, 2.f), ofRandom(-2.f, 2.f))
, mAcceleration(ofVec2f(0))
, mLifeSpan(255.f)
{

}
//-------------------------------------
void Particle::resetForces()
{
    // reset the acceleration
    mAcceleration *= 0;
}
//-------------------------------------
void Particle::applyForce(ofVec2f force)
{

    mAcceleration += force;
}
//-------------------------------------
void Particle::update(float multiplier)
{

    mVelocity += mAcceleration;
    mPosition += mVelocity * multiplier;
    

    if (mLifeSpan > 0){
        mLifeSpan -= 5.f;
    }
    
}
//-------------------------------------
void Particle::draw()
{
    if( mLifeSpan > 100 ){

        ofSetColor(mLifeSpan);
    }else if( mLifeSpan <= 100 ){

        ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
    };
    
    ofDrawCircle(mPosition, 3.f * ofMap(mLifeSpan, 0, 255.f, 0, 1.f));
    
}
