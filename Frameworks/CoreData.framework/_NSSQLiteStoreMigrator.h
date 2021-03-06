/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLCore, NSSQLModel, NSSQLAdapter, NSMappingModel, NSMutableDictionary, NSSQLConnection;

@interface _NSSQLiteStoreMigrator : NSObject  {
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLConnection *_connection;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    BOOL _hasPKTableChanges;
}

@property(readonly) NSSQLAdapter * adapter;

+ (void)_setAnnotatesMigrationMetadata:(BOOL)arg1;
+ (BOOL)_annotatesMigrationMetadata;

- (void)dealloc;
- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;
- (id)createEntityMigrationStatements;
- (id)createStatementsForUpdatingEntityKeys;
- (void)_populateTableMigrationDescriptions;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 migrationType:(int)arg3;
- (id)tableMigrationDescriptionForEntity:(id)arg1;
- (id)createIndexStatementsForEntity:(id)arg1;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;
- (BOOL)performMigration:(id*)arg1;
- (id)adapter;

@end
