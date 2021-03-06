//
//  MarkupDotUIView.h
//  MarkupProject
//
//  Created by Sun Jimmy on 7/16/13.
//  Copyright (c) 2013 Sun Jimmy. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FeaturePointMoveDelegate <NSObject>
- (void)onFeaturePointMoved:(int)tag;
@end

@interface MarkupDotUIView : UIView{

}

@property (nonatomic, weak) id<FeaturePointMoveDelegate> movedDelegate;

@end
