/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconModelFolderCreationAction : NSObject <BSDescriptionProviding> {
    SBFolder * _folder;
    NSIndexPath * _indexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFolder *folder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSIndexPath *indexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)folder;
- (id)indexPath;
- (id)initWithFolder:(id)arg1 indexPath:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
