#include "LedMatrixWordclock.h"
#include <TimeLib.h>

/**
 * matrix: Reference to the LedMatrix object to display on
 */
LedMatrixWordclock::LedMatrixWordclock(LedMatrix& matrix) {
    pLedMatrix = &matrix;
}

void LedMatrixWordclock::showSegment(byte segmentId, bool noShow) {
  newSegments += 1 << segmentId;
  LedMatrix ledMatrix = (*pLedMatrix);
  if (noShow) return;
  switch (segmentId) {
    case SEGMENT_FUENF:
      ledMatrix.setPixel(0,0);
      ledMatrix.setPixel(1,0);
      ledMatrix.setPixel(2,0);
      ledMatrix.setPixel(3,0);
      break;  
    case SEGMENT_ZEHN:
      ledMatrix.setPixel(4,0);
      ledMatrix.setPixel(5,0);
      ledMatrix.setPixel(6,0);
      ledMatrix.setPixel(7,0);
      break;  
    case SEGMENT_VOR:
      ledMatrix.setPixel(1,1);
      ledMatrix.setPixel(2,1);
      ledMatrix.setPixel(3,1);
      break;  
    case SEGMENT_NACH:
      ledMatrix.setPixel(4,1);
      ledMatrix.setPixel(5,1);
      ledMatrix.setPixel(6,1);
      ledMatrix.setPixel(7,1);
      break;  
    case SEGMENT_HALB:
      ledMatrix.setPixel(0,2);
      ledMatrix.setPixel(1,2);
      ledMatrix.setPixel(2,2);
      ledMatrix.setPixel(3,2);
      break;  
    case SEGMENT_NUM_1:
      ledMatrix.setPixel(0,4);
      ledMatrix.setPixel(1,4);
      ledMatrix.setPixel(2,4);
      ledMatrix.setPixel(3,4);
      break;  
    case SEGMENT_NUM_2:
      ledMatrix.setPixel(0,4);
      ledMatrix.setPixel(1,4);
      ledMatrix.setPixel(0,3);
      ledMatrix.setPixel(1,3);
      break;  
    case SEGMENT_NUM_3:
      ledMatrix.setPixel(4,7);
      ledMatrix.setPixel(5,7);
      ledMatrix.setPixel(6,7);
      ledMatrix.setPixel(7,7);
      break;  
    case SEGMENT_NUM_4:
      ledMatrix.setPixel(4,2);
      ledMatrix.setPixel(5,2);
      ledMatrix.setPixel(6,2);
      ledMatrix.setPixel(7,2);
      break;  
    case SEGMENT_NUM_5:
      ledMatrix.setPixel(4,3);
      ledMatrix.setPixel(5,3);
      ledMatrix.setPixel(6,3);
      ledMatrix.setPixel(7,3);
      break;  
    case SEGMENT_NUM_6:
      ledMatrix.setPixel(3,4);
      ledMatrix.setPixel(4,4);
      ledMatrix.setPixel(5,4);
      ledMatrix.setPixel(6,4);
      ledMatrix.setPixel(7,4);
      break;  
    case SEGMENT_NUM_7:
      ledMatrix.setPixel(1,6);
      ledMatrix.setPixel(2,6);
      ledMatrix.setPixel(3,6);
      ledMatrix.setPixel(4,6);
      ledMatrix.setPixel(5,6);
      ledMatrix.setPixel(6,6);
      break;  
    case SEGMENT_NUM_8:
      ledMatrix.setPixel(0,7);
      ledMatrix.setPixel(1,7);
      ledMatrix.setPixel(2,7);
      ledMatrix.setPixel(3,7);
      break;  
    case SEGMENT_NUM_9:
      ledMatrix.setPixel(4,5);
      ledMatrix.setPixel(5,5);
      ledMatrix.setPixel(6,5);
      ledMatrix.setPixel(7,5);
      break;  
    case SEGMENT_NUM_10:
      ledMatrix.setPixel(1,5);
      ledMatrix.setPixel(2,5);
      ledMatrix.setPixel(3,5);
      ledMatrix.setPixel(4,5);
      break;  
    case SEGMENT_NUM_11:
      ledMatrix.setPixel(0,4);
      ledMatrix.setPixel(0,5);
      ledMatrix.setPixel(0,6);
      break;  
    case SEGMENT_NUM_12:
      ledMatrix.setPixel(0,3);
      ledMatrix.setPixel(1,3);
      ledMatrix.setPixel(2,3);
      ledMatrix.setPixel(3,3);
      ledMatrix.setPixel(4,3);
      break;  
  }
}

void LedMatrixWordclock::showWordsOnLED(time_t local,bool noShow) {
  LedMatrix ledMatrix = (*pLedMatrix);
  if (!noShow) {
    ledMatrix.clear();
//    DPRINTLN("now showing new segments");
  }
  newSegments = 0;  
  if (minute(local)<5) {
    // bei Punkt x keine besonderen Elemente
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 11) % 12) + 1, noShow);
  } else if (minute(local)<10) {
    showSegment(SEGMENT_FUENF, noShow);
    showSegment(SEGMENT_NACH, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 11) % 12) + 1, noShow);
  } else if (minute(local)<15) {
    showSegment(SEGMENT_ZEHN, noShow);
    showSegment(SEGMENT_NACH, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 11) % 12) + 1, noShow);
  } else if (minute(local)<20) {
    showSegment(SEGMENT_FUENF, noShow);
    showSegment(SEGMENT_ZEHN, noShow);
    showSegment(SEGMENT_NACH, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 11) % 12) + 1, noShow);
  } else if (minute(local)<25) {
    showSegment(SEGMENT_ZEHN, noShow);
    showSegment(SEGMENT_VOR, noShow);
    showSegment(SEGMENT_HALB, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  } else if (minute(local)<30) {
    showSegment(SEGMENT_FUENF, noShow);
    showSegment(SEGMENT_VOR, noShow);
    showSegment(SEGMENT_HALB, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  } else if (minute(local)<35) {
    showSegment(SEGMENT_HALB, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  } else if (minute(local)<40) {
    showSegment(SEGMENT_FUENF, noShow);
    showSegment(SEGMENT_NACH, noShow);
    showSegment(SEGMENT_HALB, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  } else if (minute(local)<45) {
    showSegment(SEGMENT_ZEHN, noShow);
    showSegment(SEGMENT_NACH, noShow);
    showSegment(SEGMENT_HALB, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  } else if (minute(local)<50) {
    showSegment(SEGMENT_FUENF, noShow);
    showSegment(SEGMENT_ZEHN, noShow);
    showSegment(SEGMENT_VOR, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  } else if (minute(local)<55) {
    showSegment(SEGMENT_ZEHN, noShow);
    showSegment(SEGMENT_VOR, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  } else if (minute(local)<60) {
    showSegment(SEGMENT_FUENF, noShow);
    showSegment(SEGMENT_VOR, noShow);
    showSegment(SEGMENT_NUM_1 - 1 + ((hour(local) + 12) % 12) + 1, noShow);
  }
  if (!noShow) ledMatrix.commit();
}

long LedMatrixWordclock::getNewSegments() {
    return newSegments;
}
