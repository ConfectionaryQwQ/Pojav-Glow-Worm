//
// Created by Vera-Firefly on 2.12.2023.
// Definitions specific to the renderer
//


#define RENDERER_GL4ES 1
#define RENDERER_VK_ZINK 2
#define RENDERER_VIRGL 3
#define RENDERER_VULKAN 4
#define RENDERER_VK_WARLIP 5
#define RENDERER_VK_ZINK_PREF 6



#ifndef POTATOBRIDGE_H
#define POTATOBRIDGE_H
#include <EGL/egl.h>

int pojav_virgl_init();

struct PotatoBridge {
    void* eglContext;    // EGLContext
    void* eglDisplay;    // EGLDisplay
    void* eglSurface;    // EGLSurface
    // void* eglSurfaceRead;
    // void* eglSurfaceDraw;
};

extern struct PotatoBridge potatoBridge;
extern EGLConfig config;

#endif // POTATOBRIDGE_H


