//
//  solarsystem.hpp
//  solar-system
//
//  Created by Yuancheng Zhang on 3/28/17.
//  Copyright © 2017 Yuancheng Zhang. All rights reserved.
//

#ifndef solarsystem_hpp
#define solarsystem_hpp

// 创建图形窗口的基本宏
#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

#endif /* solarsystem_hpp */

// 使用 GLUT 的基本头文件
#ifndef _glut_
#define _glut_
#include <GLUT/glut.h>
#endif

// 用于注册 GLUT 的回调
void onDisplay(void);
void onUpdate(void);
void onKeyboard(unsigned char key, int x, int y);

int main(int argc, char*  argv[]);
