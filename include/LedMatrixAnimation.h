#ifndef ___ledmatrixanimation_h___
#define ___ledmatrixanimation_h___
#include "LedMatrix.h"
#include <elapsedMillis.h>         // version 1.0.4, by Paul Stoffregen


class LedMatrixAnimation {
    
public:
    
    /**
     * Constructor.
     * matrix: Reference to the LedMatrix object to display on
     */
    LedMatrixAnimation(LedMatrix& matrix) ;
    bool animationDone();
    void showImage(byte imageId);
    void animationLoop();
    void animationStart(byte animation, byte repeats);

private:
    LedMatrix* pLedMatrix;
    bool animation_done = true;
    byte active_animation = 0;
    word active_animation_frame = 0;
    byte active_animation_speed = 0;
    byte active_animation_repeat = 0;
    byte active_animation_cycle = 0;
    elapsedMillis animation_timer = 0;

    void animationShowFrame();
};

#endif