//
//  SGAlertSheet.h
//  FPS
//
//  Created by sungrow on 2020/3/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    SGAlertSheetTypeNormal = 0,
    SGAlertSheetTypeCancelButton,//默认有取消按钮且在最下面
} SGAlertSheetType;

@class SGAlertSheet;
typedef void(^SGAlertSheetHandler) (SGAlertSheet *alertView);

@interface SGAlertSheet : UIView

/** 标题文字颜色*/
@property (nonatomic ,strong) UIColor *titleTextColor;

/** 内容文字颜色*/
@property (nonatomic ,strong) UIColor *messageTextColor;

/** cancleButtonColor*/
@property (nonatomic ,strong) UIColor *cancleButtonColor;

/** cancleButtonTextColor*/
@property (nonatomic ,strong) UIColor *cancleButtonTextColor;

/** cancleButtonText */
@property (nonatomic, copy) NSString *cancleButtonText;

/** 取消按钮与下方是否有间隙*/
@property (nonatomic ,assign) SGAlertSheetType type;

/** 是否有icon */
@property (nonatomic, assign) BOOL isIcon;

@property (nonatomic, strong, readonly) UIImageView *iconImgView;

/** title-- 标题*/
@property (nonatomic ,copy) NSString *title;

/** 内容*/
@property (nonatomic ,copy) NSString *message;

- (instancetype)initWithTitle:(NSString *)title andMessage:(NSString *)message;

- (void)addSheetWithTitle:(NSString *)title color:(UIColor *)color handler:(SGAlertSheetHandler )handler;

- (void)show;
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END

