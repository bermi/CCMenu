
#import <Cocoa/Cocoa.h>
#import <Growl/Growl.h>
#import "CCMUserDefaultsManager.h"
#import "CCMNotificationAdaptor.h"


typedef enum CCMNotificationServices : NSInteger CCMNotificationAdapterSelection;
enum CCMNotificationServices : NSInteger {
    None,
    NotificationCenter,
    Growl
};

@interface CCMNotificationService : NSObject 
{
    IBOutlet CCMUserDefaultsManager *defaultsManager;
    CCMNotificationAdaptor *notificationAdapter;
}

@property (nonatomic) enum CCMNotificationServices  selectedNotificationService;
@property (nonatomic) BOOL isUserNotificationAvailable;

- (void)start;
- (void)setDefaultsManager:(CCMUserDefaultsManager *)manager;

@end

extern NSString *CCMNotificationServiceChanged;