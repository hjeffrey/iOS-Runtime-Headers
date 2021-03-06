/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSMutableArray;

@interface SlotSequence : Slot  {
    NSMutableArray *_slots;
}

@property(retain) NSMutableArray * slots;

+ (id)emptySlotSequence;
+ (id)slotSequenceWithArray:(id)arg1;

- (BOOL)matches:(id)arg1;
- (int)count;
- (id)description;
- (void)dealloc;
- (void)setSlots:(id)arg1;
- (id)subsequenceFromIndex:(int)arg1;
- (id)slotSubsequenceFromIndex:(int)arg1;
- (id)rest;
- (id)portionFollowingOccurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)portionPrecedingOccurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)occurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)indicesOfOccurrencesInTarget:(id)arg1;
- (id)slots;
- (id)reversed;
- (id)overlayedOn:(id)arg1;
- (id)initFromPlist:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)first;
- (BOOL)empty;

@end
