//
//  stars.cpp
//  solar-system
//
//  Created by Yuancheng Zhang on 3/28/17.
//  Copyright © 2017 Yuancheng Zhang. All rights reserved.
//

#include "stars.hpp"

#define PI 3.1415926535

Star::Star(GLfloat radius, GLfloat distance,
           GLfloat speed, GLfloat selfSpeed,
           Star* parent)
{
    // TODO:
}

void Star::drawStar()
{
    // TODO:
}

void Star::update(long timeSpan)
{
    // TODO:
}


Planet::Planet(GLfloat radius, GLfloat distance,
               GLfloat speed,  GLfloat selfSpeed,
               Star* parent, GLfloat rgbColor[3])
: Star(radius, distance, speed, selfSpeed, parent)
{
    // TODO:
}

void Planet::drawPlanet()
{
    // TODO:
}

LightPlanet::LightPlanet(GLfloat radius, GLfloat distance,
                         GLfloat speed, GLfloat selfSpeed,
                         Star* parent, GLfloat rgbColor[3])
: Planet(radius, distance, speed, selfSpeed, parent, rgbColor)
{
    // TODO:
}

void LightPlanet::drawLight()
{
    // TODO:
}
