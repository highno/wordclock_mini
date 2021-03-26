#include "LedMatrixWordclock.h"

/**
 * matrix: Reference to the LedMatrix object to display on
 */
LedMatrixWordclock::LedMatrixWordclock(LedMatrix* matrix) {
    pLedMatrix = matrix;
}

void LedMatrixWordclock::showSegment(byte segmentId, bool noShow) {
  newSegments += 1 << segmentId;
  if (noShow) return;
  switch (segmentId) {
    case SEGMENT_FUENF:
      pLedMatrix->setPixel(0,0);
      pLedMatrix->setPixel(1,0);
      pLedMatrix->setPixel(2,0);
      pLedMatrix->setPixel(3,0);
      break;  
    case SEGMENT_ZEHN:
      pLedMatrix->setPixel(4,0);
      pLedMatrix->setPixel(5,0);
      pLedMatrix->setPixel(6,0);
      pLedMatrix->setPixel(7,0);
      break;  
    case SEGMENT_VOR:
      pLedMatrix->setPixel(1,1);
      pLedMatrix->setPixel(2,1);
      pLedMatrix->setPixel(3,1);
      break;  
    case SEGMENT_NACH:
      pLedMatrix->setPixel(4,1);
      pLedMatrix->setPixel(5,1);
      pLedMatrix->setPixel(6,1);
      pLedMatrix->setPixel(7,1);
      break;  
    case SEGMENT_HALB:
      pLedMatrix->setPixel(0,2);
      pLedMatrix->setPixel(1,2);
      pLedMatrix->setPixel(2,2);
      pLedMatrix->setPixel(3,2);
      break;  
    case SEGMENT_NUM_1:
      pLedMatrix->setPixel(0,4);
      pLedMatrix->setPixel(1,4);
      pLedMatrix->setPixel(2,4);
      pLedMatrix->setPixel(3,4);
      break;  
    case SEGMENT_NUM_2:
      pLedMatrix->setPixel(0,4);
      pLedMatrix->setPixel(1,4);
      pLedMatrix->setPixel(0,3);
      pLedMatrix->setPixel(1,3);
      break;  
    case SEGMENT_NUM_3:
      pLedMatrix->setPixel(4,7);
      pLedMatrix->setPixel(5,7);
      pLedMatrix->setPixel(6,7);
      pLedMatrix->setPixel(7,7);
      break;  
    case SEGMENT_NUM_4:
      pLedMatrix->setPixel(4,2);
      pLedMatrix->setPixel(5,2);
      pLedMatrix->setPixel(6,2);
      pLedMatrix->setPixel(7,2);
      break;  
    case SEGMENT_NUM_5:
      pLedMatrix->setPixel(4,3);
      pLedMatrix->setPixel(5,3);
      pLedMatrix->setPixel(6,3);
      pLedMatrix->setPixel(7,3);
      break;  
    case SEGMENT_NUM_6:
      pLedMatrix->setPixel(3,4);
      pLedMatrix->setPixel(4,4);
      pLedMatrix->setPixel(5,4);
      pLedMatrix->setPixel(6,4);
      pLedMatrix->setPixel(7,4);
      break;  
    case SEGMENT_NUM_7:
      pLedMatrix->setPixel(1,6);
      pLedMatrix->setPixel(2,6);
      pLedMatrix->setPixel(3,6);
      pLedMatrix->setPixel(4,6);
      pLedMatrix->setPixel(5,6);
      pLedMatrix->setPixel(6,6);
      break;  
    case SEGMENT_NUM_8:
      pLedMatrix->setPixel(0,7);
      pLedMatrix->setPixel(1,7);
      pLedMatrix->setPixel(2,7);
      pLedMatrix->setPixel(3,7);
      break;  
    case SEGMENT_NUM_9:
      pLedMatrix->setPixel(4,5);
      pLedMatrix->setPixel(5,5);
      pLedMatrix->setPixel(6,5);
      pLedMatrix->setPixel(7,5);
      break;  
    case SEGMENT_NUM_10:
      pLedMatrix->setPixel(1,5);
      pLedMatrix->setPixel(2,5);
      pLedMatrix->setPixel(3,5);
      pLedMatrix->setPixel(4,5);
      break;  
    case SEGMENT_NUM_11:
      pLedMatrix->setPixel(0,4);
      pLedMatrix->setPixel(0,5);
      pLedMatrix->setPixel(0,6);
      break;  
    case SEGMENT_NUM_12:
      pLedMatrix->setPixel(0,3);
      pLedMatrix->setPixel(1,3);
      pLedMatrix->setPixel(2,3);
      pLedMatrix->setPixel(3,3);
      pLedMatrix->setPixel(4,3);
      break;  
  }
}

void LedMatrixWordclock::showWordsOnLED(time_t local,bool noShow) {
  if (!noShow) {
    pLedMatrix->clear();
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
  if (!noShow) pLedMatrix->commit();
}

long LedMatrixWordclock::getNewSegments() {
    return newSegments;
}
