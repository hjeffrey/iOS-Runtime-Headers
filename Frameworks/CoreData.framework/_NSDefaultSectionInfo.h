/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSFetchedResultsController, NSString;



@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo>
{
    NSFetchedResultsController *_controller;
    NSString *_name;
    NSString *_indexTitle;
    NSUInteger _sectionOffset;
    NSUInteger _numberOfObjects;
    NSUInteger _oldSectionNumber;
    id _sectionObjects;
}

@property(readonly) NSUInteger sectionNumber;
@property(readonly) NSArray *objects;
@property NSUInteger oldSectionNumber;
@property(readonly) NSUInteger numberOfObjects;
@property(readonly) NSUInteger sectionOffset;
@property(readonly) NSString *indexTitle;
@property(readonly) NSString *name;


- (id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(NSUInteger)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNumberOfObjects:(NSUInteger)arg1;
- (void)setSectionOffset:(NSUInteger)arg1;
- (NSUInteger)sectionNumber;
- (void)setController:(id)arg1;
- (void)clearSectionObjectsCache;
- (id)objects;
- (NSUInteger)indexOfObject:(id)arg1;
- (NSUInteger)oldSectionNumber;
- (void)setOldSectionNumber:(NSUInteger)arg1;
- (NSUInteger)numberOfObjects;
- (NSUInteger)sectionOffset;
- (id)indexTitle;
- (id)name;

@end