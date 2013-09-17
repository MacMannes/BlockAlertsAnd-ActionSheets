//
//  BlockActionSheet.h
//
//

#import <UIKit/UIKit.h>

/**
 * A simple block-enabled API wrapper on top of UIActionSheet.
 */
@interface BlockActionSheet : NSObject {
@protected
    NSMutableArray *_blocks;
    CGFloat _height;
}

@property (nonatomic, readonly, strong) UIView *view;
@property (nonatomic, strong) UIImage *backgroundImage;
@property (nonatomic, readwrite) BOOL vignetteBackground;
@property (nonatomic, strong) NSString *buttonFormat;
@property (nonatomic, strong) UIColor *titleTextColor;
@property (nonatomic, strong) UIColor *titleShadowColor;
@property (nonatomic, strong) UIColor *buttonTextColor;
@property (nonatomic, strong) UIColor *cancelButtonTextColor;
@property (nonatomic, strong) UIColor *destructiveButtonTextColor;
@property (nonatomic, strong) UIColor *buttonShadowColor;
@property (nonatomic, strong) UIFont *buttonFont;


+ (id)sheetWithTitle:(NSString *)title;

- (id)initWithTitle:(NSString *)title;

- (void)setCancelButtonWithTitle:(NSString *) title block:(void (^)()) block;
- (void)setDestructiveButtonWithTitle:(NSString *) title block:(void (^)()) block;
- (void)addButtonWithTitle:(NSString *) title block:(void (^)()) block;

- (void)setCancelButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;
- (void)setDestructiveButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;
- (void)addButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;

- (void)showInView:(UIView *)passedView;

- (void)buttonClicked:(id)sender;

- (NSUInteger)buttonCount;

@end
