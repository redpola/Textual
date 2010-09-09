#import <Cocoa/Cocoa.h>

@interface LanguagePreferences : NSObject 

+ (void)setThemeForLocalization:(NSString *)path;
+ (NSString *)localizedStringWithKey:(NSString *)key;

@end