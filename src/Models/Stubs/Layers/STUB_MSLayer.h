//
//  STUB_MSLayer.h
//  SketchKit
//
//  Created by John Coates on 2/1/16.
//  Copyright © 2016 John Coates. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface STUB_MSLayer : NSObject
@property (readonly) NSString *name;
@property (readonly) NSArray *layers;
@property (readonly) NSString *objectID;
@property(nonatomic) struct CGRect frameInArtboard;
@property(nonatomic) struct CGRect rect;
//@property (readonly) CSK_MSStyle *style;


- (void)invalidateLightweightCopy:(id)arg1;
// groups only
// version < 3.5
- (BOOL)resizeRoot:(BOOL)resize;
// version >= 3.5
- (BOOL)resizeToFitChildrenWithOption:(long long)option;


- (void)hideSelectionTemporarily;

- (void)addLayers:(NSArray <STUB_MSLayer *> *)layers;
@end
