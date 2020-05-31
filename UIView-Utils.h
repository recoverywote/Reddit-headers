//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIColor;

@interface UIView (Utils)
- (id)firstSuperviewWhere:(CDUnknownBlockType)arg1;
- (void)applyDottedBorderWithStrokeColor:(id)arg1;
- (_Bool)isRectContainedWithinOrContains:(id)arg1;
- (void)applyRoundedEdges;
- (id)findViewController;
- (void)red_setCenterX:(double)arg1;
- (void)red_setCenter:(struct CGPoint)arg1;
- (void)red_setHeight:(double)arg1;
- (void)red_setWidth:(double)arg1;
- (void)red_setSize:(struct CGSize)arg1;
- (void)red_setOrigin:(struct CGPoint)arg1;
- (void)red_setY:(double)arg1;
- (void)red_setX:(double)arg1;
- (void)red_setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double diagonalLength;
@property(readonly, nonatomic) double frameMaxY;
@property(readonly, nonatomic) double frameMaxX;
@property(readonly, nonatomic) double frameMinY;
@property(readonly, nonatomic) double frameMinX;
@property(readonly, nonatomic) double frameHalfWidth;
@property(readonly, nonatomic) double frameWidth;
@property(readonly, nonatomic) double frameHalfHeight;
@property(readonly, nonatomic) double frameHeight;
- (void)updateSizeConstraintsWithSize:(struct CGSize)arg1;
- (void)constraintToSize:(struct CGSize)arg1;
- (void)horizontallyCenterToView:(id)arg1 topInset:(double)arg2 bottomInset:(double)arg3;
- (void)verticallyCenterToView:(id)arg1 leadingInset:(double)arg2 trailingInset:(double)arg3;
- (void)verticallyCenterToView:(id)arg1;
- (void)pinCenteredToView:(id)arg1;
- (void)pinEdges:(unsigned long long)arg1 toView:(id)arg2 withInsets:(struct UIEdgeInsets)arg3 priority:(float)arg4;
- (void)pinEdges:(unsigned long long)arg1 toView:(id)arg2 withInsets:(struct UIEdgeInsets)arg3;
- (void)pinEdges:(unsigned long long)arg1 toView:(id)arg2;
- (void)pinEdgesToSuperview;
@property(readonly, nonatomic) _Bool hasUsefulIntrinsicContentSize;
- (void)updateThemeProperty;
- (void)associatePropertySetter:(SEL)arg1 withThemePropertyGetter:(SEL)arg2;
- (void)associateSet:(SEL)arg1 themeGet:(SEL)arg2;
- (void)removePropertySetter:(SEL)arg1;
@property(readonly, nonatomic) NSMutableDictionary *selectorMappings; // @dynamic selectorMappings;
- (void)createBorders;
- (void)setRightBorder:(id)arg1;
- (id)rightBorder;
- (void)setBottomBorder:(id)arg1;
- (id)bottomBorder;
- (void)setLeftBorder:(id)arg1;
- (id)leftBorder;
- (void)setTopBorder:(id)arg1;
- (id)topBorder;
@property(nonatomic) double borderInset;
@property(retain, nonatomic) UIColor *borderColor;
@property(nonatomic) double borderWidth;
@property(nonatomic) unsigned long long borderEdges;
- (double)circularCornerRadius;
@end

