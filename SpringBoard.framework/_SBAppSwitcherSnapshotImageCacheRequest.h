/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject {
    SBAppLayout * _appLayout;
    SBDisplayItem * _displayItem;
    bool  _loadFullSizeSnapshot;
    unsigned long long  _sequenceID;
    XBApplicationSnapshot * _snapshot;
}

@property (nonatomic, retain) SBAppLayout *appLayout;
@property (nonatomic, retain) SBDisplayItem *displayItem;
@property (nonatomic) bool loadFullSizeSnapshot;
@property (nonatomic, readonly) unsigned long long sequenceID;
@property (nonatomic, retain) XBApplicationSnapshot *snapshot;

- (void).cxx_destruct;
- (id)appLayout;
- (id)description;
- (id)displayItem;
- (id)initWithSequenceID:(unsigned long long)arg1;
- (bool)loadFullSizeSnapshot;
- (unsigned long long)sequenceID;
- (void)setAppLayout:(id)arg1;
- (void)setDisplayItem:(id)arg1;
- (void)setLoadFullSizeSnapshot:(bool)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end
