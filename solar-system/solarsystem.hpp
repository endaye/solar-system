//
//  solarsystem.hpp
//  solar-system
//
//  Created by Yuancheng Zhang on 3/28/17.
//  Copyright © 2017 Yuancheng Zhang. All rights reserved.
//

#ifndef solarsystem_hpp
#define solarsystem_hpp
#include "stars.hpp"

// 使用 GLUT 的基本头文件
#ifndef _glut_
#define _glut_
#include <GLUT/glut.h>
#endif

#define STARS_NUM 10

class SolarSystem{
public:
    SolarSystem();
    ~SolarSystem();
    
    void onDisplay();
    void onUpdate();
    void onKeyboard(unsigned char key, int x, int y);
    
private:
    Star* stars[STARS_NUM];
    
    // 定义观察视角的参数
    GLdouble viewX, viewY, viewZ;
    GLdouble centerX, centerY, centerZ;
    GLdouble upX, upY, upZ;
};

#endif /* solarsystem_hpp */
