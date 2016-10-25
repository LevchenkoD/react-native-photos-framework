#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>

@interface PHHelpers : NSObject
+(NSDateFormatter *)getISODateFormatter;
+(NSString *)NSDateToJsonString:(NSDate *)date andDateFormatter:(NSDateFormatter *)dateFormatter;
+(NSTimeInterval)getTimeSince1970:(NSDate *)date;
+(NSDictionary *)CLLocationToJson:(CLLocation *)loc;
+(NSString *)convertEnumToStringValue:(int)type andValues:(NSDictionary *)values;
@end
