#include "LedMatrixAnimation.h"
#include "animations.h"

/**
 * matrix: Reference to the LedMatrix object to display on
 */
LedMatrixAnimation::LedMatrixAnimation(LedMatrix& matrix) {
    pLedMatrix = &matrix;
}

bool LedMatrixAnimation::animationDone() {
  return animation_done;
}

void LedMatrixAnimation::showImage(byte imageId) {
  LedMatrix ledMatrix = (*pLedMatrix);
  for (int i=0; i<8; i++) {
    ledMatrix.setColumn(i,ani_images[imageId][i]);
  }
  ledMatrix.commit();  
}

void LedMatrixAnimation::animationShowFrame() {
  if (active_animation_frame >= ani_start[active_animation + 1]) {
    active_animation_frame = ani_start[active_animation];
    active_animation_cycle++;
    if (active_animation_cycle >= active_animation_repeat) {
      if (active_animation_repeat == 0) {
        active_animation_cycle = 0;        
      } else {
        animation_done = true;
      }
    }
  }
  if (!animation_done) {
    showImage(ani_frames[active_animation_frame]);
    active_animation_frame++;
  }
}

void LedMatrixAnimation::animationLoop() {
  if (animation_timer > active_animation_speed) {
    animation_timer -= active_animation_speed;
    animationShowFrame();
  }
}

void LedMatrixAnimation::animationStart(byte animation, byte repeats) {
  animation_timer = 0;
  active_animation = animation;
  active_animation_frame = ani_start[active_animation];
  active_animation_speed = ani_speed[active_animation];
  active_animation_repeat = repeats;
  active_animation_cycle = 0;
  animation_done = false;
  animationShowFrame();
}
