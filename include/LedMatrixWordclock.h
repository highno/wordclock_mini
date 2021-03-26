#ifndef ___ledmatrixwordclock_h___
#define ___ledmatrixwordclock_h___

#define SEGMENT_FUENF 1
#define SEGMENT_ZEHN 2
#define SEGMENT_FUENFZEHN 3
#define SEGMENT_VOR 4
#define SEGMENT_NACH 5
#define SEGMENT_HALB 6
#define SEGMENT_NUM_1 11
#define SEGMENT_NUM_2 12
#define SEGMENT_NUM_3 13
#define SEGMENT_NUM_4 14
#define SEGMENT_NUM_5 15
#define SEGMENT_NUM_6 16
#define SEGMENT_NUM_7 17
#define SEGMENT_NUM_8 18
#define SEGMENT_NUM_9 19
#define SEGMENT_NUM_10 20
#define SEGMENT_NUM_11 21
#define SEGMENT_NUM_12 22

class LedMatrixWordclock {
    
public:
    
    /**
     * Constructor.
     * matrix: Reference to the LedMatrix object to display on
     */
    LedMatrixWordclock(LedMatrix* matrix);
    void showSegment(byte segmentId, bool noShow);
    void showWordsOnLED(time_t local, bool noShow);
    long getNewSegments();

private:
    LedMatrix* pLedMatrix;
    long newSegments = 0;
//    void calculateTextAlignmentOffset();
//    void calculateTextAlignmentOffsetProportional();
};

#endif