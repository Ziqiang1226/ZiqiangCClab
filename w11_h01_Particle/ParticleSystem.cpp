

#include "ParticleSystem.hpp"
//--------------------------------------------
ParticleSystem::ParticleSystem(ofVec2f position)
: mPosition(position)
, mEmitRate(20)
, mIsAddingParticles(true)
{
}

//--------------------------------------------------------------
void ParticleSystem::update(ofVec2f force)
{

    if (mIsAddingParticles){
        
        for (int i = 0; i < mEmitRate; i++) {
            Particle particle(mPosition);
            mParticleList.push_back(particle);
        }
    }
    
    for (int i = 0; i < mParticleList.size(); i++) {
        
        ofVec2f diff = ofVec2f(abs(mParticleList[i].mPosition.x - mPosition.x),abs(mParticleList[i].mPosition.y - mPosition.y));

        mParticleList[i].resetForces();

        mParticleList[i].applyForce(force);

        mParticleList[i].update(ofMap(diff.length(), 0, 200, 1, 10));
        
        
        if (diff.length() >= ofRandom(200, 400)) {

            mIsAddingParticles = false;

            if (mParticleList.size() > 0) {
                mParticleList.erase(mParticleList.begin()+i);
                
            }
        }
    }
    
}


//--------------------------------------------------------------
void ParticleSystem::draw()
{
    for (int i = 0; i < mParticleList.size(); i++) {
        mParticleList[i].draw();
    }
}
