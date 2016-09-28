#import <UIKit/UIKit.h>

@class BEVItem;

@interface BEVDetailViewController : UIViewController

@property (nonatomic, strong) BEVItem *item;
@property (nonatomic, copy) void (^dismissBlock)(void);

- (instancetype)initForNewItem:(BOOL)isNew;

@end
