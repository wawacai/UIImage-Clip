//
//  UIImage+Clip.h
//  SoSoRun
//
//  Created by 彭作青 on 16/1/27.
//  Copyright © 2016年 SouSouRun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Clip)

/**
 异步将指定图片裁剪成带边框的圆形图片

 @param image 需要裁剪和添加边框的图片
 @param drawSize 图片的绘制区域
 @param borderWidth 图片边框的宽度
 @param borderColor 图片边框的颜色
 @param completion 完成后的回调
 */
- (void)clipImageWithDrawSize:(CGSize)drawSize borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor completion:(void (^)(UIImage *image))completion;

/**
 异步将图片切成圆形图片

 @param drawSize 裁剪后的尺寸
 @param completion 裁剪完的图片
 */
- (void)clipImageWithDrawSize:(CGSize)drawSize completion:(void (^)(UIImage *image))completion;

/// 对图片尺寸进行压缩
+ (UIImage *)clipWithImage:(UIImage*)image scaledToSize:(CGSize)newSize;

/**
 对图片进行裁剪，按照从上到下裁剪，

 @param drawSize 裁剪后照片的尺寸
 @param cutScale 剪掉的比例，裁剪部分占整体的比例
 @return 裁剪后的图片
 */
- (UIImage *)cutImageWithDrawSize:(CGSize)drawSize cutScale:(CGFloat)cutScale;

@end
