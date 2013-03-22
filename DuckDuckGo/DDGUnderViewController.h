//
//  DDGUnderViewController.h
//  DuckDuckGo
//
//  Created by Ishaan Gulrajani on 8/14/12.
//
//

#import <UIKit/UIKit.h>
#import "DDGSearchHandler.h"
#import "DDGTabViewController.h"

typedef enum DDGViewControllerType {
    DDGViewControllerTypeHome=0,
    DDGViewControllerTypeSaved,
    DDGViewControllerTypeStories,
    DDGViewControllerTypeSettings
} DDGViewControllerType;

@class DDGSettingsViewController, DDGStory;

@interface DDGUnderViewController : UITableViewController <DDGSearchHandler, DDGTabViewControllerDelegate> {
	NSInteger			menuIndex;
}
@property (nonatomic, readwrite, strong) NSManagedObjectContext *managedObjectContext;

-(void)configureViewController:(UIViewController *)viewController;
-(void)loadSelectedViewController;

- (UIViewController *)viewControllerForType:(DDGViewControllerType)type;
@end
